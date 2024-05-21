#include <iostream>
using namespace std;
int main ()
{
int years, month;
double avg, inches, finalInches;

cout<<"How many years of rain? \n";
cin>>years;

while(years < 1)
   {
        cout<<"Please re-enter years. Can't be less than a year.\n";
        cin>>years;
   }

for(int r = 0; r < years; r++)
    {
        for(month = 0; month < 12; month++)
        {
            cout<<"How many inches of rainfall this month? \n";
            cin>>inches;

            finalInches += inches;
        }
    }

    avg = finalInches/month;
    cout<<"Total amount of months is "<<month<<endl;
    cout<<"Total amount of rainfall is "<<finalInches<<endl;
    cout<<"The average amount of rainfall is "<<avg<<endl;

    return 0;
}