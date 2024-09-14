//SYDE 121 Assignment 2 Part 1

#include <iostream> //Babylonian algorithm to find squareroot
#include <cmath>
using namespace std;

int main ()
{
    double guess, r, n, previous, guessDiff = 1;
    
    cout << "Please pick one non zero positive integer. \n";
    cin >> n;
    guess = n/2;

    while (guessDiff >= 0.005) {                       //test percent diff, stop when less than 0.5%
        
        previous = guess;                               //initialize and update during loop

        r = n/guess;                                    //computation for sqrt
        guess = (guess + r)/2; 
        
        guessDiff = (abs(guess - previous))/previous;        //find percent diff 

    }

    cout << "The squareroot is approximately " << guess;

    return 0;

}