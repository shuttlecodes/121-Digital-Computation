#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string sentence = "The C and C++ compilers are integrated; G++ is a script to call Gcc with options to recognize C++. Gcc processes input files through one or more stages";
    
    for (int i = 0; i < sentence.length(); i++){
        if (sentence[i] == 'G'){
            sentence[i] = 'g';
        }
    }

    cout << sentence;

}