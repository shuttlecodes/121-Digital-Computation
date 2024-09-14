#include <cmath>

#include "line.h"

Line::Line(double slope_in, double y_int_in, char symbol_in) {
  coefficients[0] = y_int_in;
  coefficients[1] = slope_in;
  symbol = symbol_in;
}

Line::Line(double slope_in, double y_int_in) {
  coefficients[0] = y_int_in;
  coefficients[1] = slope_in;
}

void Line::setSlope(double slope_in) {
  coefficients[1] = slope_in;
}

void Line::setYIntercept(double y_int_in) {
  coefficients[0] = y_int_in;
}
