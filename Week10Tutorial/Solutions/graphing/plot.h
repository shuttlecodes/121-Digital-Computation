#ifndef PLOT_H
#define PLOT_H

// As we use the Line class in the addLine declaration, we need to include the line.h header file
//
// If we didn't have the "ifndef LINE_H" lines in line.h, this would cause an error as the program
// would try to define the Line class twice due to it being used both here and in graphing.cpp
// which uses both the Line and Plot classes
#include "line.h"

using namespace std;

// Define the size of the plot
const int ROWS = 41;
const int COLS = 41;

class Plot {
  public:
    // Constructor that initializes the plot
    Plot();

    // Print the plot to the standard output
    void printPlot();

    // Adds a line onto the plot
    void addLine(Line line);
  private:
    // Array that stores the plot
    char plot[ROWS][COLS] = {};

    // Offset variables used to move the x and y axes
    int x_offset = COLS / 2;
    int y_offset = ROWS / 2;
};

#endif // PLOT_H
