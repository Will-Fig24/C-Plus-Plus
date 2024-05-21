#include <iostream>
using namespace std;

void inpatient(); // prototype
void outpatient(); // prototype

int main()
{
    int choice;
    double total;

    cout<<"Were you admitted as an inpatient or an outpatient? \n 1 for inpatient and 2 for outpatient \n";
    cin>> choice;
    if (choice == 1)
    {
        cout<<"You have chosen inpatient \n";
        inpatient();
    }

    else if(choice == 2)
    {
        cout<<"You have chosen outpatient \n";
        outpatient();
    }

    else if(choice != 1 || choice != 2)
        {
        cout<<"Please choose again \n";
        cin>> choice;

         if (choice == 1)
        {
        cout<<"You have chosen inpatient \n";
        inpatient();
        }

        else if(choice == 2)
        {
        cout<<"You have chosen outpatient \n";
        outpatient();
        }
        }

    return 0;
}

void inpatient()
{
    int days;
    double rate, medCost, serviceFee, total;

    cout<<"How many days did you spend in the Hospital? \n";
    cin>> days;
    while (days < 0)
        {
        cout<<"Please re-enter days";
        cin>> days;
        }

    cout<<"What is the Hospital's daily rate? \n";
    cin>> rate;
    while (rate < 0)
        {
        cout<<"Please re-enter rate";
        cin>> rate;
        }

    cout<<"How much was the medication? \n";
    cin>> medCost;
    while (medCost < 0)
        {
        cout<<"Please re-enter Medical cost";
        cin>> medCost;
        }

    cout<<"How much was the Hospital services? \n";
    cin>> serviceFee;

    while(serviceFee < 0)
        {
        cout<<"Please re-enter service fee";
        cin>> serviceFee;
        }

    total = (days * rate) + medCost + serviceFee;

    cout<<"Your total is $ "<<total;
}

void outpatient()
{
    double serviceFee, medCost, total;

    cout<<"How much was the Hospital services? \n";
    cin>> serviceFee;
    while(serviceFee < 0)
        {
        cout<<"Please re-enter service fee";
        cin>> serviceFee;
        }

    cout<<"How much was the medication? \n";
    cin>> medCost;
    while(medCost < 0)
        {
        cout<<"Please re-enter Medical cost";
        cin>> medCost;
        }

    total = serviceFee + medCost;
    cout<<"Your total is $ "<<total;
}
