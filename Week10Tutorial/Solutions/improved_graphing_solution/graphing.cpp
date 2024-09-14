// We use the Plot, Polynomial and Line classes here so we need to include the headers
#include "plot.h"
#include "line.h"
#include "polynomial.h"

using namespace std;

int main() {
  // Create the plot, a line and a polynomial
  Plot plot1;
  Line line1(1, 1, '*');

  double coefficients[6] = {0, 0, 0.5, -0.03, 0, 0};
  Polynomial poly1(coefficients, 'x');

  // Add polynomial and line to the plot
  plot1.addPoly(poly1);
  plot1.addPoly(line1);

  // Modify the y-intercept of line1 and add it to the plot again
  line1.setYIntercept(-10);
  plot1.addPoly(line1);

  // Print the plot with poly1 and line1
  // Note: Most fonts are taller than they are wide, so the graph may be tall and skinny on
  //       your computer
  plot1.printPlot();

  Plot plot2;
  // Add the sum of poly1 and line1 to the plot
  plot2.addPoly(poly1 + line1);
  // Add the difference of line1 and 10 to the plot
  plot2.addPoly(line1 - 10);

  // Print the plot with the new polynomials
  // Note: Most fonts are taller than they are wide, so the graph may be tall and skinny on
  //       your computer
  plot2.printPlot();

  return 0;
}
