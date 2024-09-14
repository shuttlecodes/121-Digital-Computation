#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int type, a, b, correct = 1, counter = 0;
    double x, y, answer;

    cout << "Which method would you like to compute exponents? 1 or 2?\n";
    cin >> type;

    if (type == 1) //method of finding a^b using a while loop
    {
        cout << "What is the value for an integer a?\n";
        cin >> a;
        cout << "What is the value for an intger b?\n";
        cin >> b;

        if (b == 0) {
            cout << "a to the power of b is 1";
        }

        else if (b == 1) {
            cout << "a to the power of b is " << a;
        }

        else {

        while (counter < b) {
            correct = correct*a;
            counter ++;
                        
        }

        cout << "a to the power of b is " << correct;

        }

    }

    else { //method of finding x^y using the power function

    cout << "What is the value for x?\n";
    cin >> x;
    cout << "What is the value for y?\n";
    cin >> y;

    answer = pow(x,y);
    cout << "x to the power of y is " << answer;
    
    }

    return 0;
}