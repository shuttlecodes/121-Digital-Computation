#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    ifstream in_stream;
    ofstream out_stream;

    in_stream.open("input5.txt");
    out_stream.open("output5.txt");

    int number[8], square, sum = 0;
    double average;

    out_stream.setf(ios::left);
    cout.setf(ios::left);

    out_stream << setw(10) << "x" << setw(10) << "x^2" << setw(10) << "Current Sum" << endl << setw(10) <<"===" << setw(10) << "===" << setw(10) << "==========\n";
    cout << setw(10) << "x" << setw(10) << "x^2" << setw(10) << "Current Sum" << endl << setw(10) <<"===" << setw(10) << "===" << setw(10) << "==========\n";

    for (int i=0; i<8; i++){
        in_stream >> number[i];
    }

    for (int i=0; i<8; i++){
        out_stream << setw(10) << number[i];
        cout << setw(10) << number[i];

        square = (number[i])*(number[i]);
        out_stream << setw(10) << square;
        cout << setw(10) << square;

        sum = sum + number[i];

        out_stream << setw(10) << sum;
        cout << setw(10) << sum;

        out_stream << endl;
        cout << endl;
    }

    average = sum/8.0;
    out_stream << "The average of these 8 numbers is: " << average;
    cout << "The average of these 8 numbers is: " << average;
    
    in_stream.close();
    out_stream.close();

    return 0;
}