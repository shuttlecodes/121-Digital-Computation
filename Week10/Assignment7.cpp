#include <iostream>
using namespace std;

class Rational //Rational class definition
{
    public:
    int x; //Integers for the rational x/y
    int y;

    void add(Rational two); //Declaring functions for operations on rationals
    void subtract(Rational two);
    void multiply(Rational two);
    void divide(Rational two);

    Rational()
    {
        x = 0;
        y = 1;
    }
    
    Rational(int num_in, int denom_in)
    {
        x = num_in;
        y = denom_in;
    }

    Rational(int num_in)
    {
        x = num_in;
        y = 1;
    }

};

int main()
{
    int choice, num_in, denom_in;

    //Note: Assignment says to assume the user will enter in a fraction (numerator and denominator)

    cout << "Please enter values for Fraction one." << endl;
    cout << "Numerator: "; //Sets values for fraction a to be x/y
    cin >> num_in;
    cout << "Denominator: ";
    cin >> denom_in;
    cout << endl;

    Rational a(num_in, denom_in); //Creates Rational class 'a', calls the constructor for two inputs
    

    //Fraction two

    cout << "Please enter values for Fraction two." << endl;
    cout << "Numerator: "; //Sets values for fraction a to be x/y
    cin >> num_in;
    cout << "Denominator: ";
    cin >> denom_in;
    cout << endl;

    Rational b(num_in, denom_in); //Creates Rational class 'a', calls the constructor for two inputs

    a.add(b);
    a.subtract(b);
    a.multiply(b);
    a.divide(b);

    return 0;
}

void Rational::add(Rational two) //Function definition for add function (a/b + c/d)
{
    int num, denom;
    num = (x*two.y) + (y*two.x); //numerator = a*d + b*c
    denom = y*two.y; //denominator = b*d
    cout << endl << "The sum of the two fractions is: " << num << "/" << denom << endl;
}

void Rational::subtract(Rational two) //Function definition for subtract function (a/b - c/d)
{
    int num, denom;
    num = (x*two.y) - (y*two.x); //numerator = a*d - b*c
    denom = y*two.y; //denominator = b*d
    cout << "The difference of the two fractions is: " << num << "/" << denom << endl;
}

void Rational::multiply(Rational two) //Function definition for multiplication function (a/b) * (c/d)
{
    int num, denom;
    num = x*two.x; //numerator = (a*c) / (b*d)
    denom = y*two.y; //denominator = b*d
    cout << "The product of the two fractions is: " << num << "/" << denom <<endl;
}

void Rational::divide(Rational two) //Function definition for division function (a/b)/(c/d)
{
    int num, denom;
    num = x*two.y; //numerator = (a*d)
    denom = y*two.x; //denominator = b*c
    cout << "The quotient of the two fractions is: " << num << "/" << denom << endl;
}