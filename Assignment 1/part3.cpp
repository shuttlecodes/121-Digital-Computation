//Assignment 1 part 3

#include <iostream>
using namespace std;

int main()
{
    int input;
    int reset = 0;

    while (reset == 0)
    {
        cout << "Please enter a positive number less than 10.\n";
        cin >> input;

        if (input >= 5)
        {
            reset = 1;
            cout << "The number you entered is in the range.\n";
        }
    
        else
        {
            cout << "The number you entered is not in the range." << endl;
            reset = 0;
        }
    }

}