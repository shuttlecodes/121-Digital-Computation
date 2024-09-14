//SYDE 121 Assignment 2 Part 2

#include <iostream> //sum of odd integers from 1 to 100
#include <cmath>
using namespace std;

int main ()
{
    int type, number, sum = 0, n = 50, a = 1, d = 2;

    cout << "This program calculates the sum of odd integers from 1 to 100. Would you like to use method 1 or 2?\n";
    cin >> type;

    if (type == 1){         //part a: using loop
        
        for (number = 1; number <= 100; number = number + 2) {
            sum = sum + number;
        }
    }

    else {                  //part b: using formula
        sum = (n/2)*(2*a + (n - 1)*d);       
    }

    cout << "the sum of odd integers from 1 to 100 is " << sum;

    return 0;
}