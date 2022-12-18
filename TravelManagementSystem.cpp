#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;
void menu();

class ManageMenu
{
    protected:
        string UserName;
    public:
        ManageMenu()
        {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n Enter Your Name to Continue as an Admin: ";
            cin >> UserName;
            system("CLS");
            menu();
        }
        //ManageMenu()
        
};


class Customers
{
    public:
    string name,gender,address;
    int age,mobileNo;
    static int cusID;
    static char all[999];

    void getDetails()
    {
        ofstream out("old-customers.txt", ios::app);

        {
            cout << "Enter Customer ID: ";
            cin >> cusID;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Age : ";
            cin >> age;
            cout << "Enter Mobile Number : ";
            cin >> mobileNo;
            cout << "Enter Gender : ";
            cin >> gender;
            cout << "Enter Address : ";
            cin >> address;
        
        }
        out << "\nCustomer ID: " << cusID << "\nName : "<< name << "\nAge : " << age << "\nMobile Number : " << mobileNo << "\nGender : " << gender << "\nAddress : " << address << endl;
        out.close();
        cout << "\nSAVED\nNOTE : We save your details record for future preposes\n"<< endl;

        

    }
    void showDetails()
    {
        ifstream in("old-customers.txt");
        {
            if(!in)
            {
                cout << "File Error!" << endl;
            }
            while(!in.eof())
            {
                in.getline(all,999);
                cout <<all << endl;
            }
            in.close();
        }
    }

};

int Customers :: cusID;

class Cabs
{
    public:
        int cabChoice;
        int Kilometers;
        float cabCost;
        static float lastcabCost;

    void cabDetails()
    {
        cout << "We collaborated with fastest,safest, and amartest cab service arround the country" << endl;
        cout << "----------CDR Cabs-----------";
        cout << "1.Rent a Standard Cab - Rs.15 for 1KM" << endl;
        cout << "2.Rent a Luxury Cab - Rs.25 for 1KM" << endl;

        cout <<  "\nTo calculate the cost for your Jurney: "<< endl;
        cout <<  "Enter Which Kind of cab you need : ";
        cin >> cabChoice;
        cout << "Enter Kilometers you have to travel: ";
        cin >> Kilometers;

        int hireCab;

        if(cabChoice == 1)
        {
            cabCost = Kilometers * 15;
            cout << "\nYour tour cost " << cabCost << "rupees for a Standard Cab" << endl;
            cout << "Press 1 to hire this cab: or ";
            cout << "Press 2 to select another cab: ";
            cin >> hireCab;

            system("CLS");

            if(hireCab == 1)
            {
               lastcabCost = cabCost;
               cout << "\nYou have successfully hired a Standard cab" << endl;
               cout << "Goto Menu and take the receipt" << endl;

            }
            else if(hireCab == 2)
            {
                cabDetails();
            }
            else
            {
                cout << "Invalid Input Redirecting to previous menu \nPlease Wait" << endl;
                
                //sleep(1100);
                system("CLS");
                cabDetails();
            }
        }
        else if(cabChoice == 2)
        {
            if(hireCab == 1)
            {
               lastcabCost = cabCost;
               cout << "\nYou have successfully hired a Standard cab" << endl;
               cout << "Goto Menu and take the receipt" << endl;

            }
            else if(hireCab == 2)
            {
                cabDetails();
            }
            else
            {
                cout << "Invalid Input Redirecting to Main menu \nPlease Wait" << endl;
                
                //sleep(1100);
                system("CLS");
                cabDetails();
                menu();
            }
            cout << "\nPress 1 to Redirect Main menu: ";
            cin >> hireCab;
            system("CLS");
            if(hireCab == 1)
            {
                menu();
            }
            else{
                menu();
            }

        }
        
    }

};

float  Cabs:: lastcabCost;

class Booking

{
    public:
        int choiceHotel;
        int packChoice;
        static float hotelCost;

        void hotels()
        {
            string hotelNo[] = {"Avendra","Galmula","Mountain Queen"};
            for(int a=0;a<3;a++)
            {
                cout << (a+1) << "Hotel" << hotelNo[a] << endl;

            }
            cout << "\nCurrenty we collaborated with above hotels!" << endl;
            cout << "Press any key to back or\nEnter number of the hotel you want to book: ";
            cin >> choiceHotel;
            system("CLS");

            if(choiceHotel ==1)
            {
                cout << "------------WELCOME TO HOTEL AVENDRA--------------\n" << endl ;
                cout << "The Garden, Food and beverage. Enjoy all you can drink, Stay cool and get chilled in the summer sun." << endl;
                cout << "Packeges Offered by Avendra:\n" <<endl;

                cout << "1. Standard Pack " <<endl;
                cout << "\tAll basic facilities you need just for: Rs.5000.00"<<endl;
                cout << "2. Premium Pack " <<endl;
                cout << "\tEnjoy Premium : Rs.10000.00"<<endl;
                cout << "3.Luxury Pack " <<endl;
                cout << "\tLive a Luxury at Avendra: Rs.15000.00"<<endl;


                cout << "\nPress another key to back or\nEnter packege number you want to back: ";
                cin >> packChoice;

                if(packChoice ==1)
                {
                    hotelCost = 5000.00;
                    cout << "\nYou have Successfully booked Standard Pack at Avendra"<<endl;
                    cout << "Goto Menu and take the receipt"<<endl;
                }
                else if(packChoice ==2)
                {
                    hotelCost = 10000.00;
                    cout << "\nYou have Successfully booked Premium Pack at Avendra"<<endl;
                    cout << "Goto Menu and take the receipt"<<endl;
                }
                else if(packChoice ==3)
                {
                    hotelCost = 15000.00;
                    cout << "\nYou have Successfully booked Luxury Pack at Avendra"<<endl;
                    cout << "Goto Menu and take the receipt"<<endl;
                }
                else
                {
                    cout << "Invalid Input Redirecting to Previous Menu \nPlease Wait!" << endl;
                    //Sleep(1100);
                    system("CLS");
                    hotels();
                }
                int gotomenu;
                cout << "\nPress 1 to redirect main menu: ";
                cin >> gotomenu;
                if(gotomenu ==1)
                {
                    menu();
                }
                else{
                    menu();
                }
            }
            else if(choiceHotel ==2)
            {
                cout << "------------WELCOME TO HOTEL GALMULA--------------\n" << endl ;
                cout << "The Garden, Food and beverage. Enjoy all you can drink, Stay cool and get chilled in the summer sun." << endl;
                cout << "Packeges Offered by Galmula:\n" <<endl;

                cout << "1. Standard Pack " <<endl;
                cout << "\tAll basic facilities you need just for: Rs.5000.00"<<endl;
                cout << "2. Couple Pack " <<endl;
                cout << "\tEnjoy Premium : Rs.10000.00"<<endl;
                cout << "3.Luxury Pack " <<endl;
                cout << "\tLive a Luxury at Galmula: Rs.15000.00"<<endl;


                cout << "\nPress another key to back or\nEnter packege number you want to back: ";
                cin >> packChoice;

                if(packChoice ==1)
                {
                    hotelCost = 5000.00;
                    cout << "\nYou have Successfully booked Standard Pack at Galmula"<<endl;
                    cout << "Goto Menu and take the receipt"<<endl;
                }
                else if(packChoice ==2)
                {
                    hotelCost = 10000.00;
                    cout << "\nYou have Successfully booked couple  Pack at Galmula"<<endl;
                    cout << "Goto Menu and take the receipt"<<endl;
                }
                else if(packChoice ==3)
                {
                    hotelCost = 15000.00;
                    cout << "\nYou have Successfully booked Luxury Pack at Galmula"<<endl;
                    cout << "Goto Menu and take the receipt"<<endl;
                }
                else
                {
                    cout << "Invalid Input Redirecting to Previous Menu \nPlease Wait!" << endl;
                    //Sleep(1100);
                    system("CLS");
                    hotels();
                }
                int gotomenu;
                cout << "\nPress 1 to redirect main menu: ";
                cin >> gotomenu;
                if(gotomenu ==1)
                {
                    menu();
                }
                else{
                    menu();
                }
            }
            else if(choiceHotel ==3)
            {
                cout << "------------WELCOME TO HOTEL MOUNTAIN QUEEN--------------\n" << endl ;
                cout << "The Garden, Food and beverage. Enjoy all you can drink, Stay cool and get chilled in the summer sun." << endl;
                cout << "Packeges Offered by Mountain Queen:\n" <<endl;

                cout << "1. Standard Pack " <<endl;
                cout << "\tAll basic facilities you need just for: Rs.5000.00"<<endl;
                cout << "2. Couple Pack " <<endl;
                cout << "\tEnjoy Premium : Rs.10000.00"<<endl;
                cout << "3.Luxury Pack " <<endl;
                cout << "\tLive a Luxury at Mountain Queen: Rs.15000.00"<<endl;


                cout << "\nPress another key to back or\nEnter packege number you want to back: ";
                cin >> packChoice;

                if(packChoice ==1)
                {
                    hotelCost = 5000.00;
                    cout << "\nYou have Successfully booked Standard Pack at Mountain Queen"<<endl;
                    cout << "Goto Menu and take the receipt"<<endl;
                }
                else if(packChoice ==2)
                {
                    hotelCost = 10000.00;
                    cout << "\nYou have Successfully booked couple Pack at Mountain Queen"<<endl;
                    cout << "Goto Menu and take the receipt"<<endl;
                }
                else if(packChoice ==3)
                {
                    hotelCost = 15000.00;
                    cout << "\nYou have Successfully booked Luxury Pack at Mountain Queen"<<endl;
                    cout << "Goto Menu and take the receipt"<<endl;
                }
                else
                {
                    cout << "Invalid Input Redirecting to Previous Menu \nPlease Wait!" << endl;
                    //Sleep(1100);
                    system("CLS");
                    hotels();
                }
                int gotomenu;
                cout << "\nPress 1 to redirect main menu: ";
                cin >> gotomenu;
                if(gotomenu ==1)
                {
                    menu();
                }
                else
                {
                    menu();
                }
            }

        }
};

float Booking :: hotelCost;
class Charges : public Booking, Cabs,Customers
{
    
    public :
        void PrintBill()
        {
            ofstream cout("receipt.txt");
            {
                cout << "-----------CDR TRAVEL AGENCY-------------" << endl;
                cout << "-----------Receipt---------------"<<endl;
                cout << "_________________________________" << endl;

                cout << "Customer ID: " << Customers:: cusID <<endl;
                cout << "Description\t\t Total" << endl;
                cout << "Hotel Cost:\t\t " << fixed << setprecision(2) << Booking :: hotelCost<<endl;
                cout << "Travel(cab) Cost:\t " << fixed << setprecision(2) << Cabs :: lastcabCost<<endl; 

                cout << "____________________________" << endl;
                cout << "Total Charge:\t\t" << fixed << setprecision(2) << Booking :: hotelCost + Cabs :: lastcabCost << endl;
                cout << "_______________________"<<endl;
                cout << "_____________THANK YOU___________________"<< endl;


            }
            cout.close();
        }
        void showBill()
        {
            ifstream inf("receipt.txt");
            {
                if(!inf)
                {
                    cout << "File OPening error!" << endl;

                }
                while(!inf.eof())
                {
                    inf.getline(all,999);
                    cout << all <<endl;

                }
            }
            inf.close();
        }
};

void menu()
{

    int mainChoice;
    int inChoice;
    int gotoMenu;

    cout << "\t\t       *CDR TRAVELS*\n" << endl;
    cout << "____________Main Menu_______________";

    cout<< "\t__________________________________"<<endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t|\tCustomer Management :-      1\t|" << endl;
    cout << "\t|\tCabs Management     :-      2\t|" << endl;
    cout << "\t|\tBooking  Management :-      3\t|" << endl;
    cout << "\t|\tCharges  Management :-      4\t|" << endl;
    cout << "\t|\tExit                :-      5\t|" << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t|_________________________________" << endl;

    cout << "\nEnter the Your Choice :- ";
    cin >> mainChoice;

    system("CLS");

    Customers a2;
    Cabs a3;
    Booking a4;
    Charges a5;

    if(mainChoice == 1)
    {
        cout << "++++++++Customers++++++++++" << endl;
        cout << "1. Enter New Customer" << endl;
        cout << "2. See Old Customer" << endl;

        cout << "\nEnter Choice :- ";
        cin >> inChoice;
        system("CLS");
        if(inChoice == 1)
        {
            a2.getDetails();
        }
        else if(inChoice ==2)
        {
            a2.showDetails();
        }
        else{
            cout << "Invalid Input or Redirecting to Previous Menu \nPlease Wait!" << endl;
            //Sleep(1100);
            system("CLS");
            menu();
        }
        cout << "\nPress 1 to Redirect main menu :- ";
        cin >> gotoMenu;
        system("CLS");
        if(gotoMenu ==1)
        {
            menu();
        }
        else{
            menu();
        }
    }
    else if(mainChoice == 2)
    {
        a3.cabDetails();
    }
    else if(mainChoice ==3)
    {
        cout << "Book a Luxury Hotel Using the System" << endl;
        a4.hotels();
    }
    else if (mainChoice == 4)
    {
        cout << "Get Your Receipt " <<endl;
        a5.PrintBill();

        cout << "Your receipt is already printed you can get it from file path\n"<<endl;
        cout << "To display the your receipt in the screen,Enter 1: or Enter another key to back main menu: ";

        cin >> gotoMenu;

        if(gotoMenu == 1)
        {
            system("CLS");
            a5.showBill();
            cout << "\nPress 1 to redirect main menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu ==1)
            {
                menu();
            }
            else{
                system("CLS");
                menu();
            }
        }
    }
    else if(mainChoice == 5)
    {
        cout << "_____GOOD BYE_________"<< endl;
        //Sleep(999);
        system("CLS");
        menu();
    }
    else{
        cout << "Invalid Input or Redirecting to Previous Menu \nPlease Wait!" << endl;
        //Sleep(1100);
        system("CLS");
        menu();

    }


}

int main()
{
    ManageMenu startObj;
    //cout << "hello World"<<endl;
    return 0;
}