#include<iostream>
using namespace std;
void draw_bottom(int size, char c);
void draw_shape(int size, char c);

int main( )
{
// Simplified version of main, notice that char and size are fixed for now
char c = '*';
int size = 4;
draw_shape(size, c);
return 0;
}

void draw_shape(int size, char c) //A simplified version of draw_shape
{
    draw_bottom(size, c);
}

void draw_bottom(int size, char c) // complete version of draw_bottom function
{
    
    for (int row = size; row >= 1; row--){

        //for a row, there are (size - row) # of spaces
        for (int spaceCount = size - row; spaceCount > 0; spaceCount--){
            cout << " ";
        }

        //the # of chars increases by 2 in each consecutive row
        for (int charCount = (2*row - 1); charCount > 0; charCount--) { 
            cout << c;
        }

        cout << "\n";
    }

}