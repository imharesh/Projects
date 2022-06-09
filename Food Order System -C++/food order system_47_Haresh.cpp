#include<iostream>
#include<fstream>

using namespace std;

class Food
{
    int quantity;
    int getquantity[15];
    int food_no;
    int ordr_number = 0;
    int ordr_val;
    char name[20];
    char date[15];
    char gender;

    string getFoodName[15];
    string foodName[15]={"Kaju Kari","kadai paneer","Paneer Bhurji","Dal Fry","Dal Tadka","vadapau",
                         "Mancharian Bhel  ","Garlic Soup"," Veg.Noodles","Badam Milkshake","Pista Milkshake ","Veg.burger","Veg.Grill","Paneer Chilli Pizza","Mango Milkshake"};
    double amount[15];
    double getamount[15], getpayableamount[15];
    double Food[15] = {100.00,90.00,120.00,50.00,70.00,35.00,50.00,45.00,55.00,80.00,80.00,60.00,90.00,130.00,80.00};
    double total;
public:
    void getData();
    void showData();
    void modifyData();
    int getordr_number(){return ordr_number;}
}f;

void Food::getData()
{
    int i;

    for (int k= 0; k < 15; k++)
    {
        if (amount[k] != NULL)
        {
            amount[k] = 0;
        }
    }

    for (int l = 0; l < 15; l++)
    {

        if (getquantity[l] != NULL)
        {
            getquantity[l] = NULL;
        }
    }

    if(total != 0)
    {
        total = 0;
    }

    cout<<"*************************************************************\n";
    cout<<"FOOD ID"<<"\t\t    FOOD NAME"<<"          FOOD PRICE(Rupees)"<<endl;
    cout<<"*************************************************************\n";
    cout<<"   1"   <<"\t\t"<<"    Kaju Kari            "<<"	        100.00 Rs."<<endl;
    cout<<"   2"   <<"\t\t"<<"    kadai panner         "<<"		90.00 Rs."<<endl;
    cout<<"   3"   <<"\t\t"<<"    Paneer Bhurji        "<<"		120.00 Rs."<<endl;
    cout<<"   4"   <<"\t\t"<<"    Dal Fry              "<<"		50.00 Rs."<<endl;
    cout<<"   5"   <<"\t\t"<<"    Dal Tadka            "<<"	 	70.00 Rs."<<endl;
    cout<<"   6"   <<"\t\t"<<"    vadapau              "<<" 	        35.00 Rs."<<endl;
    cout<<"   7"   <<"\t\t"<<"    Mancharian Bhel      "<<"		50.00 Rs."<<endl;
    cout<<"   8"   <<"\t\t"<<"    Garlic Soup          "<<"		45.00 Rs."<<endl;
    cout<<"   9"   <<"\t\t"<<"    Veg.Noodles          "<<"	        55.00 Rs."<<endl;
    cout<<"  10"   <<"\t\t"<<"    Badam Milkshake      "<<"	        80.00 Rs."<<endl;
    cout<<"  11"   <<"\t\t"<<"    Pista Milkshake      "<<"		80.00 Rs."<<endl;
    cout<<"  12"   <<"\t\t"<<"    Veg.burger           "<<"		60.00 Rs."<<endl;
    cout<<"  13"   <<"\t\t"<<"    Veg.Grill            "<<"		90.00 Rs."<<endl;
    cout<<"  14"   <<"\t\t"<<"    Paneer Chilli Pizza  "<<"	        130.00 Rs."<<endl;
    cout<<"  15"   <<"\t\t"<<"    Mango Milkshake      "<<"	        80.00 Rs."<<endl;
    cout<<" "<<endl;


    cout<<"Enter Date: ";
    cin.ignore(); cin.getline(date,15);
    cout<< "Enter Customer Name: ";
    cin.getline(name,20);
    cout << "Enter Your Gender(M/F): ";
    cin >> gender;

    cout<<"\n===== Maximum is 15 order for each transaction =====\n";
    cout << "How many Food would you like to order: ";
    cin >> ordr_val;

    if (ordr_val > 15)
    {
        cout << "\nThe food you order is exceed the maximum amount of order...!" << endl;
        system("pause");
    }
    else
    {
        for (i=0; i<ordr_val; i++)
        {
            cout << "\nPlease enter your selection : ";
            cin >> food_no;
            cout << "\nFood Name: " << foodName[food_no-1] << endl << "Price is: " << Food[food_no-1] << " Rs." << endl;
            cout << "\nHow many Food do you want: ";
            cin >> quantity;
            cout << "The amount You need to pay is: " << Food[food_no-1]*quantity <<" Rs." << endl;
            getpayableamount[i] = Food[food_no-1]*quantity;
            amount[i] = Food[food_no-1]*quantity;
            getquantity[i] = quantity;
            getFoodName[i] = foodName[food_no-1];
            getamount[i] = Food[food_no-1];
        }
    }

    if (gender == 'm')
    {    gender = 'M';   }
    else if (gender == 'f')
    {    gender = 'F';  } else {}

    for (int j = 0; j < 15; j++)
    {
        total += amount[j];
    }
    ordr_number++;
    cout << "\n";
}

void Food::modifyData()
{
    int i;

    for (int k= 0; k < 15; k++)
    {
        if (amount[k] != NULL)
        {
            amount[k] = 0;
        }
    }

    for (int l = 0; l < 15; l++)
    {

        if (getquantity[l] != NULL)
        {
            getquantity[l] = NULL;
        }
    }

    if(total != 0)
    {
        total = 0;
    }

    cout<<"*************************************************************\n";
    cout<<"FOOD ID"<<"\t\t    FOOD NAME"<<"          FOOD PRICE(Rupees)"<<endl;
    cout<<"*************************************************************\n";
    cout<<"   1"   <<"\t\t"<<"    Kaju Kari            "<<"	        100.00 Rs."<<endl;
    cout<<"   2"   <<"\t\t"<<"    kadai panner         "<<"		90.00 Rs."<<endl;
    cout<<"   3"   <<"\t\t"<<"    Paneer Bhurji        "<<"		120.00 Rs."<<endl;
    cout<<"   4"   <<"\t\t"<<"    Dal Fry              "<<"		50.00 Rs."<<endl;
    cout<<"   5"   <<"\t\t"<<"    Dal Tadka            "<<"	 	70.00 Rs."<<endl;
    cout<<"   6"   <<"\t\t"<<"    vadapau              "<<" 	        35.00 Rs."<<endl;
    cout<<"   7"   <<"\t\t"<<"    Mancharian Bhel      "<<"		50.00 Rs."<<endl;
    cout<<"   8"   <<"\t\t"<<"    Garlic Soup          "<<"		45.00 Rs."<<endl;
    cout<<"   9"   <<"\t\t"<<"    Veg.Noodles          "<<"	        55.00 Rs."<<endl;
    cout<<"  10"   <<"\t\t"<<"    Badam Milkshake      "<<"	        80.00 Rs."<<endl;
    cout<<"  11"   <<"\t\t"<<"    Pista Milkshake      "<<"		80.00 Rs."<<endl;
    cout<<"  12"   <<"\t\t"<<"    Veg.burger           "<<"		60.00 Rs."<<endl;
    cout<<"  13"   <<"\t\t"<<"    Veg.Grill            "<<"		90.00 Rs."<<endl;
    cout<<"  14"   <<"\t\t"<<"    Paneer Chilli Pizza  "<<"	        130.00 Rs."<<endl;
    cout<<"  15"   <<"\t\t"<<"    Mango Milkshake      "<<"	        80.00 Rs."<<endl;
    cout<<" "<<endl;


    cout<<"Enter Date: ";
    cin.ignore(); cin.getline(date,15);
    cout<< "Enter Customer Name: ";
    cin.getline(name,20);
    cout << "Enter Your Gender(M/F): ";
    cin >> gender;

    cout<<"\n===== Maximum is 15 order for each transaction =====\n";
    cout << "How many Food would you like to order: ";
    cin >> ordr_val;

    if (ordr_val > 15)
    {
        cout << "\nThe food you order is exceed the maximum amount of order...!" << endl;
        system("pause");
    }
    else
    {
        for (i=0; i<ordr_val; i++)
        {
            cout << "\nPlease enter your selection : ";
            cin >> food_no;
            cout << "\nFood Name: " << foodName[food_no-1] << endl << "Price is: " << Food[food_no-1] << " Rs." << endl;
            cout << "\nHow many Food do you want: ";
            cin >> quantity;
            cout << "The amount You need to pay is: " << Food[food_no-1]*quantity <<" Rs." << endl;
            getpayableamount[i] = Food[food_no-1]*quantity;
            amount[i] = Food[food_no-1]*quantity;
            getquantity[i] = quantity;
            getFoodName[i] = foodName[food_no-1];
            getamount[i] = Food[food_no-1];
        }
    }

    if (gender == 'm')
    {    gender = 'M';   }
    else if (gender == 'f')
    {    gender = 'F';  } else {}

    for (int j = 0; j < 15; j++)
    {
        total += amount[j];
    }
    cout << "\n";
}

void Food::showData()
{
    cout<<"\n-----------------------Order Details-----------------------\n";
    cout<<"Order no                     : "<< ordr_number <<endl;
    cout<<"Customer Name                : "<< name <<endl;
    cout<<"Gender                       : "<< gender <<endl;
    cout<<"Date                         : "<< date <<endl;
    cout<<"Number of food Que.          : "<< ordr_val <<endl;
    cout<<"\n       ----------------Order contains---------------- \n"<<endl;
    cout << "   Food Name" << "\t" << "Quantity" << "\t" <<  "Price Rs." << "\t" << "Payable Amount" << "\t" << "" << endl << endl;
    for (int i = 0; i < ordr_val; i++)
    {
        cout << "   " << getFoodName[i] << "\t   " << getquantity[i]  <<  "\t\t" << "" << getamount[i] << " Rs." << "\t\t" << getpayableamount[i] << " Rs." << endl;
    }
    cout<<"\n       --------------------------------------------- \n"<<endl;
    cout<<"Total payable amount is.     : "<< total << " Rs." <<endl;
    cout<<"-----------------------------------------------------------\n";
}

void addData()
{
    ofstream fout;
    fout.open("Food.dat",ios::binary|ios::out|ios::app);
    f.getData();
    fout.write((char*)&f, sizeof(f));
    fout.close();
    cout << "\nOrder Taken Successfully"<<endl;
}

void displayData()
{
    ifstream fin;
    fin.open("Food.dat",ios::in|ios::binary);
    while(fin.read((char*)&f, sizeof(f)))
    {
        f.showData();
        cout << "\n";
    }
    fin.close();
}

void searchData()
{
    int n, flag=0;
    ifstream fin;
    fin.open("Food.dat",ios::in|ios::binary);
    cout<<"Enter Order Number you want to search : ";
    cin>>n;

    while(fin.read((char*)&f, sizeof(f)))
    {
        if(n == f.getordr_number())
        {
            f.showData();
            flag++;
        }
    }
    cout << "\n";
    fin.close();
    if(flag==0)
        cout<<"The Order No. "<<n<<" not found....\n\n";
}

void deleteData()
{
    int n, flag=0;
    ifstream fin;
    ofstream fout,tout;

    fin.open("Food.dat",ios::in|ios::binary);
    fout.open("TempFood.dat",ios::out|ios::app|ios::binary);

    cout<<"Enter Order Number you want to delete: ";
    cin>>n;

    while(fin.read((char*)&f, sizeof(f)))
    {
        if(n == f.getordr_number())
        {
            cout<<"The Order No. "<< n <<" has been deleted:\n";
            tout.write((char*)&f, sizeof(f));
            flag++;
        }
        else
        {
            fout.write((char*)&f, sizeof(f));
        }
    }
    fout.close();
    tout.close();
    fin.close();
    if(flag == 0)
        cout<<"The Order No. "<< n <<" not found....\n\n";
    remove("Food.dat");
    rename("TempFood.dat","Food.dat");
}

void modifyData()
{
    int n, flag=0, pos;
    fstream fio;

    fio.open("Food.dat",ios::in|ios::out|ios::binary);

    cout<<"Enter Order Number you want to Modify : ";
    cin>>n;

    while(fio.read((char*)&f, sizeof(f)))
    {
        pos = fio.tellg();
        if(n == f.getordr_number())
        {
            cout<<"\nOrder No. "<< n <<" will be Changed:\n\n";
            cout<<"\n\nNow Enter the New Details....\n";
            f.modifyData();
            fio.seekg(pos-sizeof(f));
            fio.write((char*)&f, sizeof(f));
            flag++;
        }
    }
    fio.close();

    if(flag == 0)
        cout<< "The Order No. " << n << " not found....!\n\n";
}


int main()
{
    int ch;
    while (1)
    {
        system("cls");
        cout<<"\n"<<"\n";
        cout<<"\t\t\t    Food Management System \n";
        cout<<"\t\t---------------------------------------------\n";
        cout<<"\t\t\t1. Take new order              \n";
        cout<<"\t\t\t2. Display order               \n";
        cout<<"\t\t\t3. Search order                \n";
        cout<<"\t\t\t4. Delete order                \n";
        cout<<"\t\t\t5. Modify Order                \n";
        cout<<"\t\t\t6. Exit                        \n";
        cout<<"\t\t---------------------------------------------\n";
        cout<<"Enter choice: ";
        cin>>ch;
        system("cls");
        switch(ch)
        {
            case 1: addData(); break;
            case 2: displayData(); break;
            case 3: searchData(); break;
            case 4: deleteData(); break;
            case 5: modifyData(); break;
            case 6: exit(0);
            default: cout << "Please enter valid input..!";
        }
        system("pause");
    }
}
