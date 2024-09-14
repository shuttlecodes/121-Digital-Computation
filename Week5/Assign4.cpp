#include <iostream>
using namespace std;

void instructions( );
int menu ();
void draw_shape(int choice);
int get_size( );
char get_char( );

void draw_triangle(int size, char c);
void draw_diamond(int size, char c);
void draw_bottom(int size, char c);
void draw_sideways(int size, char c);
void draw_sidetop(int size, char c);
void draw_sidebottom(int size, char c);

int main()
{
    int choice;

    instructions( );
    choice = menu( );
    if(choice != 1 && choice != 2 && choice != 3 && choice != 4)
    {
        cout << "You requested to quit, bye \n";
        return 0;
    }

    draw_shape(choice);

    return 0;
}

void instructions ( )
{
    cout << "This program draws shapes, given the size and a character.\n\n";
    cout << "Select the number corresponding to the shape you would like to draw.\n";
    cout << "1 = Triangle\n2 = Diamond\n3 = Upside Down Triangle \n4 = Sideways Triangle\n\n";
}

int menu( ) 
{
    int input;
    cout << "Selection: ";
    cin >> input;
    return input;
}

void draw_shape(int choice)     // This function calls on appropriate function depending on the choice to draw a shape
{
    int size = get_size( );    //This function also takes in size and characters as inputs
    char c = get_char ( );

    if (choice == 1){
        cout << "Triangle:\n";
        draw_triangle(size, c);
    }

    else if (choice == 2){
        cout << "Diamond:\n";
        draw_diamond(size, c);
    }

    else if (choice == 3){
        cout << "Upside Down Triangle:\n";
        draw_bottom(size, c);
    }

    else if (choice == 4){
        cout << "Sideways Triangle:\n";
        draw_sideways(size, c);
    }
}

int get_size( )                 // This function will return the size of the shape, same function for either of the shapes
{
    int size;
    cout << "Please select an integer for the size: ";
    cin >> size;
    return size;
}

char get_char( )                // This function will ask users to select a character that will be used to draw the shape
{
    char c;
    cout << "Please select a character to draw with: ";
    cin >> c;
    return c;
}

void draw_triangle(int size, char c)    // This function draws a triangle of size size using character c
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

void draw_diamond(int size, char c)     // This function first calls draw_triangle, then add_bottom to draw the diamond
{
    draw_triangle(size, c);
    draw_bottom(size, c);
}

void draw_bottom(int size, char c)      // This function actually draws an upside down triangle of size size-1 as the bottom of the diamond
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

void draw_sideways(int size, char c)    //thie function draws the sideways triangle
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