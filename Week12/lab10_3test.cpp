#include <iostream>
using namespace std;

int main()
{
    int *p1, *p2, *temporary;
    p1 = new int;
    p2 = new int; //creates the space

    *p1 = 1; //initialize values
    *p2 = 2;

    cout << "p1 = " << *p1 << endl;
    cout << "p2 = " << *p2 << endl << endl;

    temporary = p1;
    p1 = p2; //swap addresses
    p2 = temporary;

    cout << "After swap:\n";
    cout << "p1 = " << *p1 << endl;
    cout << "p2 = " << *p2 << endl;

    return 0;

}