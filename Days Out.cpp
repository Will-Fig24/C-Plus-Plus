#include <iostream>
using namespace std;

int absent ();
void people ();

int company_people;
int missed;
double avgAbsent;

int main()
  {
        cout << "How many people are in the company? ";
        people ();

        cout << "How many days did each number of employees miss this past year? ";
        absent ();

        avgAbsent = company_people/missed;

        cout << "Average days absent per employee is: " << avgAbsent << endl;
  }

void people ()
  {
        cin >> company_people;
               if(company_people < 1)
                   {
                          cout << "Error! The company can't have less than 1 employee:\n How many people are in the company? ";
                          cin >> company_people;
                   }
    }

int absent ()
    {
          cin >> missed;

          return 0;
     }
