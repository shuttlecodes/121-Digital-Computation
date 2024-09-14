#include <cmath>
#include "line.h"

Line::Line(double slope_in, double y_int_in, char symbol_in) {
  slope = slope_in;
  y_intercept = y_int_in;
  symbol = symbol_in;
}

Line::Line(double slope_in, double y_int_in) {
  slope = slope_in;
  y_intercept = y_int_in;
}

void Line::setSlope(double slope_in) {
  slope = slope_in;
}

void Line::setYIntercept(double y_int_in) {
  y_intercept = y_int_in;
}

int Line::apply(int x) {
  return round(slope * x + y_intercept);
}
