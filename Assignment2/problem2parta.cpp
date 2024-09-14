//Problem 2 part 1

#include <iostream> //sum of odd integers from 1 to 100 using loop
#include <cmath>
using namespace std;

int main ()
{
    int min, max, number, sum = 0;      

    cout << "this program calculates the sum of odd integers from x to y. Please enter in values for\nx: ";
    cin >> min;             
    cout << "y: ";
    cin >> max;             //assignment sets min = 1, max = 100, but with variables the user can select the range

    for (number = min; number <= max; number = number + 2) {
        sum = sum + number;
        }
    
    cout << "the sum of odd integers from " << min << " to " << max << " is " << sum;

    return 0;
}