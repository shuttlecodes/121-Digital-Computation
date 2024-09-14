//  This program reads one character from the keyboard and will
// convert it to uppercase, if it is lowercase
// convert it to lowercase, if it is uppercase
// display a message, if it is a digit

#include<iostream>
#include<cctype>
using namespace std;

int main( )
{
    char c;
    string input;

    cout << "Enter a character \n";
    getline(cin, input);
    c = input[0];

    if(isalpha(c))
    { //check to see if it is a letter of alphabet
        if( isupper(c) ) //check to see if it is uppercase
        {
            cout << "Your character " << c << " is in uppercase.";
            c = tolower(c);
            cout << " Its lowercase case is " << c << endl;
        }
        else
       {
            cout << "Your character " << c << " is in lowercase.";
            c = toupper(c);
            cout << " Its uppercase is " << c << endl;
        }
    }

    else if(isspace(c)){
        cout << "Your character " << c << "is a whitspace.";
    }

    else
    {
        cout << "Your character " << c << " is a digit.\n";
    }

    return 0;
}