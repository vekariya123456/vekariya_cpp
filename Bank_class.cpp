#include<iostream>
using namespace std;

class Bank
{
    string holdername;
    double balance;

    public:
    
    Bank(string name, double bal)
    {
        holdername= name;

        balance= bal;
    }

    void Deposite(double amount)
    {
        if(amount>0)
        {
           balance +=  amount;
           cout<<"Deposite Amount:" << amount << endl;
           
        }
        else
        {
            cout<<"Invalid Deposite Entry";
        }
    }

    void Withdraw(double amount)
    {
        if(amount > 0 && amount<= balance)
        {
          
          balance -= amount;
          cout<<"Withdraw Amount: "<< amount << endl;
        }
        else
        {
            cout<<" Insufficient Balance";
        }
    
    }

    void show()
    {
        cout <<"Account Holder Namr:" << holdername << endl;
        cout<<"Balance is:"<< balance << endl;
    }

};


int main()
{
   string name;
   double acc;


}