#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

using namespace std;

const int MAX_DEGREES = 5;

//Modify for improvements
  //Add constants

class Polynomial {
  public:
    // The symbol used to plot the line
    char symbol = 'o';

    Polynomial();

    // Constructor that allows the user to define the slope, y-intercept and symbol
    Polynomial(double coefs_in[], char symbol_in);

    // Constructor that allows the user to define the slope and y-intercept
    Polynomial(double coefs_in[]);

    // Given an x-coordinate, output the corresponding y-coordinate on the line
    int apply(int x);
  
  protected: //Allows the derived line class to access this
    // The slopes and y-intercept that define the line
    double coefficients[MAX_DEGREES + 1] = 0;
};

#endif //LINE_H
