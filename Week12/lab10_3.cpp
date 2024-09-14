//NOTE TO SELF: REDO THIS, user inputs a string

/*
Write a C++ program to swap the value of two objects using pointers. 
To test it, use a class that has two variable members: 
    1) the dynamic length of a string, int length, and
    2) a pointer to the characters of a string object, char *Chars;
*/

#include <iostream>
using namespace std;

class Swap
{
    public:
    int length;
    char *Chars;
};

int main()
{
    Swap *p1, *p2, *temporary;
    p1 = new Swap;
    p2 = new Swap;

    cout << "String length: ";
    cin >> p1->length;
    cout << endl << "Select character: ";
    cin >> p1->Chars;

    cout << endl << "String length: ";
    cin >> p2->length;
    cout << endl << "Select character: ";
    cin >> p2->Chars;

}

/*
int length
cin >> length;
string object[length]
for i....
char = string[i]
*/