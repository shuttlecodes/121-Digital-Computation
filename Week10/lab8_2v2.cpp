// Lab8_2.cpp - This program uses a class for a loan, initializes it from the keyboard, then
// displays the class

/*
Modify the class loan and include 
    1. the monthly_payment as a data member in that class. 
    2. add a new function called add_loans, defined as:
            float add_loans(Loan loan1, Loan loan2); 

Note that you still have the payment function that computes the payment. Since you include
the monthly_payment as a member, instead of returning a value from the function, you
directly set the value for monthly_payment in that function. 

The new function, add_loans, takes two loan objects and computes the total monthly payment,
i.e., the sum of monthly payments of the two loans. 
*/

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

    float monthly_payment;

};

void initialize_loan(Loan x);
float payment(Loan l);
void display(Loan x);
float add_loans(Loan x, Loan y); 

int main( )
{
    Loan loan1, loan2;
    float total_payment;

    cout << "Enter the following information about the first loan.\n";
    initialize_loan(loan1);

    cout << "Enter the following information about the second loan.\n";
    initialize_loan(loan2);

    display(loan1);
    loan1.monthly_payment = payment(loan1);
    cout << "The monthly payment for loan " << loan1.ID << " is: " << loan1.monthly_payment << endl;

    display(loan2);
    loan2.monthly_payment = payment(loan2);
    cout << "The monthly payment for loan " << loan2.ID << " is: " << loan2.monthly_payment << endl;

    total_payment = add_loans(loan1, loan2);
    cout << "The total monthly payment: " << total_payment;

    return 0;
}

void initialize_loan(Loan x)
{
    cout << "ID: ";
    cin >> x.ID; 
    cout << "Amount: ";
    cin >> x.amount;
    cout << "Annual interest rate (in %): ";
    cin >> x.rate;
    cout << "Enter the term (months): ";
    cin >> x.term;
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

float add_loans(Loan x, Loan y)
{
    return payment(x) + payment(y);
}