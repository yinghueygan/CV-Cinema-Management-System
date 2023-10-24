#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <ctime>
#include <windows.h>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

    char *l = " ---------------------------------------------------------------------------------------------------------------------------------------------\n";
    char *w = " =============================================================================================================================================\n";

    string reply;
    char answer;
    string opt, choice, choice1, opt_a, method, free_gift,record;
    int movie_opt, hall_opt, length_of_card_no, length_of_pin;
    int add_on=1, add_on1=1;
    char card_no[30];
    char pin[20];
    char name[200];

    char response, response1, response2, response3, response4, movie,hall, showtime, ticket_type, order;
    char  munchies;
    double total=0, total_amount=0, total_amountA=0, total_amountB=0, total_amountC=0, total_amountD=0, total_amountE=0;
    double payable, discount, pay, change;
    float total_price=0;

    double price_spc=8.00, price_lpc=10.00, price_ssc=6.50, price_nhd=4.50, price_chd=6.50;
    double price_scp=6.50, price_lcp=8.50, price_mp=6.50, price_t=6.50;

    double price_ssd=6.00, price_lsd=8.00, price_mw=3.50, price_sm=7.50, price_lm=9.50, price_snc=7.50, price_lnc=9.50;
    double price_lyc=9, price_sc=17, price_cc=25, price_2cc=35;

    double cost_spc=0, cost_lpc=0, cost_ssc=0, cost_nhd=0, cost_chd=0;
    double cost_scp=0, cost_lcp=0, cost_mp=0, cost_t=0;

    double cost_ssd=0, cost_lsd=0, cost_mw=0, cost_sm=0, cost_lm=0, cost_snc=0, cost_lnc=0;
    double cost_lyc=0, cost_sc=0, cost_cc=0, cost_2cc=0;

    int quantity_spc=0 ,quantity_lpc=0 ,quantity_ssc=0 ,quantity_nhd=0 ,quantity_chd=0;
    int quantity_scp=0 ,quantity_lcp=0 ,quantity_mp=0 ,quantity_t=0;

    int quantity_ssd=0, quantity_lsd=0, quantity_mw=0, quantity_sm=0, quantity_lm=0, quantity_snc=0, quantity_lnc=0;
    int quantity_lyc=0, quantity_sc=0, quantity_cc=0, quantity_2cc=0;

    int addon_spc=0, addon_lpc=0, addon_ssc=0, addon_nhd=0, addon_chd=0;
    int addon_scp=0, addon_lcp=0, addon_mp=0, addon_t=0;

    int addon_ssd=0, addon_lsd=0, addon_mw=0, addon_sm=0, addon_lm=0, addon_snc=0, addon_lnc=0;
    int addon_lyc=0, addon_sc=0, addon_cc=0, addon_2cc=0;

    double adult_hallA=14.00, kid_hallA=9.00, senior_hallA=9.00, couple_hallA=35.00;
    double adult_hallB=18.00, kid_hallB=10.00, senior_hallB=10.00, couple_hallB=40.00;
    double adult_hallC=38.00, kid_hallC=26.00, senior_hallC=26.00;
    double adult_hallD=40.00, kid_hallD=29.00, senior_hallD=29.00, couple_hallD=85.00;
    double adult_hallE=50.00, kid_hallE=35.00, senior_hallE=35.00, couple_hallE=110.00;


    int num_hallAa=0, num_hallAk=0, num_hallAs=0, num_hallAc=0;
    int num_hallBa=0, num_hallBk=0, num_hallBs=0, num_hallBc=0;
    int num_hallCa=0, num_hallCk=0, num_hallCs=0;
    int num_hallDa=0, num_hallDk=0, num_hallDs=0, num_hallDc=0;
    int num_hallEa=0, num_hallEk=0, num_hallEs=0, num_hallEc=0;

    double cost_hallAa=0, cost_hallAk=0, cost_hallAs=0, cost_hallAc=0;
    double cost_hallBa=0, cost_hallBk=0, cost_hallBs=0, cost_hallBc=0;
    double cost_hallCa=0, cost_hallCk=0, cost_hallCs=0;
    double cost_hallDa=0, cost_hallDk=0, cost_hallDs=0, cost_hallDc=0;
    double cost_hallEa=0, cost_hallEk=0, cost_hallEs=0, cost_hallEc=0;

    int addon_hallAa=0, addon_hallAk=0, addon_hallAs=0, addon_hallAc=0;
    int addon_hallBa=0, addon_hallBk=0, addon_hallBs=0, addon_hallBc=0;
    int addon_hallCa=0, addon_hallCk=0, addon_hallCs=0;
    int addon_hallDa=0, addon_hallDk=0, addon_hallDs=0, addon_hallDc=0;
    int addon_hallEa=0, addon_hallEk=0, addon_hallEs=0, addon_hallEc=0;

class AdminLogin{
    string pwd="123456";

public:
    string pwd_ampt;
    AdminLogin(){}

    void login(){
        do{
            cout<<"\n\t\t\t\t\t\t\t\t\t\t\t    Please enter your password: ";
            cin>>pwd_ampt;
            if(pwd_ampt==pwd)
            {
                cout<<"\t\t\t\t\t\t\t\t\t\t\t    Thank you. Please log in."<<endl;
            }
            else
            {
                cout<<endl<<"\t\t\t\t\t\t\t\t\t\t\t\t    Wrong password. "<<endl;
                Beep(300,500);
                cout<<"\t\t\t\t\t\t\t\t\t\t\t\t    Please enter again. "<<endl<<endl;
                system("pause");
                system("cls");
            }
        }while(pwd_ampt!="123456");
    }
};

void addRecord()
{
    system("cls");
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t    Enter the Name: ";
    cin >> name;
    cout<<endl;
    cout <<"\t\t\t\t\t\t\t\t\t\t\t    Enter the Discount Given(%): ";
    cin>>discount;
    cout<<endl;
    cout <<"\t\t\t\t\t\t\t\t\t\t\t    Enter the Total Paid Amount:RM ";
    cin >> total;
    cout<<endl;

    ofstream outFile;
    outFile.open("data.txt", ios::app | ios::out);
    outFile<<name;
    outFile<<"\t\t  "<<discount;
    outFile<<"\t\t\t      "<<total<<endl;
    outFile.close();;
}

void editRecord()
{
string new_name,cust_name;
double new_total, new_discount;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t    Name of the customer: ";
cin>>cust_name;
ifstream inputFile;
inputFile.open("data.txt");
ofstream outFile;
outFile.open("outfile.txt");

inputFile>>name;
inputFile>>discount;
inputFile>>total;


while(!inputFile.eof())
{
	if(name != cust_name)
	{
		outFile<<name;
        outFile<<"\t\t  "<<discount;
        outFile<<"\t\t\t      "<<total<<endl;
	}
	else
	{
	    cout<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t\t\t    Please enter the new name: ";
		cin>>new_name;
		cout<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t\t\t    Please enter the new discount(%): ";
		cin>>new_discount;
		cout<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t\t\t    Please enter the new amount paid(RM): ";
		cin>>new_total;
		outFile<<new_name;
        outFile<<"\t\t  "<<new_discount;
        outFile<<"\t\t\t      "<<new_total<<endl;
	}
	inputFile>>name;
	inputFile>>discount;
	inputFile>>total;
}
inputFile.close();
outFile.close();

remove("data.txt");
rename("outfile.txt", "data.txt");
}

void delRecord()
{
string cust_name;
double cust_total;
cout<<"\n\t\t\t\t\t\t\t Please enter the name of the customer whom you want to delete his/her related data: ";
cin>>cust_name;
cout<<endl;
ifstream inputFile;
inputFile.open("data.txt");
ofstream outFile;
outFile.open("outfile.txt");

inputFile>>name;
inputFile>>discount;
inputFile>>total;

while(!inputFile.eof())
{
	if(name != cust_name)
	{
        outFile<<name;
        outFile<<"\t\t  "<<discount;
        outFile<<"\t\t\t      "<<total<<endl;
	}
    inputFile>>name;
    inputFile>>discount;
	inputFile>>total;
}

inputFile.close();
outFile.close();

remove("data.txt");
rename("outfile.txt", "data.txt");
}


void viewRecord()
{

   cout <<"\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\t\t\t\t\t\t\t\t\t  _ __ __ __ __ _ _ __ __ __ __ __ _ _ __ __ __ __ __ __ __ __ __ __ __ __ __  "<<endl;
    cout <<"\t\t\t\t\t\t\t\t\t |               |                  |                                         |"<<endl;
    cout <<"\t\t\t\t\t\t\t\t\t |     Name      |     Discount     |       Total Paid after discount(RM)     |"<<endl;
    cout <<"\t\t\t\t\t\t\t\t\t |_ __ __ __ __ _|_ __ __ __ __ __ _|_ __ __ __ __ __ __ __ __ __ __ __ __ __ |"<<endl;

    string line;
    ifstream outFile("data.txt");
    if (outFile.is_open())
    {
        while(outFile.good())
        {
            getline(outFile,line);
            cout <<"\t\t\t\t\t\t\t\t\t |               |                  |                                         |"<<endl;
            cout <<"\t\t\t\t\t\t\t\t\t\t"<<line << endl;
            cout <<"\t\t\t\t\t\t\t\t\t |_ __ __ __ __ _|_ __ __ __ __ __ _|_ __ __ __ __ __ __ __ __ __ __ __ __ __ |"<<endl;
        }//while

        outFile.close();
    }
}

void searchRecord()
{
     string line;
    string name;
    double total;
    string cust_name;
    double cust_total;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\n\n\t\t\t\t\t\t\t\t\t\t Please enter the name of the customer: ";
    cin>>cust_name;
    cout<<endl;
    ifstream inputFile;
    inputFile.open("data.txt");


    system("CLS");
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\t\t\t\t\t\t\t\t\t  _ __ __ __ __ _ _ __ __ __ __ __ _ _ __ __ __ __ __ __ __ __ __ __ __ __ __  "<<endl;
    cout <<"\t\t\t\t\t\t\t\t\t |               |                  |                                         |"<<endl;
    cout <<"\t\t\t\t\t\t\t\t\t |     Name      |     Discount     |       Total Paid after discount(RM)     |"<<endl;
    cout <<"\t\t\t\t\t\t\t\t\t |_ __ __ __ __ _|_ __ __ __ __ __ _|_ __ __ __ __ __ __ __ __ __ __ __ __ __ |"<<endl;

    while(!inputFile.eof())
    {
        if(cust_name == name)
        {
            getline(inputFile,line);
            cout <<"\t\t\t\t\t\t\t\t\t |               |                  |                                         |"<<endl;
            cout <<"\t\t\t\t\t\t\t\t\t\t"<<name<<"\t\t\  "<<discount<<"\t\t\t      "<<total<<endl;
            cout <<"\t\t\t\t\t\t\t\t\t |_ __ __ __ __ _|_ __ __ __ __ __ _|_ __ __ __ __ __ __ __ __ __ __ __ __ __ |"<<endl;

        }

        inputFile>>name;
        inputFile>>discount;
        inputFile>>total;
    }

    inputFile.close();


}
class booking_ticket
{
    char movie;
    char hall, showtime;

public:
    booking_ticket(char movie, char hall, char showtime)
    {
        this->movie = movie;
        this-> hall = hall;
        this -> showtime = showtime;
    }
    char movie_name();
    char movie_showtimes();
    char movie_hall();
};
void intro_access()
{
    cout<<endl<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t             __      __        __\n";
    cout<<"\t\t\t\t\t\t\t\t\t            /  \\    /  \\ ____ |  | ____  ____    _____   ____ \n";
    cout<<"\t\t\t\t\t\t\t\t\t            \\   \\/\\/   // __ \\|  |/ ___\\/  _ \\  /     \\ / __ \\\n";
    cout<<"\t\t\t\t\t\t\t\t\t             \\        /|  ___/|  |  \\__(  <_> )|  Y Y  \\|  ___/\n";
    cout<<"\t\t\t\t\t\t\t\t\t              \\__/\\__/  \\____\\|__|\\_____>____/ |__|_|__|\\____\\\n";
    cout<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t              _____________________       _____                ______      " <<endl;
    cout<<"\t\t\t\t\t\t\t\t\t             /____________________/       \\  \\ \\              /  /  /   " <<endl;
    cout<<"\t\t\t\t\t\t\t\t\t            /                    /         \\  \\ \\            /  /  /    " <<endl;
    cout<<"\t\t\t\t\t\t\t\t\t           /         ___________/           \\  \\ \\          /  /  /     " <<endl;
    cout<<"\t\t\t\t\t\t\t\t\t          /         /                        \\  \\ \\        /  /  /      " <<endl;
    cout<<"\t\t\t\t\t\t\t\t\t         |         /|                         \\  \\ \\      /  /  /       " <<endl;
    cout<<"\t\t\t\t\t\t\t\t\t         |        |/\\                          \\  \\ \\    /  /  /       " <<endl;
    cout<<"\t\t\t\t\t\t\t\t\t         |         \\ \\___________               \\  \\ \\  /  /  /       " <<endl;
    cout<<"\t\t\t\t\t\t\t\t\t          \\         \\/__________/\\               \\  \\ \\/  /  /       "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t           \\                    \\ \\               \\  \\/  /  /         " <<endl;
    cout<<"\t\t\t\t\t\t\t\t\t            \\                    \\ \\               \\    /  /           " <<endl;
    cout<<"\t\t\t\t\t\t\t\t\t             \\____________________\\/                \\__/__/             " <<endl;
    cout<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t             ______  __  ____   ___  ______    _____       ___   \n";
    cout<<"\t\t\t\t\t\t\t\t\t            /   ___\\|  ||    \\  |  ||  ____|  /     \\     /   \\ \n";
    cout<<"\t\t\t\t\t\t\t\t\t            |  |    |  ||  |\\ \\ |  ||  |___  /  \\ /  \\   / /_\\ \\ \n";
    cout<<"\t\t\t\t\t\t\t\t\t            |  |____|  ||  | \\ \\|  ||   ___ /    Y    \\ /  __   \\   \n";
    cout<<"\t\t\t\t\t\t\t\t\t            \\______/|__||__|  \\____||______|\\____|____//__/  \\___\\ \n";
    system("pause");
    system("CLS");
}
void intro_menu()
{
    system("CLS");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t            _____\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t           /     \\   ____   ____    __ __\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t          /  \\ /  \\_/ __ \\ /     \\ |  |  |\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t         /    Y    \\  ___/|   |   \\|  |  |\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t         \\____|____/\\____>____|____|_____| \n\n";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t        1. Movie Info";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t        2. Showtimes";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t        3. Movie Halls";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t        4. Experiences";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t        5. Promotions";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t        6. Terms & Conditions";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t        7. Booking Ticket";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t  Please enter your option to proceed (1,2,3,4,5,6 or 7): ";
    cin>>response;
}
void booking_intro()
{
    system ("CLS");
    cout<<endl<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t             __      __        __\n";
    cout<<"\t\t\t\t\t\t\t\t\t            /  \\    /  \\ ____ |  | ____  ____    _____   ____ \n";
    cout<<"\t\t\t\t\t\t\t\t\t            \\   \\/\\/   // __ \\|  |/ ___\\/  _ \\  /     \\ / __ \\\n";
    cout<<"\t\t\t\t\t\t\t\t\t             \\        /|  ___/|  |  \\__(  <_> )|  Y Y  \\|  ___/\n";
    cout<<"\t\t\t\t\t\t\t\t\t              \\__/\\__/  \\____\\|__|\\_____>____/ |__|_|__|\\____\\\n";
    cout<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t ______  ___     ___      ______  __  ____   ___  ______    _____       ___   \n";
    cout<<"\t\t\t\t\t\t\t\t\t/  ____\\|  |    |  |     /   ___\\|  ||    \\  |  ||  ____|  /     \\     /   \\ \n";
    cout<<"\t\t\t\t\t\t\t\t\t|  |     \\  \\   /  /     |  |    |  ||  |\\ \\ |  ||  |___  /  \\ /  \\   / /_\\ \\ \n";
    cout<<"\t\t\t\t\t\t\t\t\t|  |____  \\  \\_/  /      |  |____|  ||  | \\ \\|  ||   ___ /    Y    \\ /  __   \\   \n";
    cout<<"\t\t\t\t\t\t\t\t\t\\______/   \\_____/       \\______/|__||__|  \\____||______|\\____|____//__/  \\___\\ \n";
    cout<<endl<<endl;
    cout<<"\n\t\t\t\t\t\t\t\t\t\t    Enter your name to start order: ";
    cin.ignore();
    cin.getline(name,200);
    system ("CLS");
    cout<<flush;
}
void movie_info()
{
    system("CLS");
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t  ==========================" <<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t\t  |        MOVIE INFO       |"<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t\t  ==========================" <<endl<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t\t Dear customer, "<<name<<endl<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t\t What option would you prefer: "<<endl<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t\t    1. Now Showing "<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t\t    2. Coming Soon "<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t\t    3. Back to Main Menu "<<endl<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t\t Enter your option (1,2 or 3): ";
     cin>>choice;
}
void now_showing()
{
    system("CLS");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t     =========================" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t     |    Now Showing List   |"<< endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t     =========================" << endl << endl << endl;
    cout << "\t\t\t\t\t\t\t\t ______________________ ______________________ ______________________ ______________________ "<<endl;
    cout << "\t\t\t\t\t\t\t\t|                      |                      |                      |                      | "<<endl;
    cout << "\t\t\t\t\t\t\t\t|  1. Titanic          |  3. Harry Potter 1   |  5. Hantu Kak Limah  |  7. Ip Man 4         | "<<endl;
    cout << "\t\t\t\t\t\t\t\t|______________________|______________________|______________________|______________________| "<<endl;
    cout << "\t\t\t\t\t\t\t\t|                      |                      |                      |                      | "<<endl;
    cout << "\t\t\t\t\t\t\t\t|  2. The Sixth Sense  |  4. Paskal           |  6. BoBoiboy Movie 2 |  8. Shaolin Soccer   | "<<endl;
    cout << "\t\t\t\t\t\t\t\t|______________________|______________________|______________________|______________________| "<<endl;
    cout << endl << endl <<endl;

    cout << "\t\t\t\t\t\t\t\t\t Enter you choice to view the movie info (1,2,3,4,5,6,7 or 8): ";
    cin>>movie_opt;

    while(!((movie_opt>=1)&&(movie_opt<=8)))
        {
        cout<<endl<<"\t\t\t\t\t\t\t\t\t Invalid input.Choose from (1,2,3,4,5,6,7 or 8)."<<endl;
        Beep(300,500);
        cout << "\t\t\t\t\t\t\t\t\t Enter you choice: ";
        cin>>movie_opt;
        }
}
void coming_soon()
{
    system ("CLS");
    cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t      =========================" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t      |    Coming Soon List   |"<< endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t      =========================" << endl << endl << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t   _______________________ _______________________  "<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t  |                       |                       |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t  |  1. Mulan             |  3. Fast & Furious 9  |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t  |_______________________|_______________________| "<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t  |                       |                       |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t  |  2. The Conjuring 3   |  4. Love You Forever  |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t  |_______________________|_______________________|"<<endl;
    cout << endl << endl <<endl;

    cout << "\t\t\t\t\t\t\t\t\t\t Enter you choice to view the movie info (1,2,3 or 4): ";
    cin>>movie_opt;
}
void movie_promotion()
{
    system ("CLS");
    cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t       ==============================" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t       |          PROMOTIONS         |"<< endl;
    cout << "\t\t\t\t\t\t\t\t\t\t       ===============================" << endl << endl ;
    cout<<"\n\t\t\t\t\t\t\t\t\t\t   a.Purchase RM 50 & above --- Cap x 1";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t   b.Purchase RM 100 & above --- T-Shirt x 1";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t   c.Purchase RM 150 & above --- Thermos x 1";
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<"\t\t\t\t      "<<l;
}
void movie_terms()
{
    system ("CLS");
    cout<<flush;
    cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t    =======================================" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t    |          TERMS AND CONDITION         |"<< endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t    ========================================" << endl << endl ;
    cout<<"\n\t\t\t\t\t\t\t\t\t\t    a. Adult --- 13-59(age).";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t    b. Kid --- 0-12(age).";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t    c. Senior Citizen --- 60 & above(age).";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t    d. You can only redeem one gift in a single receipt(while stock last).";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t    e. You may go to the Customer Service Centre to redeem your gift.";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t    f. CV Member benefits: ";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t        i. 10% discount every purchase in CV";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t       ii. 5% discount in the following places";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t           > Chatto, Coffeology, Tappers, The Windmill Station(TWS)";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t           * AT BUKIT BERUANG BRANCH ONLY *";
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<"\t\t\t\t      "<<l;
}
char booking_response()
{
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t      < If 'YES', press 'Y' to continue >";
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t      or \n\n              ";
        cout<<"\t\t\t\t\t\t\t\t\t\t< If 'NO', press any key to make another choice >\n";
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t     >>> ";
        cin>>response;
        return response ;
}
void movie_st()
{
    system("CLS");
   cout << " \t\t\t\t\t\t\t\t Titanic" << endl;
   cout << "\t\t\t\t\t\t\t\t ========="<< endl<<endl;
   cout << "\t\t\t\t\t\t\t\t ................................................................................." << endl;
   cout << "\t\t\t\t\t\t\t\t .  11:00  .  12:30  .  13:30  .  14:00  .  15:15  .  16:00  .  17:30  .  19:00  ." << endl;
   cout << "\t\t\t\t\t\t\t\t ................................................................................." << endl;
   cout << "\t\t\t\t\t\t\t\t .  20:30  .  21:45  .  22:30  .  00:15  ."<<endl;
   cout << "\t\t\t\t\t\t\t\t ........................................." << endl<<endl;

   cout << "\t\t\t\t\t\t\t\t  The Sixth Sense" << endl;
   cout << "\t\t\t\t\t\t\t\t ================="<< endl<<endl;
   cout << "\t\t\t\t\t\t\t\t ................................................................................." << endl;
   cout << "\t\t\t\t\t\t\t\t .  11:00  .  12:30  .  13:30  .  14:00  .  15:15  .  16:00  .  17:30  .  19:00  ." << endl;
   cout << "\t\t\t\t\t\t\t\t ................................................................................." << endl;
   cout << "\t\t\t\t\t\t\t\t .  20:30  .  21:45  .  22:30  .  00:15  ."<<endl;
   cout << "\t\t\t\t\t\t\t\t ........................................." << endl<<endl;

   cout << "\t\t\t\t\t\t\t\t  Harry Potter 1" << endl;
   cout << "\t\t\t\t\t\t\t\t ================"<< endl<<endl;
   cout << "\t\t\t\t\t\t\t\t ................................................................................." << endl;
   cout << "\t\t\t\t\t\t\t\t .  11:00  .  12:30  .  13:30  .  14:00  .  15:15  .  16:00  .  17:30  .  19:00  ." << endl;
   cout << "\t\t\t\t\t\t\t\t ................................................................................." << endl;
   cout << "\t\t\t\t\t\t\t\t .  20:30  .  21:45  .  22:30  .  00:15  ."<<endl;
   cout << "\t\t\t\t\t\t\t\t ........................................." << endl<<endl;

   cout << "\t\t\t\t\t\t\t\t  Paskal" << endl;
   cout << "\t\t\t\t\t\t\t\t ========="<< endl;
   cout << "\t\t\t\t\t\t\t\t ................................................................................." << endl;
   cout << "\t\t\t\t\t\t\t\t .  11:00  .  12:30  .  13:30  .  14:00  .  15:15  .  16:00  .  17:30  .  19:00  ." << endl;
   cout << "\t\t\t\t\t\t\t\t ................................................................................." << endl;
   cout << "\t\t\t\t\t\t\t\t .  20:30  .  21:45  .  22:30  .  00:15  ."<<endl;
   cout << "\t\t\t\t\t\t\t\t ........................................." << endl<<endl;

   cout << "\t\t\t\t\t\t\t\t  Hantu Kak Limah" << endl;
   cout << "\t\t\t\t\t\t\t\t ================="<< endl;
   cout << "\t\t\t\t\t\t\t\t ................................................................................." << endl;
   cout << "\t\t\t\t\t\t\t\t .  11:00  .  12:30  .  13:30  .  14:00  .  15:15  .  16:00  .  17:30  .  19:00  ." << endl;
   cout << "\t\t\t\t\t\t\t\t ................................................................................." << endl;
   cout << "\t\t\t\t\t\t\t\t .  20:30  .  21:45  .  22:30  .  00:15  ."<<endl;
   cout << "\t\t\t\t\t\t\t\t ........................................." << endl<<endl;

   cout << "\t\t\t\t\t\t\t\t  Boboiboy Movie 2" << endl;
   cout << "\t\t\t\t\t\t\t\t =================="<< endl;
   cout << "\t\t\t\t\t\t\t\t ................................................................................." << endl;
   cout << "\t\t\t\t\t\t\t\t .  11:00  .  12:30  .  13:30  .  14:00  .  15:15  .  16:00  .  17:30  .  19:00  ." << endl;
   cout << "\t\t\t\t\t\t\t\t ................................................................................." << endl;
   cout << "\t\t\t\t\t\t\t\t .  20:30  .  21:45  .  22:30  .  00:15  ."<<endl;
   cout << "\t\t\t\t\t\t\t\t ........................................." << endl<<endl;

   cout << "\t\t\t\t\t\t\t\t  Ip man 4" << endl;
   cout << "\t\t\t\t\t\t\t\t =========="<< endl;
   cout << "\t\t\t\t\t\t\t\t ................................................................................." << endl;
   cout << "\t\t\t\t\t\t\t\t .  11:00  .  12:30  .  13:30  .  14:00  .  15:15  .  16:00  .  17:30  .  19:00  ." << endl;
   cout << "\t\t\t\t\t\t\t\t ................................................................................." << endl;
   cout << "\t\t\t\t\t\t\t\t .  20:30  .  21:45  .  22:30  .  00:15  ."<<endl;
   cout << "\t\t\t\t\t\t\t\t ........................................." << endl<<endl;

   cout << "\t\t\t\t\t\t\t\t  Shaolin  Soccer" << endl;
   cout << "\t\t\t\t\t\t\t\t ================="<< endl;
   cout << "\t\t\t\t\t\t\t\t ................................................................................." << endl;
   cout << "\t\t\t\t\t\t\t\t .  11:00  .  12:30  .  13:30  .  14:00  .  15:15  .  16:00  .  17:30  .  19:00  ." << endl;
   cout << "\t\t\t\t\t\t\t\t ................................................................................." << endl;
   cout << "\t\t\t\t\t\t\t\t .  20:30  .  21:45  .  22:30  .  00:15  ."<<endl;
   cout << "\t\t\t\t\t\t\t\t ........................................." << endl<<endl;
}

void experiences()
{
    system("CLS");
    cout << "\n\t\t\t\t==========================================================================================================================================================" << endl;
    cout << "\t\t\t\t||                       || With class-leading digital projection and 7.1 premium surround sound, we can ensure a satisfying experience throughout your ||" << endl;
    cout << "\t\t\t\t||                       || movie in this hall. Furnished with congenial seats that provide ample legroom space, relaxation and comfort will have a new ||" << endl;
    cout << "\t\t\t\t||                       || improved meaning for you.                                                                                                   ||" << endl;
    cout << "\t\t\t\t||                       ||                                                                                                                             ||" << endl;
    cout << "\t\t\t\t||        CLASSIC        || [CLASSIC Twin Seats]:A gratifying shared experience starts from here where you and your loved one can sit back and enjoy a  ||" << endl;
    cout << "\t\t\t\t||                       ||                      movie together in spacious seats within a personal space.                                              ||" << endl;
    cout << "\t\t\t\t||                       ||                                                                                                                             ||" << endl;
    cout << "\t\t\t\t||                       || [CLASSIC Single Seats]:Cozy leatherette seats padded comfortably to provide a luxuriating cinema experience that will       ||" << endl;
    cout << "\t\t\t\t||                       ||                        satisfy everybody.                                                                                   ||" << endl;
    cout << "\t\t\t\t||                       ||                                                                                                                             ||" << endl;
    cout << "\t\t\t\t==========================================================================================================================================================" << endl;
    cout << "\t\t\t\t||                       || Setting new standards is not easy. Yet here at CV , it is something we continuously strive for - offering new experiences   ||" << endl;
    cout << "\t\t\t\t||                       || that both excite and entertain.                                                                                             ||" << endl;
    cout << "\t\t\t\t||                       ||                                                                                                                             ||" << endl;
    cout << "\t\t\t\t||                       || [Deluxe Seat]:Replacing our Classic seats, the new Deluxe seat is a triumph of form and function which offers affordable    ||" << endl;
    cout << "\t\t\t\t||        DELUXE         ||               luxury for cinemagoers.                                                                                       ||" << endl;
    cout << "\t\t\t\t||                       ||                                                                                                                             ||" << endl;
    cout << "\t\t\t\t||                       ||                                                                                                                             ||" << endl;
    cout << "\t\t\t\t||                       ||                                                                                                                             ||" << endl;
    cout << "\t\t\t\t||                       ||                                                                                                                             ||" << endl;
    cout << "\t\t\t\t==========================================================================================================================================================" << endl;
    cout << "\t\t\t\t||                       || Funky bean bags in the cinema! CV adds a touch of fun and flair to your movie-going experience.                             ||" << endl;
    cout << "\t\t\t\t||                       ||                                                                                                                             ||" << endl;
    cout << "\t\t\t\t||                       || Get comfortable - lie down or prop yourself up, the choice is yours. With space for two in each of our cozy bean bag pods   ||" << endl;
    cout << "\t\t\t\t||                       ||                   and adjustable seating positions, there is nothing else that compares.                                    ||" << endl;
    cout << "\t\t\t\t||        BEANIE         ||                                                                                                                             ||" << endl;
    cout << "\t\t\t\t||                       ||                                                                                                                             ||" << endl;
    cout << "\t\t\t\t||                       ||                                                                                                                             ||" << endl;
    cout << "\t\t\t\t||                       ||                                                                                                                             ||" << endl;
    cout << "\t\t\t\t||                       ||                                                                                                                             ||" << endl;
    cout << "\t\t\t\t==========================================================================================================================================================" << endl;
    cout << "\t\t\t\t||                       || [CV Premium Glide]:CV Premium Glide seats give you the leisure to recline back and slide out at will with just the touch    ||" << endl;
    cout << "\t\t\t\t||                       ||                    of a button.                                                                                             ||" << endl;
    cout << "\t\t\t\t||                       ||                                                                                                                             ||" << endl;
    cout << "\t\t\t\t||                       || [CV INDULGE]: CV INDULGE seats located at the last two rows are perfect for you and your movie partner to get the ultimate  ||" << endl;
    cout << "\t\t\t\t||        INFINITY       ||               movie experience. Get cozy in extra wide seats fitted with your very own table and a warm comforter blanket   ||" << endl;
    cout << "\t\t\t\t||                       ||               for added contentment. Be treated to a call-waiter-service and order from a variety of mouth-watering food and||" << endl;
    cout << "\t\t\t\t||                       ||               drinks we have to offer.                                                                                      ||" << endl;
    cout << "\t\t\t\t||                       ||                                                                                                                             ||" << endl;
    cout << "\t\t\t\t||                       ||                                                                                                                             ||" << endl;
    cout << "\t\t\t\t==========================================================================================================================================================" << endl;
}
char booking_ticket:: movie_name()
{
    system ("CLS");
    cout<<flush;
    cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t      <Hi, "<<name;
    cout<<"! Welcome to CV Cinema!>\n\n";
    cout << "\n\t\t\t\t\t\t\t\t\t\t\t    ========================================" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t    |                                       |"<< endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t    |            NOW SHOWING MOVIE          |"<< endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t    |                                       |"<< endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t    ========================================" << endl << endl ;
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t   a. Titanic\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   b. The Sixth Sense\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   c. Harry Potter 1\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   d. Paskal\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   e. Hantu Kak Limah\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   f. Boboiboy Movie 2\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   g. IP Man 4: The Finale\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   h. Shaolin Soccer\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t Please select your movie (a,b,c,d,e,f,g or h): ";
    cin>>movie;

    return movie;
}

char booking_ticket :: movie_showtimes()
{
    system ("CLS");
    cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t    ========================================" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t    |                                       |"<< endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t    |             MOVIE SHOWTIMES           |"<< endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t    |                                       |"<< endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t    ========================================" << endl << endl ;
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t       a.[11:00] \t\tg.[17:30]";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t       b.[12:30] \t\th.[19:00]";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t       c.[13:30] \t\ti.[20:30]";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t       d.[14:00] \t\tj.[21:45]";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t       e.[15:15] \t\tk.[22:30]";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t       f.[16:00] \t\tl.[00:15]";

    cout<<"\n\n\n\t\t\t\t\t\t\t\t\t    Please select your movie's show time (a,b,c,d,e,f,g,h,i,j,k or l): ";
    cin>>showtime;

    return showtime;
}

char booking_ticket::movie_hall()
{
    system("CLS");
    cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t    ========================================" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t    |                                       |"<< endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t    |              MOVIE'S HALL             |"<< endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t    |                                       |"<< endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t    ========================================" << endl << endl ;
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t   a.[CLASSIC Hall]  --> Adult(RM 14)";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t                         Kid/Senior Citizen(RM 9)";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t                         Couple Seat(RM 35)";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t   b.[DELUXE Hall]  -->  Adult(RM 18)";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t                         Kid/Senior Citizen(RM 10)";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t                         Couple Seat(RM 40)";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t   c.[BEANIE Hall]  --> Adult(RM 38)";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t                        Kid/Senior Citizen(RM 26)";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t   d.[INFINITY Hall]--> [CV Premium Glide Seat]";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t                        :Adult(RM 40)";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t                        :Kid/Senior Citizen(RM 29)";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t                        :Couple Seat(RM 85)";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t   e.[INFINITY Hall]--> [CV INDULGE Seat]";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t                        ::Adult(RM 50)";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t                        :Kid/Senior Citizen(RM 35)";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t                        :Couple Seat(RM 110)";
    cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t\t  Please select your movie's hall (a,b,c,d or e): ";
    cin>>hall;

    return hall;
}

void hall_invalid()
{
        cout<<endl<<"\t\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
        Beep(300,500);
        cout<<"\t\t\t\t\t\t\t\t\t\t\t  Select from (Y,y,N or n). "<<endl;
}
void movie_munchies()
{
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t================================================================================================"<<endl<<endl;
    cout << "\t\t\t\t\t\t\t\t|                                           FOOD MENU                                           |"<<endl<<endl;
    cout << "\t\t\t\t\t\t\t\t================================================================================================" << endl<<endl;

    cout << "\t\t\t\t\t\t\t\t------------------------------------------------------------------------------------------------"<<endl <<endl;
    cout << "\t\t\t\t\t\t\t\t|                                          A LA CARTE                                          |"<<endl <<endl;
    cout << "\t\t\t\t\t\t\t\t------------------------------------------------------------------------------------------------"<<endl;
    cout << "\t\t\t\t\t\t\t\t|                                              |                                               |"<<endl;
    cout << "\t\t\t\t\t\t\t\t|  POPCORN (P)                                 |  Drink(D)                                     |"<<endl;
    cout << "\t\t\t\t\t\t\t\t|  -----------                                 |  --------                                     |"<<endl;
    cout << "\t\t\t\t\t\t\t\t|  Popcorn (small)                   RM8.00    |  Soft drink (small)     RM6.00                |"<<endl;
    cout << "\t\t\t\t\t\t\t\t|  Popcorn (large)                   RM10.00   |  Soft drink (large)     RM8.00                |"<<endl;
    cout << "\t\t\t\t\t\t\t\t|                                              |                                               |"<<endl;
    cout << "\t\t\t\t\t\t\t\t|  [HOT SNACK]                                 |  [OTHER DRINK]                                |"<<endl;
    cout << "\t\t\t\t\t\t\t\t|  Steam sweet corn (only one size)  RM6.50    |  Mineral water (500ml)  RM3.50                |"<<endl;
    cout << "\t\t\t\t\t\t\t\t|  Hotdogs (normal)                  RM4.50    |  Milo (small)           RM7.50                |"<<endl;
    cout << "\t\t\t\t\t\t\t\t|  Hotdogs (cheese)                  RM6.50    |  Milo (large)           RM9.50                |"<<endl;
    cout << "\t\t\t\t\t\t\t\t|  Chicken popcorn (small)           RM6.50    |  Nescafe (small)        RM7.50                |"<<endl;
    cout << "\t\t\t\t\t\t\t\t|  Chicken popcorn (large)           RM8.50    |  Nescafe (large)        RM9.50                |"<<endl;
    cout << "\t\t\t\t\t\t\t\t|  Mister Potato / Twister (Large)   RM6.50    |                                               |"<<endl;
    cout << "\t\t\t\t\t\t\t\t|                                              |                                               |"<<endl;
    cout << "\t\t\t\t\t\t\t\t------------------------------------------------------------------------------------------------"<<endl;

    cout << "\t\t\t\t\t\t\t\t------------------------------------------------------------------------------------------------"<<endl <<endl;
    cout << "\t\t\t\t\t\t\t\t|                                             SET                                              |"<<endl <<endl;
    cout << "\t\t\t\t\t\t\t\t------------------------------------------------------------------------------------------------"<<endl;
    cout << "\t\t\t\t\t\t\t\t|                                                                                              |"<<endl;
    cout << "\t\t\t\t\t\t\t\t|  COMBO (C)                                                                                   |"<<endl;
    cout << "\t\t\t\t\t\t\t\t|  ---------                                                                                   |"<<endl;
    cout << "\t\t\t\t\t\t\t\t|  [STANDARD]                                                                                  |"<<endl;
    cout << "\t\t\t\t\t\t\t\t|  Love yourself combo (1 mineral water+ 1 steam corn)                  RM9.00                 |"<<endl;
    cout << "\t\t\t\t\t\t\t\t|  Single combo (1 large soft drink, 1 large popcorn)                   RM17.00                |"<<endl;
    cout << "\t\t\t\t\t\t\t\t|  Couple combo (2 large soft drink, 1 large combo)                     RM25.00                |"<<endl;
    cout << "\t\t\t\t\t\t\t\t|  2 Couple combo (4 small soft drink, 2 large popcorn)                 RM35.00                |"<<endl;
    cout << "\t\t\t\t\t\t\t\t|                                                                                              |"<<endl;
    cout << "\t\t\t\t\t\t\t\t------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t  What would you like to have (P,C or D): ";
    cin>>munchies;
}
void popcorn()
{
    cout << endl<< "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t  ---------------------------------------------------"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  |                 POPCORN (P)                     |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  ---------------------------------------------------"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  |                                                 |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  | [A] Popcorn (small)                   RM8.00    |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  | [B] Popcorn (large)                   RM10.00   |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  |                                                 |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  |     [HOT SNACK]                                 |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  | [C] Steam sweet corn (only one size)  RM6.50    |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  | [D] Hotdogs (normal)                  RM4.50    |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  | [E] Hotdogs (cheese)                  RM6.50    |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  | [F] Chicken popcorn (small)           RM6.50    |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  | [G] Chicken popcorn (large)           RM8.50    |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  | [H] Mister potato / Twister (large)   RM6.50    |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  |                                                 |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  ---------------------------------------------------"<<endl;
}
void munchies_order()
{
        system("CLS");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t   ======================" <<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   |     YOUR ORDER     |"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ======================" <<endl<<endl;
}
void small_popcorn()
{
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  Please enter quantity: ";
        cin>>quantity_spc;
        munchies_order();
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  < You have selected "<<quantity_spc<<" Small Popcorn >"<<endl<<endl;

        addon_spc = quantity_spc + addon_spc;
        cost_spc = price_spc * addon_spc;

        cout<<fixed<<showpoint;
        cout<<setprecision(2)<<"\t\t\t\t\t\t\t\t\t\t\t  < The total amount is RM "<<cost_spc<<" >"<<endl<<endl;
}
void large_popcorn()
{
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  Please enter quantity: ";
        cin>>quantity_lpc;
        system("CLS");
        munchies_order();
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  < You have selected "<<quantity_lpc<<" Large Popcorn >"<<endl<<endl;

        addon_lpc = quantity_lpc + addon_lpc;
        cost_lpc = price_lpc * addon_lpc;

        cout<<fixed<<showpoint;
        cout<<setprecision(2)<<"\t\t\t\t\t\t\t\t\t\t\t  < The total amount is RM "<<cost_lpc<<" >"<<endl<<endl;
}
void steam_sweet_corn()
{
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  Please enter quantity: ";
        cin>>quantity_ssc;
        system("CLS");
        munchies_order();
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  < You have selected "<<quantity_ssc<<" Steam Sweet Corn >"<<endl<<endl;

        addon_ssc = quantity_ssc + addon_ssc;
        cost_ssc = price_ssc * addon_ssc;

        cout<<fixed<<showpoint;
        cout<<setprecision(2)<<"\t\t\t\t\t\t\t\t\t\t\t  < The total amount is RM "<<cost_ssc<<" >"<<endl<<endl;
}
void normal_hotdog()
{
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  Please enter quantity: ";
        cin>>quantity_nhd;
        system("CLS");
        munchies_order();
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  < You have selected "<<quantity_nhd<<" Normal Hotdogs >"<<endl<<endl;

        addon_nhd = quantity_nhd + addon_nhd;
        cost_nhd = price_nhd * addon_nhd;

        cout<<fixed<<showpoint;
        cout<<setprecision(2)<<"\t\t\t\t\t\t\t\t\t\t\t  < The total amount is RM "<<cost_nhd<<" >"<<endl<<endl;
}
void cheese_hotdog()
{
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  Please enter quantity: ";
        cin>>quantity_chd;
        system("CLS");
        munchies_order();
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  < You have selected "<<quantity_chd<<" Cheese Hotdogs >"<<endl<<endl;

        addon_chd = quantity_chd + addon_chd;
        cost_chd = price_chd * addon_chd;

        cout<<fixed<<showpoint;
        cout<<setprecision(2)<<"\t\t\t\t\t\t\t\t\t\t\t  < The total amount is RM "<<cost_chd<<" >"<<endl<<endl;
}
void small_chicken_popcorn()
{
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  Please enter quantity: ";
        cin>>quantity_scp;
        system("CLS");
        munchies_order();
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  < You have selected "<<quantity_scp<<" Small Chicken Popcorn >"<<endl<<endl;

        addon_scp = quantity_scp + addon_scp;
        cost_scp = price_scp * addon_scp;

        cout<<fixed<<showpoint;
        cout<<setprecision(2)<<"\t\t\t\t\t\t\t\t\t\t\t  < The total amount is RM "<<cost_scp<<" >"<<endl<<endl;
}
void large_chicken_popcorn()
{
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  Please enter quantity: ";
        cin>>quantity_lcp;
        system("CLS");
        munchies_order();
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  < You have selected "<<quantity_lcp<<" Large Chicken Popcorn >"<<endl<<endl;

        addon_lcp = quantity_lcp + addon_lcp;
        cost_lcp = price_lcp * addon_lcp;

        cout<<fixed<<showpoint;
        cout<<setprecision(2)<<"\t\t\t\t\t\t\t\t\t\t\t  < The total amount is RM "<<cost_lcp<<" >"<<endl<<endl;
}
void mister_potato()
{
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  Please enter quantity: ";
        cin>>quantity_mp;
        system("CLS");
        munchies_order();
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  < You have selected "<<quantity_mp<<" Mister Potato >"<<endl<<endl;

        addon_mp = quantity_mp + addon_mp;
        cost_mp = price_mp * addon_mp;

        cout<<fixed<<showpoint;
        cout<<setprecision(2)<<"\t\t\t\t\t\t\t\t\t\t\t  < The total amount is RM "<<cost_mp<<" >"<<endl<<endl;
}
void large_twister()
{
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  Please enter quantity: ";
        cin>>quantity_t;
        system("CLS");
        munchies_order();
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  < You have selected "<<quantity_t<<" Large Twister >"<<endl<<endl;

        addon_t = quantity_t + addon_t;
        cost_t = price_t * addon_t;

        cout<<fixed<<showpoint;
        cout<<setprecision(2)<<"\t\t\t\t\t\t\t\t\t\t\t  < The total amount is RM "<<cost_t<<" >"<<endl<<endl;
}
void drink()
{
    cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t  -------------------------------------------------"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  |                  Drink(D)                     |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  -------------------------------------------------"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  |                                               |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  | [A] Soft drink (small)     RM6.00             |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  | [B] Soft drink (large)     RM8.00             |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  |                                               |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  |     [OTHER DRINK]                             |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  | [C] Mineral water (500ml)  RM3.50             |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  | [D] Milo (small)           RM7.50             |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  | [E] Milo (large)           RM9.50             |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  | [F] Nescafe (small)        RM7.50             |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  | [G] Nescafe (large)        RM9.50             |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  |                                               |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  -------------------------------------------------"<<endl;
}
void small_soft_drink()
{
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  Please enter quantity: ";
        cin>>quantity_ssd;
        system("CLS");
        munchies_order();
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t   < You have selected "<<quantity_ssd<<" Small Soft Drink >"<<endl<<endl;

        addon_ssd = quantity_ssd + addon_ssd;
        cost_ssd = price_ssd * addon_ssd;

        cout<<fixed<<showpoint;
        cout<<setprecision(2)<<"\t\t\t\t\t\t\t\t\t\t\t   < The total amount is RM "<<cost_ssd<<" >"<<endl<<endl;
}
void large_soft_drink()
{
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  Please enter quantity: ";
        cin>>quantity_lsd;
        system("CLS");
        munchies_order();
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t   < You have selected "<<quantity_lsd<<" Large Soft Drink >"<<endl<<endl;

        addon_lsd = quantity_lsd + addon_lsd;
        cost_lsd = price_lsd * addon_lsd;

        cout<<fixed<<showpoint;
        cout<<setprecision(2)<<"\t\t\t\t\t\t\t\t\t\t\t   < The total amount is RM "<<cost_lsd<<" >"<<endl<<endl;
}
void mineral_water()
{
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  Please enter quantity: ";
        cin>>quantity_mw;
        system("CLS");
        munchies_order();
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t   < You have selected "<<quantity_mw<<" Mineral Water >"<<endl<<endl;

        addon_mw = quantity_mw + addon_mw;
        cost_mw = price_mw * addon_mw;

        cout<<fixed<<showpoint;
        cout<<setprecision(2)<<"\t\t\t\t\t\t\t\t\t\t\t   < The total amount is RM "<<cost_mw<<" >"<<endl<<endl;
}
void small_milo()
{
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  Please enter quantity: ";
        cin>>quantity_sm;
        system("CLS");
        munchies_order();
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t   < You have selected "<<quantity_sm<<" Small Milo >"<<endl<<endl;

        addon_sm = quantity_sm + addon_sm;
        cost_sm = price_sm * addon_sm;

        cout<<fixed<<showpoint;
        cout<<setprecision(2)<<"\t\t\t\t\t\t\t\t\t\t\t   < The total amount is RM "<<cost_sm<<" >"<<endl<<endl;
}
void large_milo()
{
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  Please enter quantity: ";
        cin>>quantity_lm;
        system("CLS");
        munchies_order();
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t   < You have selected "<<quantity_lm<<" Large Milo >"<<endl<<endl;

        addon_lm = quantity_lm + addon_lm;
        cost_lm = price_lm * addon_lm;

        cout<<fixed<<showpoint;
        cout<<setprecision(2)<<"\t\t\t\t\t\t\t\t\t\t\t   < The total amount is RM "<<cost_lm<<" >"<<endl<<endl;
}
void small_nescafe()
{
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  Please enter quantity: ";
        cin>>quantity_snc;
        system("CLS");
        munchies_order();
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t   < You have selected "<<quantity_snc<<" Small Nescafe >"<<endl<<endl;

        addon_snc = quantity_snc + addon_snc;
        cost_snc = price_snc * addon_snc;

        cout<<fixed<<showpoint;
        cout<<setprecision(2)<<"\t\t\t\t\t\t\t\t\t\t\t   < The total amount is RM "<<cost_snc<<" >"<<endl<<endl;
}
void large_nescafe()
{
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  Please enter quantity: ";
        cin>>quantity_lnc;
        system("CLS");
        munchies_order();
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t   < You have selected "<<quantity_lnc<<" Large Nescafe >"<<endl<<endl;

        addon_lnc = quantity_lnc + addon_lnc;
        cost_lnc = price_lnc * addon_lnc;

        cout<<fixed<<showpoint;
        cout<<setprecision(2)<<"\t\t\t\t\t\t\t\t\t\t\t   < The total amount is RM "<<cost_lnc<<" >"<<endl<<endl;
}
void combo()
{
    cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t --------------------------------------------------------------------------------------------"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t |                                    COMBO (C)                                             |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t --------------------------------------------------------------------------------------------"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t |                                                                                          |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t |      [STANDARD]                                                                          |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t |  [A] Love yourself combo (1 mineral water+ 1 steam corn)                  RM9.00         |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t |  [B] Single combo (1 large soft drink, 1 large popcorn)                   RM17.00        |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t |  [C] Couple combo (2 large soft drink, 1 large combo)                     RM25.00        |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t |  [D] 2 Couple combo (4 small soft drink, 2 large popcorn)                 RM35.00        |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t |                                                                                          |"<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t --------------------------------------------------------------------------------------------"<<endl;
}
void love_yourself_combo()
{
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  Please enter quantity: ";
        cin>>quantity_lyc;
        system("CLS");
        munchies_order();
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  < You have selected "<<quantity_lyc<<" Love Yourself Combo >"<<endl<<endl;

        addon_lyc = quantity_lyc + addon_lyc;
        cost_lyc = price_lyc * addon_lyc;

        cout<<fixed<<showpoint;
        cout<<setprecision(2)<<"\t\t\t\t\t\t\t\t\t\t\t  < The total amount is RM "<<cost_lyc<<" >"<<endl<<endl;
}
void single_combo()
{
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  Please enter quantity: ";
        cin>>quantity_sc;
        system("CLS");
        munchies_order();
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  < You have selected "<<quantity_sc<<" Single Combo >"<<endl<<endl;

        addon_sc = quantity_sc + addon_sc;
        cost_sc = price_sc * addon_sc;

        cout<<fixed<<showpoint;
        cout<<setprecision(2)<<"\t\t\t\t\t\t\t\t\t\t\t\t  < The total amount is RM "<<cost_sc<<" >"<<endl<<endl;
}
void couple_combo()
{
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  Please enter quantity: ";
        cin>>quantity_cc;
        system("CLS");
        munchies_order();
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  < You have selected "<<quantity_cc<<" Couple Combo >"<<endl<<endl;

        addon_cc = quantity_cc + addon_cc;
        cost_cc = price_cc * addon_cc;

        cout<<fixed<<showpoint;
        cout<<setprecision(2)<<"\t\t\t\t\t\t\t\t\t\t\t  < The total amount is RM "<<cost_cc<<" >"<<endl<<endl;
}
void two_couple_combo()
{
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  Please enter quantity: ";
        cin>>quantity_2cc;
        system("CLS");
        munchies_order();
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  < You have selected "<<quantity_2cc<<" Two Couple Combo >"<<endl<<endl;

        addon_2cc = quantity_2cc + addon_2cc;
        cost_2cc = price_2cc * addon_2cc;

        cout<<fixed<<showpoint;
        cout<<setprecision(2)<<"\t\t\t\t\t\t\t\t\t\t\t  < The total amount is RM "<<cost_2cc<<" >"<<endl<<endl;
}
void movie_addon()
{
    do
    {
    cout<<endl<<"\t\t\t\t\t\t\t\t\t\t  Do you want to add on ticket? [0] no [1] yes: ";
    cin >> add_on;
    }while( add_on != 0 && add_on != 1 );
}
void munchies_addon()
{
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t   ======================" <<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   |       ADD ON       |"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   ======================" <<endl<<endl;
    do
    {
        cout<<endl<<"\t\t\t\t\t\t\t\t\t\t\t  Do you want to add on? [0] no [1] yes: ";
        cin >> add_on1;
   } while ( add_on1 != 0 && add_on1 != 1 );
}
double addon_details(double total_price=0, double total_amount=0)
{
    double total=0;
    if (addon_spc != 0)
    {
        cout<<"\t\t\t\t\t  [A] \t\t\tSmall Popcorn \t\t\t\t   "<<setprecision(2)<<addon_spc<<"\t\t\t  RM "<<setprecision(2)<<price_spc<<"\t\t  RM "<<setprecision(2)<<cost_spc<<"\n";
   }
   if (addon_lpc != 0)
    {
        cout<<"\t\t\t\t\t  [B] \t\t\tLarge Popcorn \t\t\t\t   "<<setprecision(2)<<addon_lpc<<"\t\t\t  RM "<<setprecision(2)<<price_lpc<<"\t\t  RM "<<setprecision(2)<<cost_lpc<<"\n";
   }
   if (addon_ssc != 0)
    {
        cout<<"\t\t\t\t\t  [C] \t\t\tSteam Sweet Corn \t\t\t   "<<setprecision(2)<<addon_ssc<<"\t\t\t  RM "<<setprecision(2)<<price_ssc<<"\t\t  RM "<<setprecision(2)<<cost_ssc<<"\n";
   }
   if (addon_nhd != 0)
    {
        cout<<"\t\t\t\t\t  [D] \t\t\tNormal Hotdogs \t\t\t\t   "<<setprecision(2)<<addon_nhd<<"\t\t\t  RM "<<setprecision(2)<<price_nhd<<"\t\t  RM "<<setprecision(2)<<cost_nhd<<"\n";
   }
   if (addon_chd != 0)
    {
        cout<<"\t\t\t\t\t  [E] \t\t\tCheese Hotdogs \t\t\t\t   "<<setprecision(2)<<addon_chd<<"\t\t\t  RM "<<setprecision(2)<<price_chd<<"\t\t  RM "<<setprecision(2)<<cost_chd<<"\n";
   }
   if (addon_scp != 0)
    {
        cout<<"\t\t\t\t\t  [F] \t\t\tSmall Chicken Popcorn \t\t\t   "<<setprecision(2)<<addon_scp<<"\t\t\t  RM "<<setprecision(2)<<price_scp<<"\t\t  RM "<<setprecision(2)<<cost_scp<<"\n";
   }
   if (addon_lcp != 0)
    {
        cout<<"\t\t\t\t\t  [G] \t\t\tLarge Chicken Popcorn \t\t\t   "<<setprecision(2)<<addon_lcp<<"\t\t\t  RM "<<setprecision(2)<<price_lcp<<"\t\t  RM "<<setprecision(2)<<cost_lcp<<"\n";
   }
   if (addon_mp != 0)
    {
        cout<<"\t\t\t\t\t  [H] \t\t\tMister Potato \t\t\t\t   "<<setprecision(2)<<addon_mp<<"\t\t\t  RM "<<setprecision(2)<<price_mp<<"\t\t  RM "<<setprecision(2)<<cost_mp<<"\n";
   }
   if (addon_t != 0)
    {
        cout<<"\t\t\t\t\t  [H] \t\t\tTwister \t\t\t\t   "<<setprecision(2)<<addon_t<<"\t\t\t  RM "<<setprecision(2)<<price_t<<"\t\t  RM "<<setprecision(2)<<cost_t<<"\n";
   }
    cout<<endl<<"\t\t\t\t\t*Drink*"<<endl;

    if (addon_ssd != 0)
    {
        cout<<"\t\t\t\t\t  [A] \t\t\tSmall Soft Drink \t\t\t   "<<setprecision(2)<<addon_ssd<<"\t\t\t  RM "<<setprecision(2)<<price_ssd<<"\t\t  RM "<<setprecision(2)<<cost_ssd<<"\n";
   }
   if (addon_lsd != 0)
    {
        cout<<"\t\t\t\t\t  [B] \t\t\tLarge Soft Drink \t\t\t   "<<setprecision(2)<<addon_lsd<<"\t\t\t  RM "<<setprecision(2)<<price_lsd<<"\t\t  RM "<<setprecision(2)<<cost_lsd<<"\n";
   }
   if (addon_mw != 0)
    {
        cout<<"\t\t\t\t\t  [C] \t\t\tMineral Water \t\t\t\t   "<<setprecision(2)<<addon_mw<<"\t\t\t  RM "<<setprecision(2)<<price_mw<<"\t\t  RM "<<setprecision(2)<<cost_mw<<"\n";
   }
   if (addon_sm != 0)
    {
        cout<<"\t\t\t\t\t  [D] \t\t\tSmall Milo \t\t\t\t   "<<setprecision(2)<<addon_sm<<"\t\t\t  RM "<<setprecision(2)<<price_sm<<"\t\t  RM "<<setprecision(2)<<cost_sm<<"\n";
   }
   if (addon_lm != 0)
    {
        cout<<"\t\t\t\t\t  [E] \t\t\tLarge Milo \t\t\t\t   "<<setprecision(2)<<addon_lm<<"\t\t\t  RM "<<setprecision(2)<<price_lm<<"\t\t  RM "<<setprecision(2)<<cost_lm<<"\n";
   }
   if (addon_snc != 0)
    {
        cout<<"\t\t\t\t\t  [F] \t\t\tSmall Nescafe \t\t\t\t   "<<setprecision(2)<<addon_snc<<"\t\t\t  RM "<<setprecision(2)<<price_snc<<"\t\t  RM "<<setprecision(2)<<cost_snc<<"\n";
   }
   if (addon_lnc != 0)
    {
        cout<<"\t\t\t\t\t  [G] \t\t\tLarge Nescafe \t\t\t\t   "<<setprecision(2)<<addon_lnc<<"\t\t\t  RM "<<setprecision(2)<<price_lnc<<"\t\t  RM "<<setprecision(2)<<cost_lnc<<"\n";
   }
    cout<<endl<<"\t\t\t\t\t*Combo*"<<endl;

    if (addon_lyc != 0)
    {
        cout<<"\t\t\t\t\t  [A] \t\t\tLove Yourself Combo \t\t\t   "<<setprecision(2)<<addon_lyc<<"\t\t\t  RM "<<setprecision(2)<<price_lyc<<"\t\t  RM "<<setprecision(2)<<cost_lyc<<"\n";
   }
   if (addon_sc != 0)
    {
        cout<<"\t\t\t\t\t  [B] \t\t\tSingle Combo \t\t\t\t   "<<setprecision(2)<<addon_sc<<"\t\t\t  RM "<<setprecision(2)<<price_sc<<"\t\t  RM "<<setprecision(2)<<cost_sc<<"\n";
   }
   if (addon_cc != 0)
    {
        cout<<"\t\t\t\t\t  [C] \t\t\tCouple Combo \t\t\t\t   "<<setprecision(2)<<addon_cc<<"\t\t\t  RM "<<setprecision(2)<<price_cc<<"\t\t  RM "<<setprecision(2)<<cost_cc<<"\n";
   }
   if (addon_2cc != 0)
    {
        cout<<"\t\t\t\t\t  [D] \t\t\t2 Couple Combo \t\t\t\t   "<<setprecision(2)<<addon_2cc<<"\t\t\t  RM "<<setprecision(2)<<price_2cc<<"\t\t  RM "<<setprecision(2)<<cost_2cc<<"\n";
   }
    cout<<endl<<"\t\t\t\t"<<l;
    total_price=cost_spc+cost_lpc+cost_ssc+cost_nhd+cost_chd+cost_scp+cost_lcp+cost_mp+cost_t+cost_ssd+cost_lsd+cost_mw+cost_sm+cost_lm+cost_snc+cost_lnc+cost_lyc+cost_sc+cost_cc+cost_2cc;
    total_amount=total_amountA+total_amountB+total_amountC+total_amountD+total_amountE;
    cout<<fixed<<showpoint;
    total=total_price+total_amount;

    return total;
}
void movie_details()
{
        switch(movie)
    {
        case 'a': case 'A':
            cout<<"\n\t\t\t\t\tSelected Movie: < Titanic >";
            break;
        case 'b': case 'B':
            cout<<"\n\t\t\t\t\tSelected Movie: < The Sixth Sense >";
            break;
        case 'c': case 'C':
            cout<<"\n\t\t\t\t\tSelected Movie: < Harry Potter 1 >";
            break;
        case 'd': case 'D':
            cout<<"\n\t\t\t\t\tSelected Movie: < Paskal >";
            break;
        case 'e': case 'E':
            cout<<"\n\t\t\t\t\tSelected Movie: < Hantu Kak Liamh >";
            break;
        case 'f': case 'F':
            cout<<"\n\t\t\t\t\tSelected Movie: < BoBoiboy Movie 2 >";
            break;
        case 'g': case 'G':
            cout<<"\n\t\t\t\t\tSelected Movie: < IP Man 4 >";
            break;
        case 'h': case 'H':
            cout<<"\n\t\t\t\t\tSelected Movie: < Shaolin Soccer >";
            break;
    }
    switch(showtime)
    {
        case 'a': case 'A':
            cout<<"\n\t\t\t\t\tSelected Movie's Show time: < 11:00 >";
            break;
        case 'b': case 'B':
            cout<<"\n\t\t\t\t\tSelected Movie's Show time: < 12:30 >";
            break;
        case 'c': case 'C':
            cout<<"\n\t\t\t\t\tSelected Movie's Show time: < 13:30 >";
            break;
        case 'd': case 'D':
            cout<<"\n\t\t\t\t\tSelected Movie's Show time: < 14:00 >";
            break;
        case 'e': case 'E':
            cout<<"\n\t\t\t\t\tSelected Movie's Show time: < 15:15 >";
            break;
        case 'f': case 'F':
            cout<<"\n\t\t\t\t\tSelected Movie's Show time: < 16:00 >";
            break;
        case 'g': case 'G':
            cout<<"\n\t\t\t\t\tSelected Movie's Show time: < 17:30 >";
            break;
        case 'h' : case 'H':
            cout<<"\n\t\t\t\t\tSelected Movie's Show time: < 19:00 >";
            break;
        case 'i': case 'I':
            cout<<"\n\t\t\t\t\tSelected Movie's Show time: < 20:30 >";
            break;
        case 'j': case 'J':
            cout<<"\n\t\t\t\t\tSelected Movie's Show time: < 21:45 >";
            break;
        case 'k': case 'K':
            cout<<"\n\t\t\t\t\tSelected Movie's Show time: < 22:30 >";
            break;
        case 'l': case 'L':
            cout<<"\n\t\t\t\t\tSelected Movie's Show time: < 00:15 >";
            break;
    }
    switch(hall)
    {
        case 'a': case 'A':
            cout<<"\n\t\t\t\t\tSelected movie's hall: < CLASSIC Hall >\n" ;
            cout<<"\n\t\t\t\t\t  TYPE\t\t\t        \t\t\t\tQUANTITY\t\tUNIT PRICE\t     AMOUNT OF SALE\n";
    if (addon_hallAa != 0)
    {
        cout<<"\n\t\t\t\t\t  Adult\t\t\t        \t\t\t\t"<<setprecision(2)<<"   "<<addon_hallAa<<"\t\t\t  RM "<<setprecision(2)<<adult_hallA<<"\t\t  RM "<<setprecision(2)<<cost_hallAa<<"\n";
   }
   if (addon_hallAk != 0)
    {
        cout<<"\t\t\t\t\t  Kid\t\t\t        \t\t\t\t"<<setprecision(2)<<"   "<<addon_hallAk<<"\t\t\t  RM "<<setprecision(2)<<kid_hallA<<"\t\t  RM "<<setprecision(2)<<cost_hallAk<<"\n";
   }
   if (addon_hallAs != 0)
    {
        cout<<"\t\t\t\t\t  Senior Citizen\t\t\t        \t\t"<<setprecision(2)<<"   "<<addon_hallAs<<"\t\t\t  RM "<<setprecision(2)<<senior_hallA<<"\t\t  RM "<<setprecision(2)<<cost_hallAs<<"\n";
   }
   if (addon_hallAc != 0)
    {
        cout<<"\t\t\t\t\t  Couple\t\t\t        \t\t\t"<<setprecision(2)<<"   "<<addon_hallAc<<"\t\t\t  RM "<<setprecision(2)<<couple_hallA<<"\t\t  RM "<<setprecision(2)<<cost_hallAc<<"\n";
   }
            break;
        case 'b': case 'B':
            cout<<"\n\t\t\t\t\tSelected movie's hall: < DELUXE Hall >\n" ;
            cout<<"\n\t\t\t\t\t  TYPE\t\t\t        \t\t\t\tQUANTITY\t\tUNIT PRICE\t     AMOUNT OF SALE\n";
    if (addon_hallBa != 0)
    {
        cout<<"\n\t\t\t\t\t  Adult\t\t\t        \t\t\t\t"<<setprecision(2)<<"   "<<addon_hallBa<<"\t\t\t  RM "<<setprecision(2)<<adult_hallB<<"\t\t  RM "<<setprecision(2)<<cost_hallBa<<"\n";
   }
   if (addon_hallBk != 0)
    {
        cout<<"\t\t\t\t\t  Kid\t\t\t        \t\t\t\t"<<setprecision(2)<<"   "<<addon_hallBk<<"\t\t\t  RM "<<setprecision(2)<<kid_hallB<<"\t\t  RM "<<setprecision(2)<<cost_hallBk<<"\n";
   }
   if (addon_hallBs != 0)
    {
        cout<<"\t\t\t\t\t  Senior Citizen\t\t\t        \t\t"<<setprecision(2)<<"   "<<addon_hallBs<<"\t\t\t  RM "<<setprecision(2)<<senior_hallB<<"\t\t  RM "<<setprecision(2)<<cost_hallBs<<"\n";
   }
   if (addon_hallBc != 0)
    {
        cout<<"\t\t\t\t\t  Couple\t\t\t        \t\t\t"<<setprecision(2)<<"   "<<addon_hallBc<<"\t\t\t  RM "<<setprecision(2)<<couple_hallB<<"\t\t  RM "<<setprecision(2)<<cost_hallBc<<"\n";
   }
            break;
        case 'c': case 'C':
            cout<<"\n\t\t\t\t\tSelected movie's hall: < BEANIE Hall >\n" ;
            cout<<"\n\t\t\t\t\t  TYPE\t\t\t        \t\t\t\tQUANTITY\t\tUNIT PRICE\t     AMOUNT OF SALE\n";
    if (addon_hallCa != 0)
    {
        cout<<"\n\t\t\t\t\t  Adult\t\t\t        \t\t\t\t"<<setprecision(2)<<"   "<<addon_hallCa<<"\t\t\t  RM "<<setprecision(2)<<adult_hallC<<"\t\t  RM "<<setprecision(2)<<cost_hallBa<<"\n";
   }
   if (addon_hallCk != 0)
    {
        cout<<"\t\t\t\t\t  Kid\t\t\t        \t\t\t\t"<<setprecision(2)<<"   "<<addon_hallCk<<"\t\t\t  RM "<<setprecision(2)<<kid_hallC<<"\t\t  RM "<<setprecision(2)<<cost_hallBk<<"\n";
   }
   if (addon_hallCs != 0)
    {
        cout<<"\t\t\t\t\t  Senior Citizen\t\t\t        \t\t"<<setprecision(2)<<"   "<<addon_hallCs<<"\t\t\t  RM "<<setprecision(2)<<senior_hallC<<"\t\t  RM "<<setprecision(2)<<cost_hallBs<<"\n";
   }
            break;
        case 'd': case 'D':
            cout<<"\n\t\t\t\t\tSelected movie's hall: < CV INFINITY HALL(MCO Premium Glide Seat) >\n" ;
            cout<<"\n\t\t\t\t\t  TYPE\t\t\t        \t\t\t\tQUANTITY\t\tUNIT PRICE\t     AMOUNT OF SALE\n";
    if (addon_hallDa != 0)
    {
        cout<<"\n\t\t\t\t\t  Adult\t\t\t        \t\t\t\t"<<setprecision(2)<<"   "<<addon_hallDa<<"\t\t\t  RM "<<setprecision(2)<<adult_hallD<<"\t\t  RM "<<setprecision(2)<<cost_hallDa<<"\n";
   }
   if (addon_hallDk != 0)
    {
        cout<<"\t\t\t\t\t  Kid\t\t\t        \t\t\t\t"<<setprecision(2)<<"   "<<addon_hallDk<<"\t\t\t  RM "<<setprecision(2)<<kid_hallD<<"\t\t  RM "<<setprecision(2)<<cost_hallDk<<"\n";
   }
   if (addon_hallDs != 0)
    {
        cout<<"\t\t\t\t\t  Senior Citizen\t\t\t        \t\t"<<setprecision(2)<<"   "<<addon_hallDs<<"\t\t\t  RM "<<setprecision(2)<<senior_hallD<<"\t\t  RM "<<setprecision(2)<<cost_hallDs<<"\n";
   }
   if (addon_hallDc != 0)
    {
        cout<<"\t\t\t\t\t  Couple\t\t\t        \t\t\t"<<setprecision(2)<<"   "<<addon_hallDc<<"\t\t\t  RM "<<setprecision(2)<<couple_hallD<<"\t\t  RM "<<setprecision(2)<<cost_hallDc<<"\n";
   }
            break;
        case 'e': case 'E':
            cout<<"\n\t\t\t\t\tSelected movie's hall: < CV INFINITY HALL(MCO INDULGE Seat) >\n" ;
            cout<<"\n\t\t\t\t\t  TYPE\t\t\t        \t\t\t\tQUANTITY\t\tUNIT PRICE\t     AMOUNT OF SALE\n";
    if (addon_hallEa != 0)
    {
        cout<<"\n\t\t\t\t\t  Adult\t\t\t        \t\t\t\t"<<setprecision(2)<<"   "<<addon_hallEa<<"\t\t\t  RM "<<setprecision(2)<<adult_hallE<<"\t\t  RM "<<setprecision(2)<<cost_hallEa<<"\n";
   }
   if (addon_hallEk != 0)
    {
        cout<<"\t\t\t\t\t  Kid\t\t\t        \t\t\t\t"<<setprecision(2)<<"   "<<addon_hallEk<<"\t\t\t  RM "<<setprecision(2)<<kid_hallE<<"\t\t  RM "<<setprecision(2)<<cost_hallEk<<"\n";
   }
   if (addon_hallEs != 0)
    {
        cout<<"\t\t\t\t\t  Senior Citizen\t\t\t        \t\t"<<setprecision(2)<<"   "<<addon_hallEs<<"\t\t\t  RM "<<setprecision(2)<<senior_hallE<<"\t\t  RM "<<setprecision(2)<<cost_hallEs<<"\n";
   }
   if (addon_hallEc != 0)
    {
        cout<<"\t\t\t\t\t  Couple\t\t\t        \t\t\t"<<setprecision(2)<<"   "<<addon_hallEc<<"\t\t\t  RM "<<setprecision(2)<<couple_hallE<<"\t\t  RM "<<setprecision(2)<<cost_hallEc<<"\n";
   }
            break;
    }
}
void free_gift_details()
{
    if(total>=50 && total<100)
        {
            free_gift = "Cap x 1";
            cout<<"\t\t\t\t\t\t\t\t\tFree Gift                      : Cap x 1";
        }
        else if(total>=100 && total<150)
        {
            free_gift = "T-Shirt x 1";
            cout<<"\t\t\t\t\t\t\t\t\tFree Gift                      : T-Shirt x 1";
        }
        else if(total>=150)
        {
            free_gift = "Thermos x 1";
            cout<<"\t\t\t\t\t\t\t\t\tFree Gift                      : Thermos x 1";
        }
        else
        {
             free_gift = "No gift....";
             cout<<"\t\t\t\t\t\t\t\t\tFree Gift                      : Sorry, no gift....";
        }
}


int main()
{
Sleep(100);
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\n\t\t\t\t\t\t\t\t\t\t\tL";
Sleep(100);
cout<<"O";
Sleep(100);
cout<<"A";
Sleep(100);
cout<<"D";
Sleep(100);
cout<<"I";
Sleep(100);
cout<<"N";
Sleep(100);
cout<<"G";
Sleep(100);

for (int i=0; i<20; i++)
{
    cout<<".";
    Sleep(100);
}
system ("CLS");

home_page:
    Sleep(800 + rand()%250);
    system ("color F0");
    intro_access();

    do{
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\n\n\t\t\t\t\t\t\t\t\t\t\t\t     ==========================" <<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t     |        ACCESS TYPE      |"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t     ==========================" <<endl<<endl;
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t       1. Customer Access";
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t       2. Administrator Access";
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t    Please enter your option to proceed (1 or 2): ";
        cin>>opt;
        if(opt=="1")
        {
            goto menu;
        }
        else if(opt=="2")
        {

            do
            {
            AdminLogin admin;
            admin.login();
            system ("CLS");
            cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tWelcome: Please enter your choice" << endl;
            cout <<"\t\t\t\t\t\t\t\t\t\t\t    _ _ _ _ _ _ _ _ _ _ "  << endl;
            cout <<"\t\t\t\t\t\t\t\t\t\t\t   |                    |"  << endl;
            cout <<"\t\t\t\t\t\t\t\t\t\t\t   | Transaction Record |"  << endl;
            cout <<"\t\t\t\t\t\t\t\t\t\t\t   |_ _ _ _ _ _ _ _ _ _ |"  << endl;
            cout <<"\t\t\t\t\t\t\t\t\t\t\t   |                    |  "<< endl;
            cout <<"\t\t\t\t\t\t\t\t\t\t\t   | 1. Add Record      |  "<< endl;
            cout <<"\t\t\t\t\t\t\t\t\t\t\t   | 2. Edit Record     |  "<< endl;
            cout <<"\t\t\t\t\t\t\t\t\t\t\t   | 3. Delete Record   |  "<< endl;
            cout <<"\t\t\t\t\t\t\t\t\t\t\t   | 4. View Record     |  "<< endl;
            cout <<"\t\t\t\t\t\t\t\t\t\t\t   | 5. Search Record   |  "<< endl;
            cout <<"\t\t\t\t\t\t\t\t\t\t\t   | 6. Exit            |  "<< endl;
            cout <<"\t\t\t\t\t\t\t\t\t\t\t   |_ _ _ _ _ _ _ _ _ _ |  "<< endl;
            cout <<"\n\t\t\t\t\t\t\t\t\t\t\t      Your choice:";
            cin >>record;
            system ("CLS");
            if (record=="1")
            {
                do
                {
                addRecord();
                cout<<"\t\t\t\t\t\t\t\t\t\t\t    Do you want to add another new record [Y/N]: ";
                cin>>answer;

                }while(answer=='Y' || answer=='y'); //continue

            }

            else if(record=="2")
            {
                editRecord();
            }
             else if(record=="3")
            {    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n";
                cout<<"\t\t\t\t\t\t\t\t\t\t\t    Do you want to delete a record? "<<endl;
                cout<<"\n\t\t\t\t\t\t\t\t\t\t\t    If Yes,press 1, if no, press 2: ";
                cin>>reply;
                if(reply=="1")
                {
                    delRecord();
                }
                else if(reply=="2")
                {
                    goto home_page;
                }
            }
            else if(record=="4")
            {
                viewRecord();

            }
            else if(record=="5")
            {
                searchRecord();

            }
            else if(record=="6")
            {
                goto home_page;
            }
            else
            {
                    cout<<endl<<"\t\t\t\t\t\t\t\t       Invalid option. "<<endl;
                    Beep(300,500);
                    cout<<"\t\t\t\t\t\t\t\t       Choose from (1,2,3,4,5 or 6). "<<endl<<endl;
                    system("pause");
                    system("cls");
            }


        }while(record!="1" || record!="2" || record!="3" || record!="4" || record!="5");
        }
        else
        {
            cout<<endl<<"\t\t\t\t\t\t\t\t\t\t\t       Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t\t\t       Choose from (1 or 2). "<<endl<<endl;
            system("pause");
            system("cls");
        }
        }while(opt!="1" && opt!="2");
        cout<<endl;
menu:
    do{
        intro_menu();
        if(response=='1')
        {
            goto movie_info;
        }
        else if(response=='2')
        {
            goto showtimes;
        }
        else if(response=='3')
        {
            goto movie_halls;
        }
        else if(response=='4')
        {
            goto experiences;
        }
        else if(response=='5')
        {
            goto promotions;
        }
        else if(response=='6')
        {
            goto terms_and_conditions;
        }
        else if(response=='7')
        {
            goto booking;
        }
        else
        {
            cout<<endl<<"\t\t\t\t\t\t\t\t\t\t\t Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t\t\t Choose from (1,2,3,4,5,6 or 7). "<<endl<<endl;
            system("pause");
            system("cls");
        }
        }while(response!='1' && response!='2' && response!='3' && response!='4' && response!='5' && response!='6'&& response!='7');
        cout<<endl;

movie_info:
    system ("CLS");
    do{
     movie_info();

     if(choice == "1")
     {
         goto now;
     }
     else if(choice == "2")
     {
         goto coming;
     }
      else if(choice == "3")
     {
         goto menu;
     }
     else
     {
        cout<<endl<<"\t\t\t\t\t\t\t\t\t\t\t Invalid option. "<<endl;
        Beep(300,500);
        cout<<"\t\t\t\t\t\t\t\t\t\t\t Choose from (1,2 or 3). "<<endl<<endl;
        system("pause");
        system("cls");
     }
        }while(choice!="1" && choice!="2" && choice!="3");
        cout<<endl;

now:
    now_showing();

    switch(movie_opt)
    {
    case 1:
        system("CLS");
        cout << "\n\t\t\t\t\t\t\t\t\t\t        ====================" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t        |      Titanic      |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t        ====================" << endl << endl ;

        cout << "\t\t\t\t\t\t\t\t This 3D re-release of the 1997 film, starts out as a present day undersea" << endl;
        cout << "\t\t\t\t\t\t\t\t expedition in search of a valuable diamond aboard the wreckage of the Titanic," << endl;
        cout << "\t\t\t\t\t\t\t\t however, it then uncovers a tragic story of love between 17-year-old Rose" << endl;
        cout << "\t\t\t\t\t\t\t\t DeWitt Bukater (Kate Winslet) and Jack Dawson (Leonardo DiCaprio), a free-" << endl;
        cout << "\t\t\t\t\t\t\t\t spirited artist and third-class passenger who ignites the unquenchable fires of" <<endl;
        cout << "\t\t\t\t\t\t\t\t passion inside her. As their story begins, the fate of the Titanic draws to a tragic" << endl;
        cout << "\t\t\t\t\t\t\t\t end across the icy waters of the Atlantic." << endl<<endl;

        cout<<endl<<endl<<"\t\t\t\t"<<l<<endl;
        cout << endl << "\t\t\t\t\t\t\t\t Language: English" <<endl;
        cout << "\t\t\t\t\t\t\t\t Subtitle: NA" <<endl;
        cout << "\t\t\t\t\t\t\t\t Classification: U" <<endl;
        cout << "\t\t\t\t\t\t\t\t Release Date: 5 Apr 2012" <<endl;
        cout << "\t\t\t\t\t\t\t\t Genre: Adventure / Drama / Historical" <<endl;
        cout << "\t\t\t\t\t\t\t\t Running Time: 3 Hours 14 Minutes" <<endl;
        cout << "\t\t\t\t\t\t\t\t Distributor: 20TH CENTURY FOX" <<endl;
        cout << "\t\t\t\t\t\t\t\t Cast: Leonardo DiCaprio, Kate Winslet, Billy Zane, Kathy Bates, Bill Paxton" <<endl;
        cout << "\t\t\t\t\t\t\t\t Director: James Cameron" << endl;
        cout << "\t\t\t\t\t\t\t\t Format: NA" << endl;
        cout<<endl<<endl<<"\t\t\t\t"<<l<<endl;
    do{
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t 1. Back to Now Showing List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t 2. Move to Coming Soon List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t 3. Back to Main Menu"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t Which option would you like (1,2 or 3): ";
        cin>>opt_a;

        if(opt_a == "1")
        {
            goto now;
        }
        else if(opt_a == "2")
        {
            goto coming;
        }
        else if(opt_a == "3")
        {
            goto menu;
        }
        else
        {
            cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t\t Choose from (1,2 or 3). "<<endl<<endl;
            system("pause");
            system("cls");
        }
    }while(opt_a!="1" && opt_a!="2" && opt_a!="3");
    break;

    case 2:
        system("CLS");
        cout << "\n\t\t\t\t\t\t\t\t\t\t        =============================" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t        |      The Sixth Sense      |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t        =============================" << endl << endl ;

        cout << "\n\t\t\t\t\t\t\t\t In this chilling psychological thriller, eight-year-old Cole Sear is haunted"<<endl;
        cout << "\t\t\t\t\t\t\t\t by a dark secret: He is visited by ghosts. A helpless and reluctant channel,"<<endl;
        cout << "\t\t\t\t\t\t\t\t Cole is terrified by threatening visitations from those with "<<endl;
        cout << "\t\t\t\t\t\t\t\t unresolved problems who appear from the shadows. Confused by his paranormal powers,"<<endl;
        cout << "\t\t\t\t\t\t\t\t Cole is too young to understand his purpose and too terrified to tell anyone"<<endl;
        cout << "\t\t\t\t\t\t\t\t about his torment, except child psychologist Dr. Malcolm Crowe."<<endl;
        cout << "\t\t\t\t\t\t\t\t As Dr. Crowe tries to uncover the ominous truth about Cole's supernatural abilities,"<<endl;
        cout << "\t\t\t\t\t\t\t\t the consequence for client and therapist is a jolt that awakens them both to..."<<endl<<endl;

        cout<<endl<<endl<<"\t\t\t\t"<<l<<endl;
        cout << "\t\t\t\t\t\t\t\t Language: English" <<endl;
        cout << "\t\t\t\t\t\t\t\t Subtitle: English" <<endl;
        cout << "\t\t\t\t\t\t\t\t Classification: PG-13" <<endl;
        cout << "\t\t\t\t\t\t\t\t Release Date: Aug 6, 1999  Wide" <<endl;
        cout << "\t\t\t\t\t\t\t\t Genre: Mystery & Suspense" <<endl;
        cout << "\t\t\t\t\t\t\t\t Running Time: 1 Hours 45 Minutes" <<endl;
        cout << "\t\t\t\t\t\t\t\t Distributor: 	Buena Vista Pictures Distribution" <<endl;
        cout << "\t\t\t\t\t\t\t\t Cast:Bruce Willis, Toni Collette, Olivia Williams, Haley Joel Osmen" <<endl;
        cout << "\t\t\t\t\t\t\t\t Director: M. Night Shyamalan" << endl <<endl;
        cout<<endl<<endl<<"\t\t\t\t"<<l<<endl;
    do{
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t 1. Back to Now Showing List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t 2. Move to Coming Soon List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t 3. Back to Main Menu"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t Which option would you like (1,2 or 3): ";
        cin>>opt_a;

        if(opt_a == "1")
        {
            goto now;
        }
        else if(opt_a == "2")
        {
            goto coming;
        }
        else if(opt_a == "3")
        {
            goto menu;
        }
        else
        {
            cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t\t Choose from (1,2 or 3). "<<endl<<endl;
            system("pause");
            system("cls");
        }
    }while(opt_a!="1" && opt_a!="2" && opt_a!="3");
    break;

    case 3:
        system("CLS");
        cout << "\n\t\t\t\t\t\t\t\t\t\t       =============================" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t       |       Harry Potter 1       |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t       =============================" << endl << endl ;

        cout << "\t\t\t\t\t\t\t\t\t An orphaned boy enrolls in a school of wizardry,"<<endl;
        cout << "\t\t\t\t\t\t\t\t\t where he learns the truth about himself,"<<endl;
        cout << "\t\t\t\t\t\t\t\t\t his family and the terrible evil that haunts the magical world."<<endl<<endl;

        cout<<endl<<endl<<"\t\t\t\t"<<l<<endl;
        cout << "\n\t\t\t\t\t\t\t\t\t Language: English" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Subtitle: English" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Classification: PG-13" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Release Date: 16 November 2001 (U.K, U.S)" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Genre: Fantasy" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Running Time: 2 Hours 32 Minutes" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Distributor: Warner Bros. Pictures" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Cast:Daniel Radcliffe, Rupert Grint, Emma Watson, John Cleese "<<endl;
        cout << "\t\t\t\t\t\t\t\t\t Robbie Coltrane, Warwick Davis..." <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Director: Chris Columbus" << endl <<endl;

        cout<<endl<<endl<<"\t\t\t\t"<<l<<endl;
    do{
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t 1. Back to Now Showing List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t 2. Move to Coming Soon List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t 3. Back to Main Menu"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t Which option would you like (1,2 or 3): ";
        cin>>opt_a;

        if(opt_a == "1")
        {
            goto now;
        }
        else if(opt_a == "2")
        {
            goto coming;
        }
        else if(opt_a == "3")
        {
            goto menu;
        }
        else
        {
            cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t\t Choose from (1,2 or 3). "<<endl<<endl;
            system("pause");
            system("cls");
        }
    }while(opt_a!="1" && opt_a!="2" && opt_a!="3");
    break;

    case 4:
        system("CLS");
        cout << "\n\t\t\t\t\t\t\t\t\t\t        ====================" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t        |      Paskal      |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t        ====================" << endl << endl ;

        cout << "\t\t\t\t\t\t\t\t    Naval unit PASKAL is among the most elite special forces in Malaysia." << endl;
        cout << "\t\t\t\t\t\t\t\t    But all bets are off when one of its own stages a hijacking. Based on" << endl;
        cout << "\t\t\t\t\t\t\t\t    true events." << endl<< endl;

        cout<<endl<<endl<<"\t\t\t\t"<<l<<endl;
        cout << "\n\t\t\t\t\t\t\t\t    Language: Malay [Original]" <<endl;
        cout << "\t\t\t\t\t\t\t\t    Subtitle: English, Malay, Simplified Chinese, Traditional Chinese" <<endl;
        cout << "\t\t\t\t\t\t\t\t    Classification: 16+" <<endl;
        cout << "\t\t\t\t\t\t\t\t    Release Date: 27 September 2018" <<endl;
        cout << "\t\t\t\t\t\t\t\t    Genre: Malaysian Movies, Action & Adventure,"<<endl;
        cout << "\t\t\t\t\t\t\t\t    Military Action & Adventure, Dramas, Military Dramas" <<endl;
        cout << "\t\t\t\t\t\t\t\t    Running Time: 1 Hours 55 Minutes" <<endl;
        cout << "\t\t\t\t\t\t\t\t    Distributor: GSC Movies (Malaysia)" <<endl;
        cout << "\t\t\t\t\t\t\t\t    Cast: 	Hairul Azreen, Ammar Alfian, Henley Hii ..." <<endl;
        cout << "\t\t\t\t\t\t\t\t    Director: Adrian Teh" << endl <<endl;
        cout<<endl<<endl<<"\t\t\t\t"<<l<<endl;
    do{
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t 1. Back to Now Showing List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t 2. Move to Coming Soon List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t 3. Back to Main Menu"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t Which option would you like (1,2 or 3): ";
        cin>>opt_a;

        if(opt_a == "1")
        {
            goto now;
        }
        else if(opt_a == "2")
        {
            goto coming;
        }
        else if(opt_a == "3")
        {
            goto menu;
        }
        else
        {
            cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t\t Choose from (1,2 or 3). "<<endl<<endl;
            system("pause");
            system("cls");
        }
    }while(opt_a!="1" && opt_a!="2" && opt_a!="3");
    break;

    case 5:
        system("CLS");
        cout << "\n\t\t\t\t\t\t\t\t\t\t        =============================" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t        |      Hantu Kak Limah      |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t        =============================" << endl << endl ;

        cout << "\t\t\t\t\t\t\t\t  Kak Limah is discovered dead by villager. Since then, her ghost has been"<<endl;
        cout << "\t\t\t\t\t\t\t\t  spotted around Kampung Pisang, making the villagers feel restless."<<endl;
        cout << "\t\t\t\t\t\t\t\t  Enter Encik Solihin, who tries to help by shooing her ghost away from the village."<<endl;
        cout << "\t\t\t\t\t\t\t\t  Husin, Encik Solihin and other villagers trying to overcome this problem."<<endl;
        cout << "\t\t\t\t\t\t\t\t  However, the tragedy behind Kak Limah's death has yet to be unveiled." << endl<< endl;

        cout<<endl<<endl<<"\t\t\t\t"<<l<<endl;
        cout << "\n\t\t\t\t\t\t\t\t Language: Malay [Original]" <<endl;
        cout << "\t\t\t\t\t\t\t\t Subtitle: Malay" <<endl;
        cout << "\t\t\t\t\t\t\t\t Classification: P13" <<endl;
        cout << "\t\t\t\t\t\t\t\t Release Date: 9 August 2018" <<endl;
        cout << "\t\t\t\t\t\t\t\t Genre: Comedy, Horror" <<endl;
        cout << "\t\t\t\t\t\t\t\t Running Time: 1 Hours 51 Minutes" <<endl;
        cout << "\t\t\t\t\t\t\t\t Cast: Awie, Zul Ariffin, Uqasha Senrose, Delimawati, TJ Isa, Sharwani NS" <<endl;
        cout << "\t\t\t\t\t\t\t\t Director: 	Mamat Khalid" << endl <<endl;
        cout<<endl<<endl<<"\t\t\t\t"<<l<<endl;
    do{
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t 1. Back to Now Showing List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t 2. Move to Coming Soon List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t 3. Back to Main Menu"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t Which option would you like (1,2 or 3): ";
        cin>>opt_a;

        if(opt_a == "1")
        {
            goto now;
        }
        else if(opt_a == "2")
        {
            goto coming;
        }
        else if(opt_a == "3")
        {
            goto menu;
        }
        else
        {
            cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t\t Choose from (1,2 or 3). "<<endl<<endl;
            system("pause");
            system("cls");
        }
    }while(opt_a!="1" && opt_a!="2" && opt_a!="3");
    break;

    case 6:
        system("CLS");
        cout << "\n\t\t\t\t\t\t\t\t\t\t        ==============================" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t       |      BoBoiBoy Movie 2      |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t        ==============================" << endl << endl ;

        cout << "\t\t\t\t\t\t\t\t\t BoBoiBoy dan kawan-kawannya mesti melindungi kuasa" << endl;
        cout << "\t\t\t\t\t\t\t\t\t elementalnya daripada seorang penjahat purba yang mahu" << endl;
        cout << "\t\t\t\t\t\t\t\t\t mendapatkan semula kawalan dan menimbulkan huru-hara kosmos." << endl;

        cout<<endl<<endl<<"\t\t\t\t"<<l<<endl;
        cout << "\n\t\t\t\t\t\t\t\t\t Language: English,English,Malay [Original]" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Subtitle: English,Malay,Simplified Chinese" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Classification: 7+" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Release Date: 8 August 2019" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Genre: Filem Kanak-kanak & Keluarga" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Running Time: 1 Hours 50 Minutes" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Cast: Nur Fathiah Diaz, Fadzli Mohd Rawi, Wong Pak Lin,Nizam Razak,"<<endl;
        cout << "\t\t\t\t\t\t\t\t\t       Ieesya Isandra, Anas Abdul Aziz, Dzubir Mohammed Zakaria," <<endl;
        cout << "\t\t\t\t\t\t\t\t\t       Nur Sarah Alisya, Yap Ee Jean, Wong Wai Kay" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Director: Nizam Razak" << endl <<endl;
        cout<<endl<<endl<<"\t\t\t\t"<<l<<endl;
    do{
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t 1. Back to Now Showing List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t 2. Move to Coming Soon List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t 3. Back to Main Menu"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t Which option would you like (1,2 or 3): ";
        cin>>opt_a;

        if(opt_a == "1")
        {
            goto now;
        }
        else if(opt_a == "2")
        {
            goto coming;
        }
        else if(opt_a == "3")
        {
            goto menu;
        }
        else
        {
            cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t\t Choose from (1,2 or 3). "<<endl<<endl;
            system("pause");
            system("cls");
        }
    }while(opt_a!="1" && opt_a!="2" && opt_a!="3");
    break;

    case 7:
        system("CLS");
        cout << "\n\t\t\t\t\t\t\t\t\t        ==================================" << endl;
        cout << "\t\t\t\t\t\t\t\t\t        |      Ip Man 4: The Finale      |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t        ==================================" << endl << endl ;

        cout << "\t\t\t\t\t\t\t\t\t The Kung Fu master travels to the U.S. "<<endl;
        cout << "\t\t\t\t\t\t\t\t\t where his student has upset the local" << endl;
        cout << "\t\t\t\t\t\t\t\t\t martial arts community by opening a Wing Chun school." << endl<<endl ;

        cout<<endl<<endl<<"\t\t\t\t"<<l<<endl;
        cout << "\n\t\t\t\t\t\t\t\t\t Language: Cantonese | English | Mandarin" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Subtitle: English,Malay,Simplified Chinese" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Classification: PG13" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Release Date: 20 December 2019 (Malaysia)" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Genre: Action, Biography, Drama, History" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Running Time: 1 Hours 47 Minutes" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Cast:  Donnie Yen, Scott Adkins, Danny Kwok-Kwan Chan..." <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Director: Wilson Yip" << endl <<endl;
        cout<<endl<<endl<<"\t\t\t\t"<<l<<endl;
    do{
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t 1. Back to Now Showing List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t 2. Move to Coming Soon List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t 3. Back to Main Menu"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t Which option would you like (1,2 or 3): ";
        cin>>opt_a;

        if(opt_a == "1")
        {
            goto now;
        }
        else if(opt_a == "2")
        {
            goto coming;
        }
        else if(opt_a == "3")
        {
            goto menu;
        }
        else
        {
            cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t\t Choose from (1,2 or 3). "<<endl<<endl;
            system("pause");
            system("cls");
        }
    }while(opt_a!="1" && opt_a!="2" && opt_a!="3");
    break;

    case 8:
        system("CLS");
        cout << "\n\t\t\t\t\t\t\t\t\t\t        ============================" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t        |      Shaolin Soccer      |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t        ============================" << endl << endl ;

        cout << "\t\t\t\t\t\t\t\t\t\t A young Shaolin follower reunites with"<<endl;
        cout << "\t\t\t\t\t\t\t\t\t\t his discouraged brothers to form a soccer team" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t using their martial art skills to their advantage." << endl<<endl ;

        cout<<endl<<endl<<"\t\t\t\t"<<l<<endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t Language: Cantonese" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t\t Subtitle: English,Malay,Simplified Chinese" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t\t Classification: PG13" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t\t Release Date: 12 July 2001" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t\t Genre: Action, Comedy, Family, Fantasy, Sport" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t\t Running Time: 1 Hours 52 Minutes" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t\t Cast: Stephen Chow, Kan-Cheung Tsang " <<endl;
        cout << "\t\t\t\t\t\t\t\t\t\t Director: Stephen Chow" << endl <<endl;
        cout<<endl<<endl<<"\t\t\t\t"<<l<<endl;
     do{
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t 1. Back to Now Showing List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t 2. Move to Coming Soon List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t 3. Back to Main Menu"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t Which option would you like (1,2 or 3): ";
        cin>>opt_a;

        if(opt_a == "1")
        {
            goto now;
        }
        else if(opt_a == "2")
        {
            goto coming;
        }
        else if(opt_a == "3")
        {
            goto menu;
        }
        else
        {
            cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t\t Choose from (1,2 or 3). "<<endl<<endl;
            system("pause");
            system("cls");
        }
    }while(opt_a!="1" && opt_a!="2" && opt_a!="3");
    break;

    default:
        Beep(300,500);
        cout<<endl<<"\t\t\t\t\t\t\t\t\t\t Invalid Input. "<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t Choose from (1,2,3,4,5,6,7 or 8). "<<endl<<endl;
        system("pause");
        system("cls");}

coming:
    coming_soon();
    while(!((movie_opt>=1)&&(movie_opt<=4)))
        {
        cout<<endl<<"\t\t\t\t\t\t\t\t\t\t Invalid input.Choose from (1,2,3 or 4)."<<endl;
        Beep(300,500);
        cout << "\t\t\t\t\t\t\t\t\t\t Enter you choice: ";
        cin>>movie_opt;
        }

    switch(movie_opt)
    {
    case 1:
        system("CLS");
        cout << "\n\t\t\t\t\t\t\t\t\t\t        ===================" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t        |      MULAN      |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t        ===================" << endl << endl ;

        cout << "\t\t\t\t\t\t\t\t\t ¡°Mulan¡± is the epic adventure of a fearless young woman" << endl;
        cout << "\t\t\t\t\t\t\t\t\t who masquerades as a man in order to fight Northern Invaders" << endl;
        cout << "\t\t\t\t\t\t\t\t\t attacking China. The eldest daughter of an honored warrior," << endl;
        cout << "\t\t\t\t\t\t\t\t\t Hua Mulan is spirited, determined and quick on her feet." << endl;
        cout << "\t\t\t\t\t\t\t\t\t When the Emperor issues a decree that one man per family" << endl;
        cout << "\t\t\t\t\t\t\t\t\t must serve in the Imperial Army, she steps in to take the place" << endl;
        cout << "\t\t\t\t\t\t\t\t\t of her ailing father as Hua Jun, becoming one of "<<endl;
        cout << "\t\t\t\t\t\t\t\t\t China¡¯s greatest warriors ever." << endl<<endl ;

        cout<<endl<<endl<<"\t\t\t\t"<<l<<endl;
        cout << "\n\t\t\t\t\t\t\t\t\t Language: English" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Subtitle: English,Malay,Simplified Chinese" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Classification: PG13" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Release Date: September 4, 2020 (United States)" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Genre:  Action, Adventure, Drama, Family" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Running Time: 1 Hours 55 Minutes" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Cast: Rick Jaffa (screenplay by), Amanda Silver (screenplay by) " <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Director: Niki Caro" << endl <<endl;
        cout<<endl<<endl<<"\t\t\t\t"<<l<<endl;

    do{
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t This movie still N/A" <<endl;
        cout<<"\t\t\t\t\t\t\t\t\t 1. Back to Coming Soon List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t 2. Move to Now Showing List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t 3. Back to Main Menu"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t Which option would you like (1,2 or 3): ";
        cin>>opt_a;

        if(opt_a == "1")
        {
            goto coming;
        }
        else if(opt_a == "2")
        {
            goto now;
        }
        else if(opt_a == "3")
        {
            goto menu;
        }
        else
        {
            cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t Choose from (1,2 or 3). "<<endl<<endl;
            system("pause");
            system("cls");
        }
    }while(opt_a!="1" && opt_a!="2" && opt_a!="3");
    break;

    case 2:
        system("CLS");
        cout << "\n\t\t\t\t\t\t\t\t\t\t        =============================" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t        |      The Conjuring 3      |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t        =============================" << endl << endl ;

        cout << "\t\t\t\t\t\t\t\t\t The Conjuring: The Devil Made Me Do It (also known as The Conjuring 3)"<<endl;
        cout << "\t\t\t\t\t\t\t\t\t  is an upcoming American supernatural horror film." << endl;
        cout << "\t\t\t\t\t\t\t\t\t Plot unknown. Third installment of the Conjuring franchise." << endl<<endl;

        cout<<endl<<endl<<"\t\t\t\t"<<l<<endl;
        cout << "\n\t\t\t\t\t\t\t\t\t Language: English" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Subtitle: N/A" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Classification: N/A" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Release Date: June 4, 2021" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Genre: Horror, Mystery, Thriller" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Running Time: - " <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Cast: Vera Farmiga, Patrick Wilson, Ruairi O'Connor,"<<endl;
        cout << "\t\t\t\t\t\t\t\t\t  Sarah Catherine Hook, Julian Hilliard" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Director: Michael Chaves" << endl <<endl;
        cout<<endl<<endl<<"\t\t\t\t"<<l<<endl;

    do{
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t This movie still N/A" <<endl;
        cout<<"\t\t\t\t\t\t\t\t\t 1. Back to Coming Soon List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t 2. Move to Now Showing List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t 3. Back to Main Menu"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t Which option would you like (1,2 or 3): ";
        cin>>opt_a;

        if(opt_a == "1")
        {
            goto coming;
        }
        else if(opt_a == "2")
        {
            goto now;
        }
        else if(opt_a == "3")
        {
            goto menu;
        }
        else
        {
            cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t Choose from (1,2 or 3). "<<endl<<endl;
            system("pause");
            system("cls");
        }
    }while(opt_a!="1" && opt_a!="2" && opt_a!="3");
    break;

    case 3:
        system("CLS");
        cout << "\n\t\t\t\t\t\t\t\t\t\t       ==============================" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t       |      Fast & Furious 9      |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t       ==============================" << endl << endl ;

        cout << "\t\t\t\t\t\t\t\t\t Cypher enlists the help of Jakob, Dom's younger brother"<<endl;
        cout << "\t\t\t\t\t\t\t\t\t to take revenge on Dom and his team." << endl;
        cout << "\t\t\t\t\t\t\t\t\t Dom and his team." << endl<<endl;

        cout<<endl<<endl<<"\t\t\t\t"<<l<<endl;
        cout << "\t\t\t\t\t\t\t\t\t Language: English" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Subtitle: N/A" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Classification: N/A" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Release Date: April 2, 2021 (United States)" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Genre: Action, Adventure, Crime, Thriller" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Running Time: - " <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Cast: Vin Diesel, Michelle Rodriguez, Tyrese Gibson,"<<endl;
        cout << "\t\t\t\t\t\t\t\t\t       Chris 'Ludacris' Bridges, John Cena, Jordana Brewster, " <<endl;
        cout << "\t\t\t\t\t\t\t\t\t       Nathalie Emmanuel, Sung Kang, Helen Mirren, Charlize Theron " <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Director: Justin Lin" << endl <<endl;
        cout<<endl<<endl<<"\t\t\t\t"<<l<<endl;

    do{
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t This movie still N/A" <<endl;
        cout<<"\t\t\t\t\t\t\t\t\t 1. Back to Coming Soon List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t 2. Move to Now Showing List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t 3. Back to Main Menu"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t Which option would you like (1,2 or 3): ";
        cin>>opt_a;

        if(opt_a == "1")
        {
            goto coming;
        }
        else if(opt_a == "2")
        {
            goto now;
        }
        else if(opt_a == "3")
        {
            goto menu;
        }
        else
        {
            cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t Choose from (1,2 or 3). "<<endl<<endl;
            system("pause");
            system("cls");
        }
    }while(opt_a!="1" && opt_a!="2" && opt_a!="3");
    break;

    case 4:
        system("CLS");
        cout << "\n\t\t\t\t\t\t\t\t\t\t       =============================" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t       |      Love You Forever     |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t       =============================" << endl << endl ;

        cout << "\t\t\t\t\t\t\t\t\t While aiding an old theatre attendant Lin, aspiring dancer"<<endl;
        cout << "\t\t\t\t\t\t\t\t\t Qiu stumbles upon his diary which chronicles the life and " << endl;
        cout << "\t\t\t\t\t\t\t\t\t memories they shared together since childhood, thus discovering"<<endl;
        cout << "\t\t\t\t\t\t\t\t\t a timeless love story concealed in another dimension" << endl<<endl;

        cout<<endl<<endl<<"\t\t\t\t"<<l<<endl;
        cout << "\t\t\t\t\t\t\t\t\t Language: chinese" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Subtitle: N/A" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Classification: N/A" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Release Date: 25 August 2021" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Genre: Drama, Fantasy, Romance" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Running Time: - " <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Cast: Hong-Chi Lee, Yitong Li, Chao Zhang" <<endl;
        cout << "\t\t\t\t\t\t\t\t\t Director: Tingting Yao" << endl <<endl;
        cout<<endl<<endl<<"\t\t\t\t"<<l<<endl;

    do{
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t This movie still N/A" <<endl;
        cout<<"\t\t\t\t\t\t\t\t\t 1. Back to Coming Soon List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t 2. Move to Now Showing List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t 3. Back to Main Menu"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t Which option would you like (1,2 or 3): ";
        cin>>opt_a;

        if(opt_a == "1")
        {
            goto coming;
        }
        else if(opt_a == "2")
        {
            goto now;
        }
        else if(opt_a == "3")
        {
            goto menu;
        }
        else
        {
            cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t Choose from (1,2 or 3). "<<endl<<endl;
            system("pause");
            system("cls");
        }
    }while(opt_a!="1" && opt_a!="2" && opt_a!="3");
    break;

    default:
        Beep(300,500);
        cout<<endl<<"\t\t\t\t\t\t\t\t\t\t Invalid Input. "<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t Choose from (1,2,3 or 4). "<<endl<<endl;
        system("pause");
        system("cls");}


showtimes:
    system("cls");
        movie_st();
        do{
    cout<<"\n\n\t\t\t\t\t\t\t\t To continue with the main menu page please enter '1': "  ;
    cin>>opt;
    if(opt=="1")
    {
         goto menu;
    }
    else
    {
        cout<<"\n\t\t\t\t\t\t\t\t Invalid input."<<endl;
        cout<<"\t\t\t\t\t\t\t\t Please enter '1' to proceed. ";
        Beep(300,500);
    }}while(opt!="1");

movie_halls:
    system("CLS");
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t  ==============================" <<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t\t  |        MOVIE HALL LIST     |"<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t\t  ==============================" <<endl<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t\t Dear customer, "<<name<<endl<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t\t What hall would you like to view: "<<endl<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t\t 1. Classic Hall "<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t\t 2. Deluxe Hall "<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t\t 3. Beanie Hall "<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t\t 4. Infinity Hall: CV Premium Glide "<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t\t 5. Infinity Hall: CV Indulge "<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t\t 6. Back to Main Menu "<<endl<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t\t Enter your option (1,2,3,4,5 or 6): ";
     cin>>hall_opt;

     while(!((hall_opt>=1)&&(hall_opt<=6)))
        {
        cout<<endl<<"\t\t\t\t\t\t\t\t\t\t\t Invalid input.Choose from (1,2,3,4,5 or 6)."<<endl;
        Beep(300,500);
        cout << "\t\t\t\t\t\t\t\t\t\t\t Enter your option: ";
        cin>>hall_opt;
        }

    switch (hall_opt)
    {
    case 1:
        system ("CLS");
        cout << "\n                                                          ====================================================================================================" <<endl;
        cout << "                                                          |                                                                                                  |"<<endl;
        cout << "                                                          |                                            CLASSIC HALL                                          |" <<endl;
        cout << "                                                          |                                                                                                  |"<<endl;
        cout << "                                                          ====================================================================================================" <<endl;
        cout << "                                                          ____________________________________________________________________________________________________" <<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                               screen                                               |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |____________________________________________________________________________________________________|"<<endl<<endl;
        cout << "                                                          _____ _____ _____      _____ _____ _____ _____ _____ _____ _____ _____ _____      _____ _____ _____" <<endl;
        cout << "                                                         |_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_____|_____|_____|    |_____|_____|_____|"<<endl;
        cout << "                                                         |_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_____|_____|_____|    |_____|_____|_____|"<<endl;
        cout << "                                                         |_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_____|_____|_____|    |_____|_____|_____|"<<endl;
        cout << "                                                         |_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_____|_____|_____|    |_____|_____|_____|"<<endl;
        cout << "                                                         |_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_____|_____|_____|    |_____|_____|_____|"<<endl;
        cout << "                                                         |_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_____|_____|_____|    |_____|_____|_____|"<<endl<<endl;
        cout << "                                                          _____ _____ _____      _____ _____ _____ _____ _____ _____ _____ _____ _____      _____ _____ _____" <<endl;
        cout << "                                                         |_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_____|_____|_____|    |_____|_____|_____|"<<endl;
        cout << "                                                         |_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_____|_____|_____|    |_____|_____|_____|"<<endl;
        cout << "                                                         |_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_____|_____|_____|    |_____|_____|_____|"<<endl;
        cout << "                                                         |_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_____|_____|_____|    |_____|_____|_____|"<<endl;
        cout << "                                                         |_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_____|_____|_____|    |_____|_____|_____|"<<endl;
        cout << "                                                         |_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_____|_____|_____|    |_____|_____|_____|"<<endl<<endl<<endl;
        cout << "                                                           _______ _______         _______ _______   _______ _______   _______ _______       _______ _______  "<<endl;
        cout << "                                                          |       |       |       |       |       | |       |       | |       |       |     |       |       | "<<endl;
        cout << "                                                          |_______|_______|       |_______|_______| |_______|_______| |_______|_______|     |_______|_______| "<<endl;
        cout << "                                                           _______ _______         _______ _______   _______ _______   _______ _______       _______ _______  "<<endl;
        cout << "                                                          |       |       |       |       |       | |       |       | |       |       |     |       |       | "<<endl;
        cout << "                                                          |_______|_______|       |_______|_______| |_______|_______| |_______|_______|     |_______|_______| "<<endl;


    do{
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t 1. Back to Movie Hall List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t 2. Back to Main Menu"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t Which option would you like (1 or 2): ";
        cin>>opt_a;

        if(opt_a == "1")
        {
            goto movie_halls;
        }
        else if(opt_a == "2")
        {
            goto menu;
        }
        else
        {
            cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t\t Choose from (1 or 2). "<<endl<<endl;
        }
    }while(opt_a!="1" && opt_a!="2");
    break;

    case 2:
        system ("CLS");
        cout << "\n                                                          ====================================================================================================" <<endl;
        cout << "                                                          |                                                                                                  |"<<endl;
        cout << "                                                          |                                            DELUXE HALL                                           |" <<endl;
        cout << "                                                          |                                                                                                  |"<<endl;
        cout << "                                                          ====================================================================================================" <<endl;
        cout << "                                                          ____________________________________________________________________________________________________" <<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                               screen                                               |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |____________________________________________________________________________________________________|"<<endl<<endl;
        cout << "                                                          _____ _____ _____      _____ _____ _____ _____ _____ _____ _____ _____ _____      _____ _____ _____" <<endl;
        cout << "                                                         |_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_____|_____|_____|    |_____|_____|_____|"<<endl;
        cout << "                                                         |_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_____|_____|_____|    |_____|_____|_____|"<<endl;
        cout << "                                                         |_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_____|_____|_____|    |_____|_____|_____|"<<endl;
        cout << "                                                         |_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_____|_____|_____|    |_____|_____|_____|"<<endl;
        cout << "                                                         |_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_____|_____|_____|    |_____|_____|_____|"<<endl;
        cout << "                                                         |_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_____|_____|_____|    |_____|_____|_____|"<<endl<<endl;
        cout << "                                                          _____ _____ _____      _____ _____ _____ _____ _____ _____ _____ _____ _____      _____ _____ _____" <<endl;
        cout << "                                                         |_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_____|_____|_____|    |_____|_____|_____|"<<endl;
        cout << "                                                         |_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_____|_____|_____|    |_____|_____|_____|"<<endl;
        cout << "                                                         |_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_____|_____|_____|    |_____|_____|_____|"<<endl;
        cout << "                                                         |_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_____|_____|_____|    |_____|_____|_____|"<<endl;
        cout << "                                                         |_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_____|_____|_____|    |_____|_____|_____|"<<endl;
        cout << "                                                         |_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_____|_____|_____|    |_____|_____|_____|"<<endl<<endl<<endl;

    do{
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t 1. Back to Movie Hall List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t 2. Back to Main Menu"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t Which option would you like (1 or 2): ";
        cin>>opt_a;

        if(opt_a == "1")
        {
            goto movie_halls;
        }
        else if(opt_a == "2")
        {
            goto menu;
        }
        else
        {
            cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t\t Choose from (1 or 2). "<<endl<<endl;
        }
    }while(opt_a!="1" && opt_a!="2");
    break;

    case 3:
        system("CLS");
        cout << "\n                                                          ====================================================================================================" <<endl;
        cout << "                                                          |                                                                                                  |"<<endl;
        cout << "                                                          |                                           BEANIE HALL                                            |" <<endl;
        cout << "                                                          |                                                                                                  |"<<endl;
        cout << "                                                          ====================================================================================================" <<endl;
        cout << "                                                          ____________________________________________________________________________________________________" <<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                               screen                                               |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |____________________________________________________________________________________________________|"<<endl<<endl;
        cout << "                                                            _______________      _______________     _______________     _______________     _______________  "<<endl;
        cout << "                                                           |               |    |               |   |               |   |               |   |               | "<<endl;
        cout << "                                                           |               |    |               |   |               |   |               |   |               | "<<endl;
        cout << "                                                           |_______________|    |_______________|   |_______________|   |_______________|   |_______________|  "<<endl;
        cout << "                                                            _______________      _______________     _______________     _______________     _______________  "<<endl;
        cout << "                                                           |               |    |               |   |               |   |               |   |               | "<<endl;
        cout << "                                                           |               |    |               |   |               |   |               |   |               | "<<endl;
        cout << "                                                           |_______________|    |_______________|   |_______________|   |_______________|   |_______________|  "<<endl;
        cout << "                                                            _______________      _______________     _______________     _______________     _______________  "<<endl;
        cout << "                                                           |               |    |               |   |               |   |               |   |               | "<<endl;
        cout << "                                                           |               |    |               |   |               |   |               |   |               | "<<endl;
        cout << "                                                           |_______________|    |_______________|   |_______________|   |_______________|   |_______________|  "<<endl;
        cout << "                                                            _______________      _______________     _______________     _______________     _______________  "<<endl;
        cout << "                                                           |               |    |               |   |               |   |               |   |               | "<<endl;
        cout << "                                                           |               |    |               |   |               |   |               |   |               | "<<endl;
        cout << "                                                           |_______________|    |_______________|   |_______________|   |_______________|   |_______________|  "<<endl;
        cout << "                                                            _______________      _______________     _______________     _______________     _______________  "<<endl;
        cout << "                                                           |               |    |               |   |               |   |               |   |               | "<<endl;
        cout << "                                                           |               |    |               |   |               |   |               |   |               | "<<endl;
        cout << "                                                           |_______________|    |_______________|   |_______________|   |_______________|   |_______________|  "<<endl;

    do{
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t 1. Back to Movie Hall List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t 2. Back to Main Menu"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t Which option would you like (1 or 2): ";
        cin>>opt_a;

        if(opt_a == "1")
        {
            goto movie_halls;
        }
        else if(opt_a == "2")
        {
            goto menu;
        }
        else
        {
            cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t\t Choose from (1 or 2). "<<endl<<endl;
        }
    }while(opt_a!="1" && opt_a!="2");
    break;

    case 4:
        system("CLS");
        cout << "\n                                                          ====================================================================================================" <<endl;
        cout << "                                                          |                                                                                                  |"<<endl;
        cout << "                                                          |                                  INFINITY HALL: CV PREMIUM GLIDE                                 |" <<endl;
        cout << "                                                          |                                                                                                  |"<<endl;
        cout << "                                                          ====================================================================================================" <<endl;
        cout << "                                                          ____________________________________________________________________________________________________" <<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                               screen                                               |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |____________________________________________________________________________________________________|"<<endl<<endl;
        cout << "                                                            _______ _______      _______ _______     _______ _______     _______ _______     _______ _______  "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |_______|_______|    |_______|_______|   |_______|_______|   |_______|_______|   |_______|_______| "<<endl;
        cout << "                                                            _______ _______      _______ _______    _______ _______      _______ _______     _______ _______  "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |_______|_______|    |_______|_______|   |_______|_______|   |_______|_______|   |_______|_______| "<<endl;
        cout << "                                                            _______ _______      _______ _______     _______ _______     _______ _______     _______ _______  "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |_______|_______|    |_______|_______|   |_______|_______|   |_______|_______|   |_______|_______| "<<endl;
        cout << "                                                            _______ _______      _______ _______     _______ _______     _______ _______     _______ _______  "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |_______|_______|    |_______|_______|   |_______|_______|   |_______|_______|   |_______|_______| "<<endl;
        cout << "                                                            _______ _______      _______ _______     _______ _______     _______ _______     _______ _______  "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |_______|_______|    |_______|_______|   |_______|_______|   |_______|_______|   |_______|_______| "<<endl;
        cout << "                                                            _______ _______      _______ _______     _______ _______     _______ _______     _______ _______  "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |_______|_______|    |_______|_______|   |_______|_______|   |_______|_______|   |_______|_______| "<<endl;
        cout << "                                                            _______ _______      _______ _______     _______ _______     _______ _______     _______ _______  "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |_______|_______|    |_______|_______|   |_______|_______|   |_______|_______|   |_______|_______| "<<endl;
        cout << "                                                            _______________      _______________     _______________     _______________     _______________  "<<endl;
        cout << "                                                           |               |    |               |   |               |   |               |   |               | "<<endl;
        cout << "                                                           |               |    |               |   |               |   |               |   |               | "<<endl;
        cout << "                                                           |_______________|    |_______________|   |_______________|   |_______________|   |_______________| "<<endl;
        cout << "                                                            _______________      _______________     _______________     _______________     _______________  "<<endl;
        cout << "                                                           |               |    |               |   |               |   |               |   |               | "<<endl;
        cout << "                                                           |               |    |               |   |               |   |               |   |               | "<<endl;
        cout << "                                                           |_______________|    |_______________|   |_______________|   |_______________|   |_______________| "<<endl;

    do{
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t 1. Back to Movie Hall List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t 2. Back to Main Menu"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t Which option would you like (1 or 2): ";
        cin>>opt_a;

        if(opt_a == "1")
        {
            goto movie_halls;
        }
        else if(opt_a == "2")
        {
            goto menu;
        }
        else
        {
            cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t\t Choose from (1 or 2). "<<endl<<endl;
        }
    }while(opt_a!="1" && opt_a!="2");
    break;

    case 5:
        system("CLS");
        cout << "\n                                                          ====================================================================================================" <<endl;
        cout << "                                                          |                                                                                                  |"<<endl;
        cout << "                                                          |                                   INFINITY HALL: CV INDULGE                                      |" <<endl;
        cout << "                                                          |                                                                                                  |"<<endl;
        cout << "                                                          ====================================================================================================" <<endl;
        cout << "                                                          ____________________________________________________________________________________________________" <<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                               screen                                               |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |                                                                                                    |"<<endl;
        cout << "                                                         |____________________________________________________________________________________________________|"<<endl<<endl;
        cout << "                                                            _______ _______      _______ _______     _______ _______     _______ _______     _______ _______  "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |_______|_______|    |_______|_______|   |_______|_______|   |_______|_______|   |_______|_______| "<<endl;
        cout << "                                                            _______ _______      _______ _______     _______ _______     _______ _______     _______ _______  "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |_______|_______|    |_______|_______|   |_______|_______|   |_______|_______|   |_______|_______| "<<endl;
        cout << "                                                            _______ _______      _______ _______     _______ _______     _______ _______     _______ _______  "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |_______|_______|    |_______|_______|   |_______|_______|   |_______|_______|   |_______|_______| "<<endl;
        cout << "                                                            _______ _______      _______ _______     _______ _______     _______ _______     _______ _______  "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |_______|_______|    |_______|_______|   |_______|_______|   |_______|_______|   |_______|_______| "<<endl;
        cout << "                                                            _______ _______      _______ _______     _______ _______     _______ _______     _______ _______  "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |_______|_______|    |_______|_______|   |_______|_______|   |_______|_______|   |_______|_______| "<<endl;
        cout << "                                                            _______ _______      _______ _______     _______ _______     _______ _______     _______ _______  "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |_______|_______|    |_______|_______|   |_______|_______|   |_______|_______|   |_______|_______| "<<endl;
        cout << "                                                            _______ _______      _______ _______     _______ _______     _______ _______     _______ _______  "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |_______|_______|    |_______|_______|   |_______|_______|   |_______|_______|   |_______|_______| "<<endl;
        cout << "                                                            _______________      _______________     _______________     _______________     _______________  "<<endl;
        cout << "                                                           |               |    |               |   |               |   |               |   |               | "<<endl;
        cout << "                                                           |               |    |               |   |               |   |               |   |               | "<<endl;
        cout << "                                                           |_______________|    |_______________|   |_______________|   |_______________|   |_______________| "<<endl;
        cout << "                                                            _______________      _______________     _______________     _______________     _______________  "<<endl;
        cout << "                                                           |               |    |               |   |               |   |               |   |               | "<<endl;
        cout << "                                                           |               |    |               |   |               |   |               |   |               | "<<endl;
        cout << "                                                           |_______________|    |_______________|   |_______________|   |_______________|   |_______________| "<<endl;
        cout << "                                                            _______ _______      _______ _______     _______ _______     _______ _______     _______ _______  "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |       |       |    |       |       |   |       |       |   |       |       |   |       |       | "<<endl;
        cout << "                                                           |_______|_______|    |_______|_______|   |_______|_______|   |_______|_______|   |_______|_______| "<<endl;

    do{
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t 1. Back to Movie Hall List"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t 2. Back to Main Menu"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t Which option would you like (1 or 2): ";
        cin>>opt_a;

        if(opt_a == "1")
        {
            goto movie_halls;
        }
        else if(opt_a == "2")
        {
            goto menu;
        }
        else
        {
            cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t\t Choose from (1 or 2). "<<endl<<endl;
        }
    }while(opt_a!="1" && opt_a!="2");
    break;

    case 6:
        goto menu;
        break;

    default:
        Beep(300,500);
        cout<<endl<<"\t\t\t\t\t\t\t\t\t\t Invalid Input. "<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t Choose from (1,2,3,4,5 or 6). "<<endl<<endl;
        system("pause");
        system("cls");

    }

experiences:
    experiences();
    do{
    cout<<"\n\n\t\t\t\t\t\t\t\t            To continue with the main menu page please enter '1': "  ;
    cin>>opt;
    if(opt=="1")
    {
         goto menu;
    }
    else
    {
        cout<<"\n\t\t\t\t\t\t\t\t            Invalid input."<<endl;
        cout<<"\t\t\t\t\t\t\t\t            Please enter '1' to proceed. ";
        Beep(300,500);
    }}while(opt!="1");

promotions:
    movie_promotion();
    do{
    cout<<"\n\n\t\t\t\t\t\t\t\t\t          To continue with the main menu page please enter '1': ";
    cin>>opt;
    if(opt=="1")
    {
         goto menu;
    }
    else
    {
        cout<<"\n\t\t\t\t\t\t\t\t\t            Invalid input."<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t            Please enter '1' to proceed. ";
        Beep(300,500);
    }}while(opt!="1");

terms_and_conditions:
    movie_terms();
    do{
    cout<<"\n\n\t\t\t\t\t\t\t\t\t            To continue with the main menu page please enter '1': ";
    cin>>opt;
    if(opt=="1")
    {
         goto menu;
    }
    else
    {
        cout<<"\n\t\t\t\t\t\t\t\t\t            Invalid input."<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t            Please enter '1' to proceed. ";
        Beep(300,500);
    }}while(opt!="1");

booking:
        booking_ticket user(movie,showtime,hall);
        booking_intro();

choose_a_movie:
    movie = user.movie_name();

    if(movie=='a'||movie=='A')
    {
        system("CLS");
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t       Confirm < Titanic > as your choice?\n";
        cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        response = booking_response();
            if(response=='y'||response=='Y')
            {
                goto choose_the_show_time;
            }
            else if(response!='y'||response!='Y')
            {
                goto choose_a_movie;
            }

    }
    else if(movie=='b'||movie=='B')
    {
        system("CLS");
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t   Confirm < The Sixth Sense > as your choice?\n";
        cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        response = booking_response();
            if(response=='y'||response=='Y')
            {
                goto  choose_the_show_time;
            }
            else if(response!='y'||response!='Y')
            {
                goto choose_a_movie;
            }
    }
    else if(movie=='c'||movie=='C')
    {
        system("CLS");
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t     Confirm < Harry Potter 1 > as your choice?\n";
        cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        response = booking_response();
            if(response=='y'||response=='Y')
            {
                goto  choose_the_show_time;
            }
            else if(response!='y'||response!='Y')
            {
                goto choose_a_movie;
            }
    }
    else if(movie=='d'||movie=='D')
    {
        system("CLS");
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t       Confirm < Paskal > as your choice?\n";
        cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        response = booking_response();
            if(response=='y'||response=='Y')
            {
                goto  choose_the_show_time;
            }
            else if(response!='y'||response!='Y')
            {
                goto choose_a_movie;
            }
    }
    else if(movie=='e'||movie=='E')
    {
        system("CLS");
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t   Confirm < Hantu Kak Limah > as your choice?\n";
        cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        response = booking_response();
            if(response=='y'||response=='Y')
            {
                goto  choose_the_show_time;
            }
            else if(response!='y'||response!='Y')
            {
                goto choose_a_movie;
            }
    }
    else if(movie=='f'||movie=='F')
    {
        system("CLS");
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t   Confirm < BoBoiboy Movie 2 > as your choice?\n";
        cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        response = booking_response();
            if(response=='y'||response=='Y')
            {
                goto  choose_the_show_time;
            }
            else if(response!='y'||response!='Y')
            {
                goto choose_a_movie;
            }
    }
    else if(movie=='g'||movie=='G')
    {
        system("CLS");
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t  Confirm < IP Man 4: The Finale > as your choice?\n";
        cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        response = booking_response();
            if(response=='y'||response=='Y')
            {
                goto  choose_the_show_time;
            }
            else if(response!='y'||response!='Y')
            {
                goto choose_a_movie;
            }
    }
    else if(movie=='h'||movie=='H')
    {
        system("CLS");
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t   Confirm < Shaolin Soccer > as your choice?\n";
        cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        response = booking_response();
            if(response=='y'||response=='Y')
            {
                goto  choose_the_show_time;
            }
            else if(response!='y'||response!='Y')
            {
                goto choose_a_movie;
            }
    }

    else
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t\t Invalid option. "<<endl;
        Beep(300,500);
        cout<<"\t\t\t\t\t\t\t\t\t\t\t Choose from (a,b,c,d,e,f,g or h). "<<endl<<endl<<endl;
        system("pause");
        goto choose_a_movie;

    }

choose_the_show_time:
    showtime = user.movie_showtimes();
    if(showtime=='a'||showtime=='A')
        {
            system("CLS");
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tConfirm < 11:00 > as your choice?\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
            response = booking_response();
                if(response=='y'||response=='Y')
                {
                    goto  choose_a_movie_hall;
                }
                else if(response!='y'||response!='Y')
                {
                    goto choose_the_show_time;
                }
        }
        else if(showtime=='b'||showtime=='B')
        {
            system("CLS");
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tConfirm < 12:30 > as your choice?\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
            response = booking_response();
                if(response=='y'||response=='Y')
                {
                    goto  choose_a_movie_hall;
                }
                else if(response!='y'||response!='Y')
                {
                    goto choose_the_show_time;
                }

        }
        else if(showtime=='c'||showtime=='C')
        {
            system("CLS");
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tConfirm < 13:30 > as your choice?\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
            response = booking_response();
                if(response=='y'||response=='Y')
                {
                    goto  choose_a_movie_hall;
                }
                else if(response!='y'||response!='Y')
                {
                    goto choose_the_show_time;
                }
        }
        else if(showtime=='d'||showtime=='D')
        {
            system("CLS");
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tConfirm < 14:00 > as your choice?\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
            response = booking_response();
                if(response=='y'||response=='Y')
                {
                    goto  choose_a_movie_hall;
                }
                else if(response!='y'||response!='Y')
                {
                    goto choose_the_show_time;
                }
        }
        else if(showtime=='e'||showtime=='E')
        {
            system("CLS");
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tConfirm < 15:15 > as your choice?\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
            response = booking_response();
                if(response=='y'||response=='Y')
                {
                    goto  choose_a_movie_hall;
                }
                else if(response!='y'||response!='Y')
                {
                    goto choose_the_show_time;
                }
        }
        else if(showtime=='f'||showtime=='F')
        {
            system("CLS");
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tConfirm < 16:00 > as your choice?\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
            response = booking_response();
                if(response=='y'||response=='Y')
                {
                    goto  choose_a_movie_hall;
                }
                else if(response!='y'||response!='Y')
                {
                    goto choose_the_show_time;
                }
        }
        else if(showtime=='g'||showtime=='G')
        {
            system("CLS");
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tConfirm < 17:30 > as your choice?\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
            response = booking_response();
                if(response=='y'||response=='Y')
                {
                    goto  choose_a_movie_hall;
                }
                else if(response!='y'||response!='Y')
                {
                    goto choose_the_show_time;
                }
        }
        else if(showtime=='h'||showtime=='H')
        {
            system("CLS");
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tConfirm < 19:00 > as your choice?\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
            response = booking_response();
                if(response=='y'||response=='Y')
                {
                    goto  choose_a_movie_hall;
                }
                else if(response!='y'||response!='Y')
                {
                    goto choose_the_show_time;
                }
        }
        else if(showtime=='i'||showtime=='I')
        {
            system("CLS");
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tConfirm < 20:30 > as your choice?\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
            response = booking_response();
                if(response=='y'||response=='Y')
                {
                    goto  choose_a_movie_hall;
                }
                else if(response!='y'||response!='Y')
                {
                    goto choose_the_show_time;
                }
        }
        else if(showtime=='j'||showtime=='J')
        {
            system("CLS");
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tConfirm < 21:45 > as your choice?\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
            response = booking_response();
                if(response=='y'||response=='Y')
                {
                    goto  choose_a_movie_hall;
                }
                else if(response!='y'||response!='Y')
                {
                    goto choose_the_show_time;
                }
        }
        else if(showtime=='k'||showtime=='K')
        {
            system("CLS");
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tConfirm < 22:30 > as your choice?\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
            response = booking_response();
                if(response=='y'||response=='Y')
                {
                    goto  choose_a_movie_hall;
                }
                else if(response!='y'||response!='Y')
                {
                    goto choose_the_show_time;
                }
        }
        else if(showtime=='l'||showtime=='L')
        {
            system("CLS");
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tConfirm < 00:15 > as your choice?\n";
            cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
            response = booking_response();
                if(response=='y'||response=='Y')
                {
                    goto  choose_a_movie_hall;
                }
                else if(response!='y'||response!='Y')
                {
                    goto choose_the_show_time;
                }
        }

        else
        {
            cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t\t Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t\t\t Choose from (a,b,c,d,e,f,g,h,i,j,k or l). "<<endl;
            system("pause");
            goto choose_the_show_time;
        }

choose_a_movie_hall:
    hall=user.movie_hall();
    if(hall=='a'||hall=='A')
    {
        system("CLS");
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t    Confirm < CLASSIC Hall > as your choice?\n";
        cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        response = booking_response();
            if(response=='y'||response=='Y')
            {
                goto hall_a;
            }
            else if(response!='y'||response!='Y')
            {
                goto choose_a_movie_hall;
            }
hall_a:
        while(add_on != 0){
        system ("CLS");

        cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t    ========================================" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t    |                                       |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t    |         TICKET FOR CLASSIC HALL       |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t    |                                       |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t    ========================================" << endl << endl ;
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t    a. Adult (RM 14)";
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t    b. Kid (RM 9)";
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t    c. Senior Citizen (RM 9)";
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t    d. Couple Seat (RM 35)\n\n";

        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Please choose the type of ticket (a,b,c or d): ";
        cin>>ticket_type;
        switch(ticket_type)
        {
            case 'a': case 'A':
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Please enter amount of the ticket of Adult: ";
            cin>>num_hallAa;

            if(num_hallAa>=0 && num_hallAa<=30)
            {
                cout<<fixed<<showpoint;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  < You have chosen "<<num_hallAa<<setprecision(0)<<" Adult's ticket(s) >\n\n";
                addon_hallAa = num_hallAa + addon_hallAa;
                cost_hallAa = adult_hallA * addon_hallAa;
            }
            else if(num_hallAa>30)
            {
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t  < Sorry, we have not enough seat. >"<<endl;
                system("pause");
                goto hall_a;
            }
            else
            {
                cout<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
                Beep(300,500);
            }
            break;
        case 'b': case 'B':
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Please enter amount of the ticket of Kid: ";
            cin>>num_hallAk;

            if(num_hallAk>=0 && num_hallAk<=30)
            {
                cout<<fixed<<showpoint;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  < You have chosen "<<num_hallAk<<setprecision(0)<<" Kid's ticket(s) >\n\n";
                addon_hallAk = num_hallAk + addon_hallAk;
                cost_hallAk = kid_hallA * addon_hallAk;
            }
            else if(num_hallAk>30)
            {
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t  < Sorry, we have not enough seat. >"<<endl;
                system("PAUSE");
                goto hall_a;
            }
            else
            {
                cout<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
                Beep(300,500);
            }
            break;
        case 'c': case 'C':
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Please enter amount of the ticket of Senior Citizen: ";
            cin>>num_hallAs;

            if(num_hallAs>=0 && num_hallAs<=30)
            {
                cout<<fixed<<showpoint;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  < You have chosen "<<num_hallAs<<setprecision(0)<<" Senior Citizen's ticket(s) >\n\n";
                addon_hallAs = num_hallAs + addon_hallAs;
                cost_hallAs = senior_hallA * addon_hallAs;
            }
            else if(num_hallAs>30)
            {
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t  < Sorry, we have not enough seat. >"<<endl;
                system("PAUSE");
                goto hall_a;
            }
            else
            {
                cout<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
                Beep(300,500);
            }
            break;
        case 'd': case 'D':
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Please enter amount of the ticket of Couple Seat: ";
            cin>>num_hallAc;

            if(num_hallAc>=0 && num_hallAc<=12)
            {
                cout<<fixed<<showpoint;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  < You have chosen "<<num_hallAc<<setprecision(0)<<" Couple Seat's ticket(s) >\n\n";
                addon_hallAc = num_hallAc + addon_hallAc;
                cost_hallAc = couple_hallA * addon_hallAc;
            }
            else if(num_hallAc>12)
            {
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t  < Sorry, we have not enough seat. >"<<endl;
                system("PAUSE");
                goto hall_a;
            }
            else
            {
                cout<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
                Beep(300,500);
            }
            break;
        default:
            cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t\t  Choose from (a,b,c or d)"<<endl;
            system("PAUSE");
            goto hall_a;
        }

//add on ticket hall a
            movie_addon();}
            cout<<fixed<<showpoint;
            total_amountA = cost_hallAa+cost_hallAk+cost_hallAs+cost_hallAc;
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  < Total Amount = RM "<<setprecision(2)<<total_amountA<<" >";
            goto order_munchies;

    }

    else if(hall=='b'||hall=='B')
    {
        system("CLS");
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t    Confirm < DELUXE Hall > as your choice?\n";
        cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        response = booking_response();
            if(response=='y'||response=='Y')
            {
                goto hall_b;
            }
            else if(response!='y'||response!='Y')
            {
                goto choose_a_movie_hall;
            }

hall_b:
        while(add_on != 0){
        system ("CLS");

        cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t    ========================================" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t    |                                       |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t    |         TICKET FOR DELUXE HALL        |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t    |                                       |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t    ========================================" << endl << endl ;
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t    a. Adult (RM 18)";
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t    b. Kid (RM 10)";
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t    c. Senior Citizen (RM 10)";
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t    d. Couple Seat (RM 40)\n\n";

        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Please choose the type of ticket (a,b,c or d): ";
        cin>>ticket_type;
        switch(ticket_type)
        {
        case 'a': case 'A':
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Please enter amount of the ticket of Adult: ";
            cin>>num_hallBa;

            if(num_hallBa>=0 && num_hallBa<=30)
            {
                cout<<fixed<<showpoint;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  < You have chosen "<<num_hallBa<<setprecision(0)<<" Adult's ticket(s) >\n\n";
                addon_hallBa = num_hallBa + addon_hallBa;
                cost_hallBa = adult_hallB * addon_hallBa;
            }
            else if(num_hallBa>30)
            {
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  < Sorry, we have not enough seat. >"<<endl;
                system("PAUSE");
                goto hall_b;
            }
            else
            {
                cout<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
                Beep(300,500);
            }
        break;
        case 'b': case 'B':
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Please enter amount of the ticket of Kid: ";
            cin>>num_hallBk;

            if(num_hallBk>=0 && num_hallBk<=30)
            {
                cout<<fixed<<showpoint;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  <You have chosen "<<num_hallBk<<setprecision(0)<<" Kid's (s) >\n\n";
                addon_hallBk = num_hallBk + addon_hallBk;
                cost_hallBk = kid_hallB * addon_hallBk;
            }
            else if(num_hallBk>30)
            {
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  < Sorry, we have not enough seat. >"<<endl;
                system("PAUSE");
                goto hall_b;
            }
        else
            {
                cout<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
                Beep(300,500);
            }
        break;
        case 'c': case 'C':
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Please enter amount of the ticket of Senior Citizen: ";
            cin>>num_hallBs;

            if(num_hallBs>=0 && num_hallBs<=30)
            {
                cout<<fixed<<showpoint;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  <You have chosen "<<num_hallBs<<setprecision(0)<<" Senior Citizen's ticket(s) >\n\n";
                addon_hallBs = num_hallBs + addon_hallBs;
                cost_hallBs = senior_hallB * addon_hallBs;
            }
            else if(num_hallBs>30)
            {
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  < Sorry, we have not enough seat. >"<<endl;
                system("PAUSE");
                goto hall_b;
            }
        else
            {
                cout<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
                Beep(300,500);
            }
        break;
        case 'd': case 'D':
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Please enter amount of the ticket of Couple Seat: ";
            cin>>num_hallBc;

            if(num_hallBc>=0 && num_hallBc<=12)
            {
                cout<<fixed<<showpoint;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  <You have chosen "<<num_hallBc<<setprecision(0)<<" Couple Seat's ticket(s) >\n\n";
                addon_hallBc = num_hallBc + addon_hallBc;
                cost_hallBc = couple_hallB * addon_hallBc;
            }
            else if(num_hallBc>12)
            {
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  < Sorry, we have not enough seat. >"<<endl;
                system("PAUSE");
                goto hall_b;
            }
            else
            {
                cout<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
                Beep(300,500);
            }
        break;
        default:
            cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t\t  Choose from (a,b,c or d)"<<endl;
            system("PAUSE");
            goto hall_b;
        }

//add_more_ticket_b
            movie_addon();}
            cout<<fixed<<showpoint;
            total_amountB = cost_hallBa+cost_hallBk+cost_hallBs+cost_hallBc;
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  < Total Amount = RM "<<setprecision(2)<<total_amountB<<" >";
            goto order_munchies;
    }

   else if(hall=='c'||hall=='C')
    {
        system("CLS");
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t    Confirm < BEANIE Hall > as your choice?\n";
        cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        response = booking_response();
            if(response=='y'||response=='Y')
            {
                goto hall_c;
            }
            else if(response!='y'||response!='Y')
            {
                goto choose_a_movie_hall;
            }
hall_c:
        while(add_on != 0){
        system ("CLS");

        cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t    ========================================" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t    |                                       |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t    |         TICKET FOR BEANIE HALL        |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t    |                                       |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t    ========================================" << endl << endl ;
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t    a. Adult (RM 38)";
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t    b. Kid (RM 26)";
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t    c. Senior Citizen (RM 26)\n\n";

        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Please choose the type of ticket (a,b or c): ";
        cin>>ticket_type;
        switch(ticket_type)
        {
        case 'a': case 'A':
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Please enter amount of the ticket of Adult: ";
            cin>>num_hallCa;
            if(num_hallCa>=0 && num_hallCa<=30)
            {
                cout<<fixed<<showpoint;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  <You have chosen "<<num_hallCa<<setprecision(0)<<" Adult's ticket(s) >\n\n";
                addon_hallCa = num_hallCa + addon_hallCa;
                cost_hallCa = adult_hallC * addon_hallCa;
            }
            else if(num_hallCa>30)
            {
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  < Sorry, we have not enough seat. >"<<endl;
                system("PAUSE");
                goto hall_c;
            }
            else
            {
                cout<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
                Beep(300,500);
            }
             break;
       case 'b': case 'B':
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Please enter amount of the ticket of Kid: ";
            cin>>num_hallCk;

            if(num_hallCk>=0 && num_hallCk<=30)
            {
                cout<<fixed<<showpoint;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  <You have chosen "<<num_hallCk<<setprecision(0)<<" Kid's ticket(s) >\n\n";
                addon_hallCk = num_hallCk + addon_hallCk;
                cost_hallCk = kid_hallC * addon_hallCk;
            }
            else if(num_hallCk>30)
            {
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  < Sorry,we have not enough seat. >"<<endl;
                system("PAUSE");
                goto hall_c;
            }
            else
            {
                cout<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
                Beep(300,500);
            }
            break;
        case 'c': case 'C':
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Please enter amount of the ticket of Senior Citizen: ";
            cin>>num_hallCs;

            if(num_hallCs>=0 && num_hallCs<=30)
            {
                cout<<fixed<<showpoint;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  <You have chosen "<<num_hallCs<<setprecision(0)<<" Senior Citizen's ticket(s) >\n\n";
                addon_hallCs = num_hallCs + addon_hallCs;
                cost_hallCs = senior_hallC * addon_hallCs;
            }
            else if(num_hallCs>30)
            {
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  < Sorry, we have not enough seat. >"<<endl;
                system("PAUSE");
                goto hall_c;
            }
        else
            {
                cout<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
                Beep(300,500);
            }
        break;
        default:
            cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t\t  Choose from (a,b or c)"<<endl;
            system("PAUSE");
            goto hall_c;
        }

//add_more_ticket_c
            movie_addon();}
            cout<<fixed<<showpoint;
            total_amountC = cost_hallCa+cost_hallCk+cost_hallCs;
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  < Total Amount = RM "<<setprecision(2)<<total_amountC<<" >";
            goto order_munchies;
    }

    else if(hall=='d'||hall=='D')
    {
        system("CLS");
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t    Confirm < INFINITY Hall: CV PREMIUM GLIDE > as your choice?\n";
        cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        response = booking_response();
            if(response=='y'||response=='Y')
            {
                goto hall_d;
            }
            else if(response!='y'||response!='Y')
            {
                goto choose_a_movie_hall;
            }

hall_d:
        while(add_on != 0){
        system("cls");

        cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t =====================================================" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t |                                                    |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t |     TICKET FOR INFINITY HALL: CV PREMIUM GLIDE     |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t |                                                    |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t =====================================================" << endl << endl ;
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t    a. Adult (RM 40)";
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t    b. Kid (RM 29)";
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t    c. Senior Citizen (RM 29)";
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t    d. Couple Seat (RM 85)\n\n";

        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Please choose the type of ticket (a,b,c or d): ";
        cin>>ticket_type;
        switch(ticket_type)
        {
            case 'a': case 'A':
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Please enter amount of the ticket of Adult: ";
            cin>>num_hallDa;
            if(num_hallDa>=0 && num_hallDa<=30)
            {
                cout<<fixed<<showpoint;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  <You have chosen "<<num_hallDa<<setprecision(0)<<" Adult's ticket(s) >\n\n";
                addon_hallDa = num_hallDa + addon_hallDa;
                cost_hallDa = adult_hallD * addon_hallDa;
            }
            else if(num_hallDa>150)
            {
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  < Sorry, we have not enough seat. >"<<endl;
                system("PAUSE");
                goto hall_d;
            }
            else
            {
                cout<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
                Beep(300,500);
            }
        break;
        case 'b': case 'B':
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Please enter amount of the ticket of Kid: ";
            cin>>num_hallDk;

            if(num_hallDk>=0 && num_hallDk<=30)
            {
                cout<<fixed<<showpoint;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  <You have chosen "<<num_hallDk<<setprecision(0)<<" Kid's ticket(s)>\n\n";
                addon_hallDk = num_hallDk + addon_hallDk;
                cost_hallDk = kid_hallD * addon_hallDk;
            }
            else if(num_hallDk>30)
            {
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  <Sorry,we have not enough seat.>"<<endl;
                system("PAUSE");
                goto hall_d;
            }
            else
            {
                cout<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
                Beep(300,500);
            }
            break;
        case 'c': case 'C':
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Please enter amount of the ticket of Senior Citizen: ";
            cin>>num_hallDs;

            if(num_hallDs>=0 && num_hallDs<=30)
            {
                cout<<fixed<<showpoint;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  <You have chosen "<<num_hallDs<<setprecision(0)<<" Senior Citizen's ticket(s) >\n\n";
                addon_hallDs = num_hallDs + addon_hallDs;
                cost_hallDs = senior_hallD * addon_hallDs;
            }
            else if(num_hallDs>30)
            {
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  < Sorry, we have not enough seat. >"<<endl;
                system("PAUSE");
                goto hall_d;
            }
            else
            {
                cout<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
                Beep(300,500);
            }
        break;
        case 'd': case 'D':
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Please enter amount of the ticket of Couple Seat: ";
            cin>>num_hallDc;

            if(num_hallDc>=0 && num_hallDc<=12)
            {
                cout<<fixed<<showpoint;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  <You have chosen "<<num_hallDc<<setprecision(0)<<" Couple Seat's ticket(s)>\n\n";
                addon_hallDc = num_hallDc + addon_hallDc;
                cost_hallDc = couple_hallD * addon_hallDc;
            }
            else if(num_hallDc>12)
            {
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  < Sorry, we have not enough seat. >"<<endl;
                system("PAUSE");
                goto hall_d;
            }
            else
            {
                cout<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
                Beep(300,500);
            }
        break;
        default:
            cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t\t  Choose from (a,b,c or d)"<<endl;
            system("PAUSE");
            goto hall_d;
        }

//add_more_ticket_d
            movie_addon();}
            cout<<fixed<<showpoint;
            total_amountD = cost_hallDa+cost_hallDk+cost_hallDs+cost_hallDc;
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  < Total Amount = RM "<<setprecision(2)<<total_amountD<<" >";
            goto order_munchies;
    }

      else if(hall=='e'||hall=='E')
    {
        system("CLS");
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t    Confirm < INFINITY Hall: CV INDULGE > as your choice?\n";
        cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------";
        response = booking_response();
            if(response=='y'||response=='Y')
            {
                goto hall_e;
            }
            else if(response!='y'||response!='Y')
            {
                goto choose_a_movie_hall;
            }
hall_e:
        while(add_on != 0){
        system("cls");

        cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t =====================================================" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t |                                                    |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t |        TICKET FOR INFINITY HALL: CV INDULGE        |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t |                                                    |"<< endl;
        cout << "\t\t\t\t\t\t\t\t\t\t =====================================================" << endl << endl ;
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t    a. Adult (RM 50)";
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t    b. Kid (RM 35)";
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t    c. Senior Citizen (RM 35)";
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t    d. Couple Seat (RM 110)\n\n";

        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Please choose the type of ticket (a,b,c or d): ";
        cin>>ticket_type;
        switch(ticket_type)
        {
            case 'a': case 'A':
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Please enter amount of the ticket of Adult: ";
            cin>>num_hallEa;
            if(num_hallEa>=0 && num_hallEa<=30)
            {
                cout<<fixed<<showpoint;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  <You have chosen "<<num_hallEa<<setprecision(0)<<" Adult's ticket(s) >\n\n";
                addon_hallEa = num_hallEa + addon_hallEa;
                cost_hallEa = adult_hallE * addon_hallEa;
            }
            else if(num_hallEa>30)
            {
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  < Sorry, we have not enough seat. >"<<endl;
                system("PAUSE");
                goto hall_e;
            }
            else
            {
                cout<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
                Beep(300,500);
            }
            break;
        case 'b': case 'B':
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Please enter amount of the ticket of Kid: ";
            cin>>num_hallEk;

            if(num_hallEk>=0 && num_hallEk<=30)
            {
                cout<<fixed<<showpoint;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  <You have chosen "<<num_hallEk<<setprecision(0)<<" Kid's ticket(s) >\n\n";
                 addon_hallEk = num_hallEk + addon_hallEk;
                 cost_hallEk = kid_hallE * addon_hallEk;
            }
            else if(num_hallEk>30)
            {
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  < Sorry, we have not enough seat. >"<<endl;
                system("PAUSE");
                goto hall_e;
            }
            else
            {
                cout<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
                Beep(300,500);
            }
        break;
        case 'c': case 'C':
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Please enter amount of the ticket of Senior Citizen: ";
            cin>>num_hallEs;

            if(num_hallEs>=0 && num_hallEs<=30)
            {
                cout<<fixed<<showpoint;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  <You have chosen "<<num_hallEs<<setprecision(0)<<" Senior Citizen's ticket(s)>\n\n";
                addon_hallEs = num_hallEs + addon_hallEs;
                cost_hallEs = senior_hallE * addon_hallEs;
            }
            else if(num_hallEs>30)
            {
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  <Sorry,we have not enough seat.>"<<endl;
                system("PAUSE");
                goto hall_e;
            }
            else
            {
                cout<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
                Beep(300,500);
            }
        break;
        case 'd': case 'D':
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  Please enter amount of the ticket of Couple Seat: ";
            cin>>num_hallEc;

            if(num_hallEc>=0 && num_hallEc<=12)
            {
                cout<<fixed<<showpoint;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  <You have chosen "<<num_hallEc<<setprecision(0)<<" Couple Seat's ticket(s) >\n\n";
                addon_hallEc = num_hallEc + addon_hallEc;
                cost_hallEc = couple_hallE * addon_hallEc;
            }
            else if(num_hallEc>12)
            {
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  < Sorry, we have not enough seat. >"<<endl;
                system("PAUSE");
                goto hall_e;
            }
            else
            {
                cout<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
                Beep(300,500);
            }
        break;
        default:
            cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t\t  Choose from (a,b,c or d)"<<endl;
            system("PAUSE");
            goto hall_e;
        }

//add_more_ticket_e
            movie_addon();}
            cout<<fixed<<showpoint;
            total_amountE = cost_hallEa+cost_hallEk+cost_hallEs+cost_hallEc;
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  < Total Amount = RM "<<setprecision(2)<<total_amountE<<" >";
            goto order_munchies;
    }

    else
    {
        cout<<endl<<"\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
        Beep(300,500);
        cout<<"\t\t\t\t\t\t\t\t\t\t  Choose from (a,b,c,d or e). "<<endl;
        system("pause");
        goto choose_a_movie_hall;
    }


order_munchies:
    do{
            cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t  Would you like to order some munchies (Y/N): ";
            cin>>response;
                if (response=='y'||response=='Y')
                {
                    goto foodmenu;
                }
                else if (response=='n'||response=='N')
                {
                    goto transaction;
                }
                else
                {
                    hall_invalid();
                }
        }while(response!='y' && response!='Y' && response!='n' && response!='N');

foodmenu:
     while(add_on1 != 0){
         system("cls");
    do
    {
    movie_munchies();

    if (munchies=='P'||munchies=='p')
    {
    system("CLS");
    popcorn();

    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t  What would you like to have (a,b,c,d,e,f,g or h): ";
    cin>>response1;

        if (response1=='a'||response1=='A')
        {
        small_popcorn();
        }
        else if (response1=='b'||response1=='B')
        {
        large_popcorn();
        }
        else if (response1=='c'||response1=='C')
        {
        steam_sweet_corn();
        }
        else if (response1=='d'||response1=='D')
        {
        normal_hotdog();
        }
        else if (response1=='e'||response1=='E')
        {
        cheese_hotdog();
        }
        else if (response1=='f'||response1=='F')
        {
        small_chicken_popcorn();
        }
        else if (response1=='g'||response1=='G')
        {
        large_chicken_popcorn();
        }
        else if (response1=='h'||response1=='H')
        {
            cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  < Mister potato (M) or Twister (T) (M/T) > ";
            cin>>response;

                if (response=='m'||response=='M')
                {
                    mister_potato();
                }
                else if (response=='t'||response=='T')
                {
                    large_twister();
                }
                else
                {
                    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t   Invalid option.";
                    Beep(300,500);
                    goto foodmenu;
                }
        }
        else{
            cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  Invalid option."<<endl;
            Beep(300,500);
            system("PAUSE");
            goto foodmenu;
        }
    }
    else if (munchies=='D'||munchies=='d')
    {
    system("cls");
    drink();
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t  What would you like to have (a,b,c,d,e,f or g): ";
    cin>>response2;

        if (response2=='a'||response2=='A')
        {
        small_soft_drink();
        }
        else if (response2=='b'||response2=='B')
        {
        large_soft_drink();
        }
        else if (response2=='c'||response2=='C')
        {
        mineral_water();
        }
        else if (response2=='d'||response2=='D')
        {
        small_milo();
        }

        else if (response2=='e'||response2=='E')
        {
        large_milo();
        }

        else if (response2=='f'||response2=='F')
        {
        small_nescafe();
        }

        else if (response2=='g'||response2=='G')
        {
        large_nescafe();
        }
        else
        {
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  Invalid option."<<endl;
        Beep(300,500);
        system("PAUSE");
        goto foodmenu;
        }
    }

    else if (munchies=='C'||munchies=='c')
    {
    system("cls");
    combo();
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t  What would you like to have (a,b,c or d): ";
    cin>>response3;

        if (response3=='a'||response3=='A')
        {
        love_yourself_combo();
        }
        else if (response3=='b'||response3=='B')
        {
        single_combo();
        }
        else if (response3=='c'||response3=='C')
        {
        couple_combo();
        }
        else if (response3=='d'||response3=='D')
        {
        two_couple_combo();
        }
        else
        {
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t  Invalid option."<<endl;
        Beep(300,500);
        system("PAUSE");
        goto foodmenu;
        }
    }
    else
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t\t\t  Invalid option. "<<endl;
        Beep(300,500);
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t  Choose from (P,p,C,c,D or d). "<<endl<<endl;
        system("pause");

    }}while(munchies!='P' && munchies!='p' && munchies!='C' && munchies!='c' && munchies!='D' && munchies!='d');

    cout<<endl<<endl;
    munchies_addon();}

transaction:
    system("CLS");
    time_t now = time(0);
    tm *ltm = localtime(&now);
    cout <<"\n\t\t\t\t"<<w;
    cout <<"\n\t\t\t\t\t   Customer : "<<name<<"\t\t\t\t                    CONFIRMATION";


    cout << ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
    cout <<"\n\t\t\t\t"<<w<< endl;
    cout <<fixed<<showpoint;
    cout <<"\t\t\t\t  You have ordered:"<<endl;

    movie_details();
    cout<<endl<<endl;

    cout << "\n\t\t\t\t"<<l;
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t       MUNCHIES                                            "<< endl;
    cout <<"\t\t\t\t"<<l<< endl << endl ;
    cout<<"\t\t\t\t\tITEM CODE\t\t    ITEM\t\t\t\t QUANTITY\t\t UNIT PRICE\t       AMOUNT OF SALE\n";
    cout<<endl<<"\t\t\t\t\t*Popcorn*"<<endl;

    total=addon_details(total_price,total_amount);
    total_price=cost_spc+cost_lpc+cost_ssc+cost_nhd+cost_chd+cost_scp+cost_lcp+cost_mp+cost_t+cost_ssd+cost_lsd+cost_mw+cost_sm+cost_lm+cost_snc+cost_lnc+cost_lyc+cost_sc+cost_cc+cost_2cc;
    total_amount=total_amountA+total_amountB+total_amountC+total_amountD+total_amountE;

    cout<<endl<<"\t\t\t\t\t\t\t\t\tTotal Movie's Ticket                        : RM"<<setprecision(2)<<total_amount;
    cout<<endl<<"\t\t\t\t\t\t\t\t\tTotal Munchies                              : RM"<<setprecision(2)<<total_price;
    cout<<endl<<"\t\t\t\t\t\t\t\t\tTotal Amount (Movie's Ticket+Munchies)      : RM"<<setprecision(2)<<total<<endl;

member:
    cout<<"\n\t\t\t\t\t\t\t\t\tAre you a CV member (Y/N): ";
    cin>>response4;
    if(response4 == 'Y' || response4 =='y')
        {
            discount=10;
            payable = total *(1-(discount/100));
        }
    else if (response4 == 'N' || response4 =='n')
        {
            discount=0;
            payable = total;
        }
    else
        {
            cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\tInvalid option. "<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\tChoose from (Y,y,N or n). "<<endl<<endl;
            system("pause");
            goto member;
        }
        cout<<fixed<<showpoint;
        cout<<"\n\t\t\t\t\t\t\t\t\tDiscount                       : "<<noshowpoint<<setprecision(0)<<discount<<"%"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\tPayable after discount         : RM"<<showpoint<<setprecision(2)<<payable<<endl;

//free gift
        free_gift_details();

confirm:
    do{
    cout<<endl<<"\n\t\t\t\t\t\t\t\t\tDo you confirm your order?"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\tEnter 'Y' to proceed."<<endl;
    cout<<"\t\t\t\t\t\t\t\t\tEnter 'C' to cancel order."<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t\tYour choice: ";
    cin>>order;

    if( order == 'y' || order == 'Y' )
        system("cls");
    else if ( order == 'c' || order == 'C' )
    {
        system("cls");
        cout<<endl<<" \n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   Thank You for coming...."<<endl;
        cout<<" \t\t\t\t\t\t\t\t\t   Please come again...."<<endl;
        return 0;
    }
    else
    {
        cout<<endl<<"\t\t\t\t\t\tInvalid choice. "<<endl;
        Beep(300,500);
        cout<<endl<<"\t\t\t\t\t\tChoose from ( 'y','Y','c','C','m' and 'M' ) : "<<endl;
    }}while( order!='y' && order!='Y' && order!='c' && order!='C' );

//payment
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t     ==========================" <<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t     |      PAYMENT METHOD     |"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t     ==========================" <<endl<<endl;
        do{
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t           1. Cash "<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t           2. Credit "<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t     Select method of payment: ";
        cin>>method;

   if( method == "1" )
   {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t      ========================" <<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t      |      PAY BY CASH     |"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t      ========================" <<endl;
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t   Total of your order is : "<<setprecision(2)<<payable<<endl;
        cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t   Enter Paying Cash (RM) : ";
        cin >> pay;
        while( pay < payable)
        {
            cout<<endl<<"\n\t\t\t\t\t\t\t\t\t\t\t\t   The cash is not enough.Please try again."<<endl<<endl;
            Beep(300,500);
            cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t   Enter Paying Cash (RM) : ";
            cin>>pay;
        }
        cout<<fixed<<showpoint;
        change = pay - payable;
        cout<<endl<<"\t\t\t\t\t\t\t\t\t\t\t\t   Thank You. Your change is : "<<setprecision(2)<<change<<"\n\n\n\n\t\t";
   }
   else if( method == "2" )
   {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t         ========================" <<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t         |      PAY BY CARD     |"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t         ========================" <<endl;
        do{
        cout<<endl<<"\t\t\t\t\t\t\t\t\t\t\t\t    Enter your card no (16 digit): ";
        cin>> card_no;
        length_of_card_no = strlen(card_no);
        if(length_of_card_no !=16 )
            {
            cout<<endl<<"\t\t\t\t\t\t\t\t\t\t\t\t    Invalid input, card number must have 16 digits."<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t\t\t\t    Please try again."<<endl<<endl<<"\t\t\t\t\t"<<l<<endl;
            }
        }while(length_of_card_no !=16 );

        do
        {
        cout<<endl<<"\t\t\t\t\t\t\t\t\t\t\t\t    Enter your card pin (3 digit) : ";
        cin>>pin;
        length_of_pin=strlen(pin);
        if(length_of_pin!=3)
            {
            cout<<endl<<"\t\t\t\t\t\t\t\t\t\t\t\t    Invalid input, PIN must have 3 digits."<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t\t\t\t\t\t    Please try again."<<endl<<endl<<"\t\t\t\t\t"<<l<<endl;
            }
        }while(length_of_pin!=3);

        cout<<endl<<"\t\t\t\t\t\t\t\t\t\t\t\t    Transaction is being processed...."<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t    Transaction is completed."<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t    Thank you."<<endl;
    }
    else
   {
    cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t\t\t     Invalid Input"<<endl;
    Beep(300,500);
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t      Choose from (1 or 2)."<<endl<<endl;
    }}while(method!="1" && method!="2");

//receipt
    cout<<endl<<endl<<endl<<endl<<"\t\t\t\t\t"<<l<<endl;
    do{
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t          1. View Receipt "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t          2. Exit "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t          Your choice : ";
    cin>>choice1;

    if( choice1 == "1" )
    {
     cout<<"receipt"<<endl;
     system("cls");

     cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t            ====================" <<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t\t            |      RECEIPT     |"<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t\t            ====================" <<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t      ___________________________________________________"<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t      |                                                 |"<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t                            RECEIPT                      "<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t      |                    CV CINEMA                    |"<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t                         OPENING HOURS:                  "<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t      |            EVERYDAY : 10 a.m. - 1 a.m.          |"<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t         _____________________________________________   "<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t      |                                                 |"<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t            Total Price......................RM "<<setprecision(2)<<total<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t      |                                                 |"<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t            Discount........................."<<noshowpoint<<setprecision(0)<<discount<<" %"<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t      |                                                 |"<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t            Payable After Discount...........RM "<<showpoint<<setprecision(2)<<payable<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t      |                                                 |"<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t            Free Gift........................"<<setprecision(2)<<free_gift<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t      |                                                 |"<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t            Final Total......................RM "<<setprecision(2)<<payable<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t      |                                                 | "<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t         _____________________________________________    "<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t      |                                                 | "<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t                                                          "<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t      |                                                 | "<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t               Thank you and please come again.           "<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t      | The best services and food are waiting for you. | "<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t                      Enjoy your meal!                 "<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t      |                                                 | "<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t                                                          "<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t      |_________________________________________________|"<<endl;

    }
    else if ( choice1 == "2" )
    {
        goto home_page;
    }
    else
    {
        cout<<endl<<"\t\t\t\t\t\t\t\t\t\t\t\t        Invalid Input."<<endl;
        Beep(300,500);
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t        Choose from (1,2 or 3) : "<<endl<<endl;
    }}while( choice1!="1" && choice1!="2" );

    cout<<"\n";
    system("pause");
    system("cls");
    cout<<"\t\t\t\t\t\t\t\t\t     ====================================" <<endl;
    cout<<"\t\t\t\t\t\t\t\t\t     |      ORDER (viewed by workers)    |"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t     ====================================" <<endl<<endl;
    cout <<"\n\t\t\t\t"<<w;
    cout <<"\n\t\t\t\t   Customer : "<<name<<"\t\t\t\t\t\t\t\t\t\t\t\t";
    cout << ltm->tm_mday<<"/"<< 1 + ltm->tm_mon<<"/"<< 1900 + ltm->tm_year<<"\t";
    cout << ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
    cout <<"\n\t\t\t\t"<<w<< endl;
    cout <<fixed<<showpoint;
    cout <<"\t\t\t\t  What have ordered by customer : "<<name<<endl;

    movie_details();
    cout<<endl<<endl;

    cout << "\n\t\t\t\t"<<l;
    cout << "\t\t\t\t\t\t\t\t\t\t\t      MUNCHIES                                            "<< endl;
    cout <<"\t\t\t\t"<<l<< endl << endl ;
    cout<<"\t\t\t\t\tITEM CODE\t\t    ITEM\t\t\t\t QUANTITY\t\t UNIT PRICE\t       AMOUNT OF SALE\n";
    cout<<endl<<"\t\t\t\t\t*Popcorn*"<<endl;

    total=addon_details(total_price,total_amount);

    cout<<endl<<"\t\t\t\t\t\t\t\t\tTotal Movie's Ticket                        : RM"<<setprecision(2)<<total_amount;
    cout<<endl<<"\t\t\t\t\t\t\t\t\tTotal Munchies                              : RM"<<setprecision(2)<<total_price;
    cout<<endl<<"\t\t\t\t\t\t\t\t\tTotal Amount (Movie's Ticket+Munchies)      : RM"<<setprecision(2)<<total<<endl;
    cout<<"\n\t\t\t\t\t\t\t\t\tDiscount                       : "<<noshowpoint<<setprecision(0)<<discount<<"%"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\tPayable after discount         : RM"<<showpoint<<setprecision(2)<<payable<<endl;
    free_gift_details();
    cout<<endl<<endl<<"\t\t\t\t"<<l;

    ofstream outfile;
    outfile.open("data.txt",ios::app | ios::out);
    outfile<<name;
    outfile<<"\t\t  "<<discount;
    outfile<<"\t\t\t      "<<payable<<endl;
    outfile.close();


    return 0;
}
