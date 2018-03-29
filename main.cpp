#include <iostream>
#include <string>
#include "bankaccount.h"
using namespace std;


int main()
{
    bankaccount myaccount;
    bankaccount myaccount(int accountnumber , string accountholder ,float currentbalance , float amount,float deposit , float withdraw );
    myaccount.Display();
    int a=myaccount.getAccountNumber();
    string b=myaccount.getAccountHolder();
    float c=myaccount.getCurrentBalance();
    float d=myaccount.getDeposit();
    float e=myaccount.getWithdraw();


}