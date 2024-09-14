#ifndef LINE_H
#define LINE_H

#include "polynomial.h"

using namespace std;

//Modify for improvements
  //Add constants

class Line : public Polynomial { //Makes Line class a subclass of Polynomial
  public:
    // The symbol used to plot the line
    char symbol = 'o';

    // Constructor that allows the user to define the slope, y-intercept and symbol
    Line(double slope_in, double y_int_in, char symbol_in);

    // Constructor that allows the user to define the slope and y-intercept
    Line(double slope_in, double y_int_in);

    // Changes the slope to the given value
    void setSlope(double slope_in);

    // Changes the y-itercept to the given value
    void setYIntercept(double y_int_in);

    // Given an x-coordinate, output the corresponding y-coordinate on the line
    int apply(int x);
};

#endif //LINE_H
