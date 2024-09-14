#include <iostream>
using namespace std;
#include <fstream>

ifstream in;
ofstream out;

int main()
{
    in.open("img1.ppm");//input file
    out.open("img_invert.ppm");//output file

    
    string read;

    for (int i = 0; i < 30; i++)
    {
        in >> read;
        cout << read << endl;
    }
    
    
    

}