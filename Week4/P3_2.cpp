// P3_1.cpp This program computes the total cost of purchases made,
//including 5% sales tax, on number_par items at a cost of price_par each.
#include <iostream>
using namespace std;
double total_cost(int number_par, double price_par); // (1) Function declaration
bool wallet_alarm(double expense);

int main( )
{
    double price, bill;
    int number;
    bool beep;
    cout << "Enter the number of items purchased: ";
    cin >> number;
    cout << "Enter the price per item $";
    cin >> price;
    bill = total_cost(number, price); // (2) Function call
    // The following three lines are used for formatting purposes.  Since a precision of 2
    //  is set, then all numbers will be displayed with two decimal points.  We work with $
    //  this seems to be the most appropriate way to display the numbers..
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << number << " items at "
         << "$" << price << " each.\n"
         << "Final bill, including tax, is $" << bill
         << endl;
    
    beep = wallet_alarm(bill); //Function call
    if (beep == true)
    {
        cout << "TIME TO SAVE MONEY AND LIVE BETTER";
    }
    
    return 0;
}
// (3) Function definition
double total_cost(int number_par, double price_par) // Function heading
{// Function body begins here
    const double TAX_RATE = 0.044; //5% sales tax, const is to make sure this value stays unchanged
    double subtotal;
    subtotal = price_par * number_par;
    return (subtotal + subtotal*TAX_RATE);
}// Function body ends here

bool wallet_alarm(double expense) // Function heading
{
    double remaining = 1000 - expense;  //function definition
    if (remaining > 10) {return 0;}
    else {return 1;}
}