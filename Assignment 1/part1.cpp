//Assignment 1 part 1

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstname, lastname, id;

    cout << "what is your name? (first and last name)\n"; //specified that it's two names (first and last)
    cin >> firstname >> lastname;
    cout << "what is your student id?\n"; //id is a string type, in case the student id has letters
    cin >> id;
    cout << "Hello World from ";
    cout << firstname << " " << lastname;
    cout << " with student id ";
    cout << id;

    return 0;

}