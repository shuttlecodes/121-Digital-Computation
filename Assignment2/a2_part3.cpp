//SYDE 121 Assignment 2 Part 3

#include <iostream> //looking at even of odd integers
#include <cmath>
using namespace std;

int main ()
{
    int a, b, output;

    cout << "Please select two positive, non-zero integers. \n" << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    if ((a%2 == 0) && (b%2 ==0)){
        output = a+b;
    }

    else if ((a%2 == 1) && (b%2 ==1)){
        output = b;
    }

    else {
        output = a;
    }

    cout << output;
    
}