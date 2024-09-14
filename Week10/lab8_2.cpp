// Lab8_2.cpp - This program uses a class for a loan, initializes it from the keyboard, then
// displays the class

#include<iostream>
#include<cmath>
using namespace std;

class Loan  // loan class definition
{
    public:
    int ID;  // assume an unique integer between 1111-9999
    float amount; // $ amount of the loan
    float rate; // annual interest rate
    int term;  // number of months, length of the loan
};

float payment(Loan l);
void display(Loan x);

int main( )
{
      Loan loan1;
      float monthly_payment;

      // Initialize the loan1 object
      cout << "Enter the ID of this loan \n";
      cin >> loan1.ID;

      cout << "Enter the amount of this loan \n";
      cin >> loan1.amount;

      cout << "Enter the annual interest rate of this loan (in %) \n";
      cin >> loan1.rate;

      cout << "Enter the term (number of months, length of the loan) \n";
      cin >> loan1.term;

      monthly_payment  = payment(loan1);
      display(loan1);

      cout << "The monthly payment for loan " << loan1.ID << " is: " << monthly_payment << endl;

      return 0;
}

float payment(Loan l)
{
      l.rate = l.rate/1200;  // To convert % yearly rate to monthly fraction
      return l.amount*l.rate*(  pow( (l.rate+1), l.term)/ (pow( (l.rate+1), l.term) - 1) );
}

void display(Loan x)
{
    cout << "ID: " << x.ID << endl;
    cout << "Amount: " << x.amount << endl;
    cout << "Rate: " << x.rate << endl;
    cout << "Term: " << x.term << endl;
}