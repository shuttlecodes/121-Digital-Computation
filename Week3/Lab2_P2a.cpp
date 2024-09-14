#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int counter = 0;
    double guess, r, n;
    
    cout << "We will be finding the square root of a number, n. Please pick one non zero positive integer. \n";
    cin >> n;
    guess = n/2;

    while (counter < 100) {
        counter ++;
        r = n/guess;
        guess = (guess + r)/2;
    }

    cout << "The squareroot of n is approximately " << guess;

    return 0;

}