#include <iostream>
#include "plot.h"
#include "polynomial.h"

using namespace std;

Plot::Plot() {
  // Initialize empty plot with axes
  // We offset the x- and y- coordinates to put the axes in the centre of the plot
  for (int i = 0; i < ROWS; i++)
    for (int j = 0; j < COLS; j++)
      if (i - y_offset == 0 && j - x_offset == 0) // Origin
        plot[i][j] = '+';
      else if (i - y_offset == 0) // X-axis
        plot[i][j] = '-';
      else if (j - x_offset == 0) // Y-axis
        plot[i][j] = '|';
      else // Empty space
        plot[i][j] = ' ';
}

void Plot::printPlot() const {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      cout << plot[i][j];
    }
    cout << endl;
  }
}

void Plot::addPoly(const Polynomial& poly) {
  int x, y, i;

  // For each column, we find the appropriate row index and add it to our plot
  for (int j = 0; j < COLS; j++) {
    // Convert from a column index to x-coordinate using the x_offset
    x = j - x_offset;

    // Find the appropriate y-coordinate
    y = poly.apply(x);

    // To convert from a y-coordinate to a row index we need to:
    // 1) Apply the y_offset
    // 2) Flip the coordinates as i values increase as we move down the plot
    //    => We subtract from the max value which is "ROWS - 1"
    i = (ROWS - 1) - (y + y_offset);

    // Add to plot if we are in the array bounds
    if (i >= 0 && i < ROWS)
      plot[i][j] = poly.symbol; // symbol is a public member variable so we can access it here
  }
}
