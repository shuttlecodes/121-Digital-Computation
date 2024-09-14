#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{

    int a, b, diff, random;
    srand(time(0));

    cout << "select two integers greater than 10. select b greater than a.\na: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    diff = b - a;

    random = (rand() % diff - 1) + a + 1; //diff-1 many possible random numbers, starting at a+1

    cout << random;

    return 0;
}