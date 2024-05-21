#include <iostream> // header file
#include <cmath> // math library in order to use the power function
#include <iomanip> // a library used to manage input and output formatting

using namespace std;

int main ()
{
    double interest, startBalance, interestRate = 5.99, months = 60; // establishing the data type for variables
    double monthlyPayment, monthlyInterestRate, monthlyInterestRateDecimal;

    cout << "What is your total principal payment? \n";
    cin >> startBalance; // asking the user how much is the loan for

    monthlyInterestRate = interestRate/12; // rate divided by 12 months gives you the interest rate per year as a percent
    monthlyInterestRateDecimal = monthlyInterestRate/100; // gives interest rate as a decimal
    
    monthlyPayment = startBalance * (monthlyInterestRateDecimal * pow(1 + monthlyInterestRateDecimal,months))/ (pow(1 + monthlyInterestRateDecimal,months) - 1);

    cout << "What is your total principal payment $" << startBalance << endl; // displays the loan based off the startbalance
    
    cout << "MONTHLY PAYMENT: $" << setprecision(5) << monthlyPayment; // displays the monthly payment

    return 0;
}