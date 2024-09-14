// LAB7_2.cpp - This program reads the entire contents of an input file and will
// display it with the same format.
// Version 3 instructions; Modify the program by using the eof( )
#include<iostream>
#include<fstream>  // Step (1)
#include<cstdlib>
using namespace std;

void get_input_stream(ifstream& in_s);

int main( )
{
    char next_char;
    ifstream in_s;  // Step (2)-B - declaration of the stream of type input

    get_input_stream(in_s);

    cout << "Here are the entire contents of the input file \n";

    in_s.get(next_char);// Step (4)-Read all numbers one-by-one to the end of the file.
    while( ! in_s.eof( ) )
    { 
        cout << next_char; // you could use cout.put(next_char) too
        in_s.get(next_char);
    }
    
    

   cout << "\n I am done with writing the contents of the file \n";

    in_s.close( );  // Step (5)-Close the connection (close the file)

   return 0;
}

void get_input_stream(ifstream& in_s)
{
 char input_file[15]; // Step (2)-A
    cout << "Please input the input file name \n"; // Step (3)-A Get the file name
    cin >> input_file;

    in_s.open(input_file); // Step (3)-B - Connect to the input file and test
    if(in_s.fail( ))
    {
       cout << "Input file opening failed. \n";
       exit(1);  // if we couldn't open the file to read from we exit
    }
}