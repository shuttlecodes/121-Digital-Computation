//$50 in account
//account closed if < $4 in account
//20% balance charged per month
//how many months until closed?

#include <iostream>
using namespace std;

int main()
{
    double balance = 50;
    int num_months = 1;

    while (balance >= 4)
    {
        balance *= 0.8;
        num_months++;
    }

    cout << "Months: " << num_months << endl;

    return 0;
}