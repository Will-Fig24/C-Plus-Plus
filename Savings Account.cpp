#include <iostream>

using namespace std;

int main ()
{
int month;
double deposit, withdrawl, interestRate, annualInterestRate, startBalance,finalBalance, monthBalance;



cout<<"How much is in your account? \n";
cin>>startBalance;

cout<<"How much is the annual interest rate? \n";
cin>>annualInterestRate;

 for (month = 1; month <= 3; month++)
    {
cout<<"How many months since the account was established? \n";
cin>>month;

cout<<"How much are you depositing this month? \n";
cin>>deposit;
    while (deposit < 0)
       {
        cout<<"Please enter amount again";
        cin>>deposit;
       }

cout<<"How much are you withdrawing? \n";
cin>>withdrawl;
    while (withdrawl < 0)
        {
        cout<<"Please enter amount again";
        cin>>withdrawl;
        }
    }

interestRate = annualInterestRate/12;
monthBalance = (interestRate * startBalance);
finalBalance = ((monthBalance + startBalance) + deposit) - withdrawl;

cout<<"Your deposit total is $ "<<deposit<<endl;
cout<<"Your total withdrawn is $ "<<withdrawl<<endl;
cout<<"Your final balance is $"<<finalBalance<<endl;

return 0;
}
