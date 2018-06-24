#include <iostream>

#include <iomanip>

#include <time.h>

#include <fstream>

#include <conio.h>

#include <string.h>

#include <stdlib.h>

#include<process.h>

#include<dos.h>

#include"atm.h"

using namespace std;


int main()

{

    int e;

    COKAccountHolders p;



    system ("Color 1b");

    cout<<"\n============================WELCOME TO OUR PROJECT ON ATM==================================\n\n";

    cout<<"\t\t\t--------------------\n"<<endl;

    //Prompt to show today's date

    cout << "\t\tToday's date is: ";

    //Show date and time function

    time_t now;

    time(&now);


    printf("%s\n", ctime(&now));;

    //Give space for the function of date and time

    cout<<"\t\t\t--------------------\n"<<endl;
    cout<<"============================WELCOME TO OUR PROJECT ON ATM==================================\n\n";

//==================================================================================================



    cout<<"\tPress 1 and press Enter to Access your account via pin number\n\n";

    cout<<"\t\t\t\t\t or \n\n";

    cout<<"\t\t\tPress 0 and press Enter to get Help.\n\n";


    int access;

    cin>>access;

    switch(access)

    {

    case 1://pin to access account

        system("cls");
        int i, pin;



        cout<<"\n============================ATM ACCOUNT ACCESS==================================\n\n";

        cout<<"\n\nWhat is your account Pin access Number? Only one attempts allowed.\n\n"<<endl;

        cout<<"============================ATM ACCOUNT ACCESS==================================\n\n";

        cin>>pin;



        system("cls");



        if(pin==123)



        {

            system("cls");



            do

            {

                system("cls");

                system ("Color 1a");

                cout << endl << "\n======================ATM Main Menu Screen======================\n" << endl << endl;

                cout << "\t\tEnter (1) for Cash Deposit" << endl;

                cout << "\t\tEnter (2) for Cash Withdrawal" << endl;

                cout << "\t\tEnter (3) for Balance Inquiry" << endl;

                cout << "\t\tEnter (4) for Pay Bills" << endl;

                cout << "\t\tEnter (5) to Account Interest Payment" << endl;

                cout << "\t\tEnter (0) to Exit ATM" << endl << endl;

                cout << "\t\tPLEASE ENTER A SELECTION AND PRESS RETURN KEY: \n\n";

                cout<<"==========================ATM MAIN MENU================================\n\n";



                cin>>e;

                switch(e)

                {

                case 1:

                    p.deposit();

                    break;

                case 2:

                    p.withdraw();

                    break;

                case 3:

                    p.details();

                    break;

                case 4:

                    p.payBills();

                    break;

                case 5:

                    p.interest();

                    break;

                case 0:

                    p.accountExit();
                    break;

                default:
                    cout<<"Please Enter the Correct Number Choice"<<endl;

                }

            }
            while(e!=0);



            break;

        }



        else

        {

            system("cls");

            system("Color 1c");

            cout<<"\n===========================THANKS FOR MAKING IT ATM===========================\n\n";

            cout<<"\nYou had made three attempts which failed!!! No More attemps allowed!! Sorry!!\n\n";

            cout<<"===========================THANKS FOR MAKING IT ATM===========================\n\n";



            system("PAUSE");

            exit (1);

        }

//==================================================================================================





    case 0://pin to access account

        system("cls");

        cout<<"\n==========================ATM ACCOUNT STATUS================================\n\n";

        cout<<"\tYou must have the correct pin number to access this acount. See your\n\n";

        cout<<"\t  bank representative for assistance during bank opening hours\n\n";

        cout<<"\t\tThanks for making it COK, your choice today!!\n\n";

        cout<<"==========================ATM ACCOUNT STATUS================================\n\n";

        system ("PAUSE");
        exit(1);

        break;

//==================================================================================================

    }



    system("PAUSE");

    return 0;



};
