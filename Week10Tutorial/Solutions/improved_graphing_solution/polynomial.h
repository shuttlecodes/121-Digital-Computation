#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

using namespace std;

const int MAX_DEGREE = 5;

class Polynomial {
  public:
    // The symbol used to plot the line
    char symbol = 'o';

    // Default constructor
    Polynomial();

    // Constructor that allows the intercept to be set
    // Used to enable adding and subtracting doubles
    Polynomial(double intercept);

    // Constructor that allows the user to define the coefficients and symbol
    Polynomial(double coefs_in[], char symbol_in);

    // Constructor that allows the user to define the coefficients
    Polynomial(double coefs_in[]);

    // Operator overloading
    friend Polynomial operator +(const Polynomial& f1, const Polynomial& f2);
    friend Polynomial operator -(const Polynomial& f1, const Polynomial& f2);

    // Given an x-coordinate, output the corresponding y-coordinate on the line
    int apply(int x) const;
  protected:
    // The slops and y-intercept that define the line
    double coefficients[MAX_DEGREE + 1] = {};
};

#endif //LINE_H
