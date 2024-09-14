//Assignment 9
//This progrma reads an image, displays some statistics on that image, and creates its invert.

#include <iostream>
#include <fstream> //To access library for commands using streams (input and output files)
#include <cmath>
#include <iomanip>
using namespace std;

void avrg_row(int rows, int columns, int **pixels);
void avrg_column(int rows, int columns, int **pixels);
double avrg_image(int rows, int columns, int **pixels);
double std_image(int rows, int columns, int **pixels);
void distribution(double avg_img, double std);
void invert(string filetype, string comments, int rows, int columns, int max, int **pixels);

ifstream in;
ofstream out;

int main()
{
    in.open("img1.ppm");//input file
    out.open("StudentID_stats.txt");//output file as text file

    //(1) READING FILE

    //pass in first two lines of input file, store into string variable
    string filetype, comments;
    getline(in, filetype);
    getline(in, comments);

    //Read the sizes and max brightness from the input file, store into int variables
    int rows, columns, max;
    in >> rows;
    in >> columns;
    in >> max;

    //Create a 2D array that corresponds to the pixel dimensions of the image
    //Need as a double pointer to pass as parameter for functions later
    int **pixels = new int *[rows]; //Pointer that points to a 1D array of rows

    //Reading the image: Iterate through values in the input file and store in an array
    for (int i=0; i<rows; i++)//Iterate through each row
    {
        pixels[i] = new int[columns];
        for (int j=0; j<columns; j++)
        {
            in >> pixels[i][j];//Iterate through column values of each row in input file
        }
    }

    //(2) STATISTICS
    //use functions
    avrg_row(rows, columns, pixels);
    avrg_column(rows, columns, pixels);
    
    double avg_img;//avrg_image returns the final value since we need it as a parameter for distribution function
    avg_img = avrg_image(rows, columns, pixels); 
    
    double std;//std_image returns the final value since we need it as a parameter for distribution function
    std = std_image(rows, columns, pixels);
    
    distribution(avg_img, std);

    //(3) INVERT IMAGE
    out.close(); //Close the text file we are using as the output
    out.open("StudentID_inverted.ppm");//Open the invert ppm file to be our new output
    invert(filetype, comments, rows, columns, max, pixels);

    return 0;
}

void avrg_row(int rows, int columns, int **pixels)
{
    for (int i=0; i<rows; i++)//Iterate through each row
    {
        double sum_row = 0;
        double average_row;

        for (int j=0; j<columns; j++)//Iterate through each column
        {
            sum_row = sum_row + pixels[i][j];   //take the jth column value from ith rows and add to the ith row sum                      
        }

        average_row = sum_row / rows; //Return a value to the double average_row
        out << "Avg Row (" << i + 1 << ") : " << average_row << endl;

    }

    out << endl;
}

void avrg_column(int rows, int columns, int **pixels)
{
    for (int j=0; j<columns; j++)//Iterate through each column
    {
        double sum_col = 0;
        double average_col;

        for (int i=0; i<rows; i++) //Iterate through each column
        {
            sum_col = sum_col + pixels[i][j];                    
        }

        average_col = sum_col / columns; //Return a value to the double average_column
        out << "Avg Col (" << j + 1 << ") : " << average_col << endl;

    }
    
    out << endl;
}

double avrg_image(int rows, int columns, int **pixels)
{
    double sum_image = 0;//initialize sum outside of the loop
    double average_image;
    
    for (int i=0; i<rows; i++)//Iterate through each row
    {
        for (int j=0; j<columns; j++)//Iterate through each column
        {
            sum_image = sum_image + pixels[i][j];  //Add each pixel value to the total sum                
        }

    }

    average_image = sum_image / (rows*columns); //Return a value to the double average_row outside of the loop
    out << "Avg Pixel: " << average_image << endl;

    return average_image;
}

double std_image(int rows, int columns, int **pixels)
{
    double sum_squared1 = 0, sum_2 = 0, sum_squared2, std;

    for (int i=0; i<rows; i++)//Iterate through each row
    {
        for (int j=0; j<columns; j++)//Iterate through each column
        {
            sum_squared1 += pow(pixels[i][j],2);  //Add each pixel value squared to the sum  
            sum_2 += pixels[i][j];              
        }

    }
    sum_squared2 = pow(sum_2,2);
    //Using the given formula for standard deviation, took absolute so the number would be positive
    std = abs((sum_squared1 - sum_squared2)/(rows*columns - 1));
    out << "Standard Deviation: " << std << endl << endl;

    return std;
    
}

void distribution(double avg_img, double std)
{
    for (int i = 1; i < 4; i++)
    {
        out << left << "Average + " << i << " STD: " << setw(20) << avg_img + (i*std);
        out << left << "Average - " << i << " STD: " << setw(20) << avg_img - (i*std);
        out << endl;
    }
}

void invert(string filetype, string comments, int rows, int columns, int max, int **pixels)
{
    //Print out the same four lines from input file in the output file
    out << filetype << endl;
    out << comments << endl;
    out << rows << " " << columns << endl;
    out << max << endl;

    for (int i=0; i<rows; i++)//Iterate through each row
    {
        for (int j=0; j<columns; j++)//Iterate through each column
        {
            out << abs(255 - pixels[i][j]) << " "; //Formula to invert a single pixel       
        }
        out << endl;
    }
}