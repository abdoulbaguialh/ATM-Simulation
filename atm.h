#ifndef ATM_H_INCLUDED
#define ATM_H_INCLUDED

class Bank //abstract base class

{

public:

    double startBalance;

    std::string COKAccountHolders;

    double limit;
//virtual bool Deposit(double Dvalue)=0; // manage deposit

//virtual bool Transaction(double Dvalue)=0;// use as necessary

//virtual void Display_accountBalance()=0;// Show the balance in a nice way

//virtual void SetLimit(double NewLimit)=0;

//virtual double GetLimit()=0;



};

class COKAccountHolders:public Bank

{

    std::string accountHolders;

    std::string accountHoldersAddress, branch;

    int accountNumber;

    double startBalance;

    double accountBalance;

    double accountInterest;

    double amount;

    int count;



public:

    //void Display_accountBalance();

    void deposit();

    void interest();

    void withdraw();

    void details();


    void accountExit();

     void payBills();





    COKAccountHolders();



};
/*class Limits:public Bank

{

public:

    void SetLimit(double NewLimit)

    {}



    double Getlimit()

    {}



};
*/

/*class Bills:public Bank
357
     {
358

359
      double JPS;
360
      double NWC;
361
      double FLOW;
362
      double RENT;
363
      double bills;
364
      void Display_accountBalance();
365
      public:
366
      void jps();
367
      void nwc();
368
      void flow();
369
      void rent();
370

371
      Bills()};
*/

/*class Limits:public Bank

{

public:

    void SetLimit(double NewLimit)

    {}

}

    double Getlimit()

    {}



};
*/
#endif // ATM_H_INCLUDED
