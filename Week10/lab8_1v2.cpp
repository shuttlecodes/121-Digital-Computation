// Lab8_1.cpp - This program creates uses a structure for loan, initialize it from the keyboard, then
// displays the struct

/*Modify the Lab8_1cpp program such that 
    1. it asks users to enter 2 different loans this time and 
    2. uses a function called initialize_loan to initialize each loan struct. 
    3. compute and display the payment for each individual loan and the total monthly payment. 
Note that you have to use a separate struct for each loan. */

#include<iostream>
#include<cmath>
using namespace std;

struct Loan  // Loan is called structure tag
{
    int ID;  // assume an unique integer between 1111-9999
    float amount; // $ amount of the loan
    float rate; // annual interest rate
    int term;  // number of months, length of the loan
};

float payment(Loan x);
void initialize_loan(Loan x);

int main( )
{
    Loan loan1, loan2;
    float payment1, payment2, monthly_payment;
    
    cout << "Enter the following information about the first loan.\n";
    initialize_loan(loan1);

    cout << "Enter the following information about the second loan.\n";
    initialize_loan(loan2);
    
    payment1  = payment(loan1);
    payment2 = payment(loan2);
    monthly_payment = payment1 + payment2;

    cout << "Monthly payment for first loan: " << payment1 << endl;
    cout << "Monthly payment for second loan: " << payment1 << endl;
    cout << "Total monthly placement: " << monthly_payment << endl;

    return 0;
}

float payment(Loan x)
{
      x.rate = x.rate/1200;  // To convert % yearly rate to monthly fraction
      return x.amount*x.rate*(  pow( (x.rate+1), x.term)/ (pow( (x.rate+1), x.term) - 1) );
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