// We use both the Plot and Line classes here so we need to include the headers
#include "plot.h"
#include "line.h"

using namespace std;

int main() {
  // Create the plot and two lines
  Plot test;
  Line line1(1, 1), line2(-0.5, 3, '*');

  // Add lines to the plot
  test.addLine(line1);
  test.addLine(line2);

  // Modify the y-intercept of line1 and add it to the plot again
  // As "y_intercept" is a private variable we can't access it directly
  line1.setYIntercept(-10);
  test.addLine(line1);

  // Show the graph
  // Note: Most fonts are taller than they are wide, so the graph may be tall and skinny on
  //       your computer
  test.printPlot();

  return 0;
}
