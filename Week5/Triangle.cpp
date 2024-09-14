#include<iostream>
using namespace std;
void draw_triangle(int size, char c);
void draw_shape(int size, char c);

int main( )
{
// Simplified version of main, notice that char and size are fixed for now
char c = '*';
int size = 5;
draw_shape(size, c);
return 0;
}

void draw_shape(int size, char c) //A simplified version of draw_shape
{
    draw_triangle(size, c);
}

void draw_triangle(int size, char c) // complete version of draw_triangle function
{
    
    for (int row = 1; row <= size; row++){

        //for a row, there are (size - row) # of spaces
        for (int spaceCount = 0; spaceCount < size - row; spaceCount++){
            cout << " ";
        }

        //the # of chars increases by 2 in each consecutive row
        for (int charCount = 0; charCount < (2*row - 1); charCount++) { 
            cout << c;
        }

        cout << "\n";
    }

}