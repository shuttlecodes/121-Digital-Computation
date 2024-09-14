#include <iostream> //finding squareroot
#include <cmath>
using namespace std;

int main ()
{
    double guess, r, n, previous, guessDiff = 1;
    
    cout << "Please pick one non zero positive integer. \n";
    cin >> n;
    guess = n/2;

    while (guessDiff >= 0.01) { //test percent diff, stop when its less than 1%
        
        r = n/guess; //computation for sqrt
        guess = (guess + r)/2; 
        
        guessDiff = (guess - previous)/previous;       //find percent diff
        
        previous = guess; //update previous

    }

    cout << "The squareroot is approximately " << guess;

    return 0;

}