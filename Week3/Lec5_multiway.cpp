#include <iostream>
using namespace std;

int main () {

    double income, incTaxed, tax;
    
    cout << "income: ";
    cin >> income;

    if (income > 15000)
    {
        if (income <= 25000) {
            tax = 0.05 * (income - 15000);
        }

        else {
            tax = 0.1 * (income - 15000);
        }

        cout << "tax: " << tax;
    }

    else {
        cout << "congratulations! you are not being taxed.";
    }

    return 0;
}