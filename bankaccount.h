#include<iostream>
using namespace std;
class bankaccount
{
public:
    void Display()
    {

        cout << " Hi! I am a Bank Account " <<endl;
        cout << "AccountNumber=";
        cout << this->AccountNumber << endl;
        cout << "AccountHolder=";
        cout << this->AccountHolder << endl;
        cout << "CurrentBalance=";
        cout << this->CurrentBalance << endl;
        cout << "amount=1000"<<endl;
        cout << "Amount After Withdraw=";
        cout << this->Withdraw << endl;
        cout << "Amount After Deposit=";
        cout << this->Deposit << endl;
    }

    int getAccountNumber()
    {
        return this->AccountNumber;
    }
    string getAccountHolder()
    {

        return this->AccountHolder;
    }
    float getCurrentBalance()
    {
        return this->CurrentBalance;
    }
    float getDeposit()
    {
        return this->Deposit;
    }
     float getWithdraw()
    {
        return this->Withdraw;
    }
    void setAccountNumber()
    {
        this->AccountNumber=12345;
    }
   void setAccountHolder()
    {
        this->AccountHolder="mahnoor";
    }
    void setCurrentBalance()
    {
        this->CurrentBalance=5000;
    }
    void setDeposit()
    {
        CurrentBalance=CurrentBalance+amount;
    }
     void setWithdraw()
    {
        CurrentBalance=CurrentBalance-amount;
    }
    bankaccount myaccount()
    {
        this->AccountNumber=12345;
        this->AccountHolder="mahnoor";
        this->CurrentBalance=5000;
        this->amount=1000;
        this->Deposit=CurrentBalance+amount;
        this->Withdraw=CurrentBalance-amount;
    }
    bankaccount myaccount(int accountnumber ,string accountholder , float currentbalance ,float amount, float deposit ,float withdraw )
    {
        this->AccountNumber=accountnumber;
        this->AccountHolder=accountholder;
        this->CurrentBalance=currentbalance;
        this->amount=amount;
        this->Deposit=CurrentBalance+amount;
        this->Withdraw=CurrentBalance-amount;
    }

private:
    int AccountNumber;
    string AccountHolder;
    float CurrentBalance;
    float amount;
    float Deposit;
    float Withdraw;
};