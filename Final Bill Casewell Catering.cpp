#include <iostream>

using namespace std;

int main ()

{
    int NumAdults, NumChild;

    cout<<"How many Adults?\n";
    cin>>NumAdults;

    cout<<"How many Children?\n";
    cin>>NumChild;

    double CostAdultMeal = NumAdults * 12.75;
    double CostChildMeal = NumChild * 7.65;

    cout<<"Total cost of Adult meals is $"<<CostAdultMeal<<endl;
    cout<<"Total cost of Children meals is $"<<CostChildMeal<<endl;

    int CostDessert = 1;
    int TotalDessert = 1 * 30;

    cout<<"Total cost of dessert is $"<<TotalDessert<<endl;

    double TotalCostFood = CostChildMeal + CostAdultMeal;

    cout<<"Total cost of food is $"<<TotalCostFood<<endl;

    double TipandTax = .18;
    double TotalGuest = NumAdults + NumChild;
    double TotalTipandTax = .18 * TotalCostFood;

    cout<<"Total cost of tip and tax is $"<<TotalTipandTax<<endl;

    int RoomFee = 45;
    cout<<"Total cost of room fee is $"<<RoomFee<<endl;

    int Deposit = 50;
    cout<<"Total cost of deposit is $"<<Deposit<<endl;

    double Balance = TotalCostFood + RoomFee + TotalTipandTax - Deposit;

    cout<<"Total balance due is $"<<Balance<<endl;

    return 0;
}
