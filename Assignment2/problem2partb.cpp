//Problem 2 part 2

#include <iostream> //sum of odd integers from 1 to 100 using given formula
#include <cmath>
using namespace std;

int main ()
{
    int sum, n = 50, a = 1, d = 2;

    sum = (n/2)*(2*a + (n - 1)*d);
    
    cout << "the sum of odd integers from 1 to 100 is " << sum;
}