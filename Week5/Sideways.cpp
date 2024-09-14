#include<iostream>
using namespace std;
void draw_sideways(int size, char c);
void draw_sidebottom(int size, char c);
void draw_sidetop(int size, char c);
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
    draw_sideways(size, c);
}

void draw_sideways(int size, char c)
{
    draw_sidetop(size, c);
    draw_sidebottom(size, c);

}

void draw_sidetop(int size, char c)
{
    for (int row = 1; row <= size; row++){

        //the # of chars is the same as the row number
        for (int charCount = 1; charCount < row; charCount++) { 
            cout << c;
        }

        cout << "\n";
    }
}

void draw_sidebottom(int size, char c)
{
    
    for (int row = 1; row <= size; row++){

        //the # of chars is the same as the row number
        for (int charCount = row; charCount <= size; charCount++) { 
            cout << c;
        }

        cout << "\n";
    }

}