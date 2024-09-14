//Assignment 1 part 2

#include <iostream>
#include <string>
using namespace std;

int main()
{
    double fahrenheit, celsius;
    cout << "what's the temperature in fahrenheit?\n";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32.0) * (5.0/9.0); //Used decimals .0 so that it would return a double
    cout << "the temperature in celsius is ";
    cout << celsius;

    return 0;
}