#include <iostream>
using namespace std;

int main()
{
    int first = 0, second = 1, counter = 1, n, sum;

    cout << "To find the nth fibonacci sequence term, \n";
    cout << "enter a non-zero, non-negative integer n: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "You did not enter a valid n value.";
    }

    else if (n == 1)
    {
        cout << first;
    }

    else
    {
        while (counter < n - 1)
        {
            sum = first + second;
            first = second;
            second = sum;
            counter++;
        }

        cout << sum;
    }

    return 0;
}