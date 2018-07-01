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

 COKAccountHolders::COKAccountHolders()

    {

        accountNumber = 5678;
        accountHolders = "Tashi, Rakish, Tyrone, Audley, Michael";

        accountHoldersAddress = "26 Grove Road, Mandeville";

        startBalance = 30000.00;

        accountBalance = 0.00;

        branch  = "Mandeville";

        amount = 0;

    }


void COKAccountHolders::interest()

{

    system("cls");



    cout<<"\n==========================COK ACCOUNT INTEREST PAYMENT==========================\n\n";

    cout<<"\tThe Interest is calculate over the last SIX months on the average account balance\n";

    cout<<"\n\t\tInterest Rate payable is 10% per annum."<<endl;

    cout<<"\t\tView the accumulated interest? Press 1 for Yes OR 0 for NO.\n\n";






    cout<<"==========================COK ACCOUNT INTEREST PAYMENT==========================\n\n";



    cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";
    cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";

    cout<<"\tThe Branch location is :"<<branch<<"\n\n";

    cout<<"\tAccount number :"<<accountNumber<<"\n\n";

    cout<<"============================+++++++++++++++++++++++============================\n\n";

    cout<<"\tStarting account balance :$"<<startBalance<<"\n\n";

    cout<<"\tPresent available balance :$"<<accountBalance<<"\n\n";

    accountInterest=accountBalance+(accountBalance*1.050);

    cout<<"\tPresent available balance + interest for 6 months :$"<<accountInterest<<"\n\n";

    cout<<"Press any key to Return to the Main Menu\n\n";

    system("PAUSE");

}

void COKAccountHolders::deposit()

{

    system("cls");

    cout<<"\n===========================COK ACCOUNT DEPOSIT SYSTEM==========================\n\n";



    cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";

    cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";

    cout<<"\tThe Branch location is :"<<branch<<"\n\n";


    cout<<"\tAccount number :"<<accountNumber<<"\n\n";

    cout<<"============================+++++++++++++++++++++++============================\n\n";

    cout<<"\tStarting account balance :$"<<startBalance<<"\n\n";

    cout<<"\tPresent available balance :$"<<accountBalance<<"\n\n";

    cout<<"\tEnter the Amount to be Deposited $";



    double amount;

    cin>>amount;

    accountBalance=startBalance+amount ;

    cout<<"\n\tYour new available Balanced Amount is $"<<accountBalance<<endl ;

    cout<<"\n\t\t\tThank You!\n\n"<<endl;

    cout<<"Press any key to Return to the Main Menu\n\n";

    system("PAUSE");

}

void COKAccountHolders::withdraw()//Withdrawal Transactions

{

    system("cls");

    cout<<"\n============================COK ACCOUNT WITHDRAWAL=============================\n\n";



    cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";

    cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";

    cout<<"\tThe Branch location is :"<<branch<<"\n\n";

    cout<<"\tAccount number :"<<accountNumber<<"\n\n";
    cout<<"============================+++++++++++++++++++++++============================\n\n";

    cout<<"\tStarting account balance :$"<<startBalance<<"\n\n";

    cout<<"\tPresent available balance :$"<<accountBalance<<"\n\n";

    cout<<"\tEnter the Amount to be Withdrawn $";



    double amount;
    cin>>amount;



    if(amount>accountBalance||amount>9000)//Limit set at $9000 maximum after paying bills

    {

        system("cls");

        cout<<"\n============================COK ACCOUNT WITHDRAWAL=============================\n\n";

        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";

        cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";

        cout<<"\tThe Branch location is :"<<branch<<"\n\n";

        cout<<"\tAccount number :"<<accountNumber<<"\n\n";

        cout<<"============================+++++++++++++++++++++++============================\n\n";

        cout<<"\n\tInsufficient Available Balance in your account.\n\n"<<endl;

        cout<<"\t\t\tSorry !!\n"<<endl;

        system("PAUSE");

    }

    else

    {

        double b;

        accountBalance = startBalance-amount ;

        system("cls");

        cout<<"\n============================COK ACCOUNT WITHDRAWAL=============================\n\n";

        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";

        cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";

        cout<<"\tThe Branch location is :"<<branch<<"\n\n";

        cout<<"\tAccount number :"<<accountNumber<<"\n\n";

        cout<<"============================+++++++++++++++++++++++============================\n\n";

        cout<<"Your new available Balanced Amount is $"<<startBalance<<endl ;

        cout<<"Press any key to Return to the Main Menu\n\n";

        system("PAUSE");

    }



}
void COKAccountHolders::payBills()

{

    int choice_t;


    do
    {
        system("cls");

        cout<<"\n===========================COK BILLS PAYMENT SYSTEM MENU========================\n";

        cout << "\t\tEnter (1) for JPS Electricity Bill Payment" << endl;

        cout << "\t\tEnter (2) for NWC Water Supplier Bill Payment" << endl;

        cout << "\t\tEnter (3) for FLOW Broadcasting Service Bill Payment" << endl;

        cout << "\t\tEnter (4) for residentail RENT Payment" << endl;

        cout << "\t\tEnter (0) to Exit Bill Payment System" << endl << endl;

        cout << "\t\tPLEASE ENTER A SELECTION AND PRESS RETURN KEY: \n\n";

        cout<<"================================COK MAIN MENU==================================\n\n";



        cin>>choice_t;



        switch (choice_t)

        {

        case 1:

            system("cls");

            cout<<"\n===========================COK BILLS PAYMENT SYSTEM==========================\n";

            cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";

            cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";

            cout<<"\tThe Branch location is :"<<branch<<"\n\n";

            cout<<"\tAccount number :"<<accountNumber<<"\n\n";

            cout<<"====================++THANK YOU FOR MAKING IT COK++============================\n\n";

            cout<<"Pay this month's JPS Electric Company electricity bill of $2000.00 now?\n\n";

            cout<<"\t\t\tPress 1 for Yes OR Press 0 for No\n\n";

            int r;



            cin>>r;

            if(r==1)

            {
                //accountBalance = startBalance-accountBalance;

                accountBalance = startBalance-2000;

                system("cls");

                cout<<"\n===========================COK BILLS PAYMENT SYSTEM==========================\n";

                cout<<"\n\tYour JPS electricity bill of $2000.00 has been paid.\n\n";

                cout<<"\tYour account new Available Balanced Amount is $"<<accountBalance<<endl ;

                cout<<"\n============================+++++++++++++++++++++++===========================\n\n";

                cout<<"Press any key to Return to the Main Menu\n\n";

            }

            else

            {

                system("cls");

                cout<<"\n==========================COK BILLS PAYMENT SYSTEM============================\n\n";

                cout<<"\tYour account Available Balanced Amount is $"<<startBalance<<endl ;

                cout<<"\n\n\tExiting Bill Payment System. Thank you!.\n\n";

                cout<<"====================++THANK YOU FOR MAKING IT COK++============================\n\n";

                cout<<"Press any key to Return to the Main Menu\n\n";

            }

            system("PAUSE");

            break;

        case 2:

            system("cls");
            cout<<"\n===========================COK BILLS PAYMENT SYSTEM==========================\n";

            cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";

            cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";

            cout<<"\tThe Branch location is :"<<branch<<"\n\n";

            cout<<"\tAccount number :"<<accountNumber<<"\n\n";

            cout<<"====================++THANK YOU FOR MAKING IT COK++============================\n\n";

            cout<<"Pay this month's NWC Water Company water supply bill of $1500.00 now?\n\n";

            cout<<"\t\t\tPress 1 for Yes OR Press 0 for No\n\n";

            int d;



            cin>>d;

            if(d==1)

            {
                accountBalance = startBalance-1500;

                system("cls");

                cout<<"\n===========================COK BILLS PAYMENT SYSTEM==========================\n";

                cout<<"\n\tYour NWC Water Supply bill of $1500.00 has been paid.\n\n";

                cout<<"\tYour account new Available Balanced Amount is $"<<accountBalance<<endl ;

                cout<<"\n============================+++++++++++++++++++++++===========================\n\n";

                cout<<"Press any key to Return to the Main Menu\n\n";

            }

            else

            {

                system("cls");

                cout<<"\n==========================COK BILLS PAYMENT SYSTEM============================\n\n";

                cout<<"\tYour account Available Balanced Amount is $"<<startBalance<<endl ;

                cout<<"\n\n\tExiting Bill Payment System. Thank you!.\n\n";

                cout<<"====================++THANK YOU FOR MAKING IT COK++============================\n\n";

                cout<<"Press any key to Return to the Main Menu\n\n";

            }

            system("PAUSE");

            break;

        case 3:

            system("cls");

            cout<<"\n===========================COK BILLS PAYMENT SYSTEM==========================\n";

            cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";

            cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";

            cout<<"\tThe Branch location is :"<<branch<<"\n\n";

            cout<<"\tAccount number :"<<accountNumber<<"\n\n";

            cout<<"====================++THANK YOU FOR MAKING IT COK++============================\n\n";

            cout<<"Pay this month's FLOW Braodcasting Company service bill of $3500.00 now?\n\n";

            cout<<"\t\t\tPress 1 for Yes OR Press 0 for No\n\n";

            int f;



            cin>>f;

            if(f==1)

            {
                accountBalance = startBalance-1500;

                system("cls");

                cout<<"\n===========================COK BILLS PAYMENT SYSTEM==========================\n";

                cout<<"\n============================+++++++++++++++++++++++===========================\n\n";

                cout<<"Press any key to Return to the Main Menu\n\n";

            }

            else

            {

                system("cls");

                cout<<"\n==========================COK BILLS PAYMENT SYSTEM============================\n\n";

                cout<<"\tYour account Available Balanced Amount is $"<<startBalance<<endl ;

                cout<<"\n\n\tExiting Bill Payment System. Thank you!.\n\n";

                cout<<"====================++THANK YOU FOR MAKING IT COK++============================\n\n";

                cout<<"Press any key to Return to the Main Menu\n\n";

            }

            system("PAUSE");

            break;

        case 4:

            system("cls");

            cout<<"\n===========================COK BILLS PAYMENT SYSTEM==========================\n";
            cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";

            cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";

            cout<<"\tThe Branch location is :"<<branch<<"\n\n";

            cout<<"\tAccount number :"<<accountNumber<<"\n\n";
            cout<<"====================++THANK YOU FOR MAKING IT COK++============================\n\n";

            cout<<"Pay this month's Residential RENT service bill of $14000.00 now?\n\n";

            cout<<"\t\t\tPress 1 for Yes OR Press 0 for No\n\n";

            int g;



            cin>>g;

            if(g==1)

            {
                accountBalance = startBalance-14000;

                system("cls");

                cout<<"\n===========================COK BILLS PAYMENT SYSTEM==========================\n";

                cout<<"\n\tYour FLOW Broadcasting Service bill of $3500.00 has been paid.\n\n";

                cout<<"\tYour account new Available Balanced Amount is $"<<accountBalance<<endl ;

                cout<<"\n============================+++++++++++++++++++++++===========================\n\n";

                cout<<"Press any key to Return to the Main Menu\n\n";

            }

            else

            {

                system("cls");

                cout<<"\n==========================COK BILLS PAYMENT SYSTEM============================\n\n";

                cout<<"\tYour account Available Balanced Amount is $"<<startBalance<<endl ;

                cout<<"\n\n\tExiting Bill Payment System. Thank you!.\n\n";

                cout<<"====================++THANK YOU FOR MAKING IT COK++============================\n\n";

                cout<<"Press any key to Return to the Main Menu\n\n";

            }

            system("PAUSE");

        case 0:

            int main();

            break;

        default:
            cout<<"Please Enter the Correct Number Choice"<<endl;

        }

    }
    while(choice_t!=0);





};


void COKAccountHolders::details()

{

    system("cls");



    cout<<"\n============================COK ACCOUNT DETAILS=============================\n\n";

    cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";

    cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";

    cout<<"\tThe Branch location is :"<<branch<<"\n\n";

    cout<<"\tAccount number :"<<accountNumber<<"\n\n";

    cout<<"====================++THANK YOU FOR MAKING IT COK++============================\n\n";

    cout<<"\tYour account Available Balanced Amount is $"<<startBalance<<endl ;

    cout<<"============================+++++++++++++++++++++++============================\n\n";

    cout<<"Press any key to Return to the Main Menu\n\n";

    system("PAUSE");

}

void COKAccountHolders::accountExit()

{

    system("cls");





    cout<<"\n============================COK ACCOUNT EXIT=============================\n\n";

    cout<<"\n\n\t\tEXITING...........EXITING...............EXITING\n\n";

    cout<<"====================++THANK YOU FOR MAKING IT COK++============================\n\n";

    cout<<"============================+++++++++++++++++++++++============================\n\n";

    system("PAUSE");

    exit(1);

}

 /* Bills()
372
      {
373
      double JPS = 2000;
374
      double NWC = 1500;
375
      double FLOW = 3500;
376
      double RENT = 14000;
377

378
        }
379
      void Bills::jps()
380

381
        system("cls");
382

383

384
        cout<<"\n============================COK BILL PAYMENT SYSTEM=============================\n\n";
385
        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";
386
        cout<<"\tThe Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
387
        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
388
        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
389
        cout<<"====================++THANK YOU FOR MAKING IT COK++============================\n\n";
390
        cout<<"============================+++++++++++++++++++++++============================\n\n";
391
        system("PAUSE");
392
      }
393

394
      };*/
