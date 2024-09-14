// We use both the Plot and Line classes here so we need to include the headers
#include "plot.h"
#include "line.h"
#include "polynomial.h"

using namespace std;

int main() {
  // Create the plot and two lines
  Plot test;
  Line line1(1, 1);

  double coefs[6] = {0,0,0.5,-0.03,0,0} //0.5x^2 - 0.03x^3
  Polynomial poly1(coefs, 'x');

  // Add lines to the plot
  test.addPoly(line1);
  test.addPoly(poly1);

  // Modify the y-intercept of line1 and add it to the plot again
  // As "y_intercept" is a private variable we can't access it directly
  line1.setYIntercept(-10);
  test.addPoly(line1);

  // Show the graph
  // Note: Most fonts are taller than they are wide, so the graph may be tall and skinny on
  //       your computer
  test.printPlot();

  return 0;
}
