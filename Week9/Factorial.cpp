#include <iostream>
using namespace std;

int factorial(int n);

int main(){
    int n;
    cout << "Select an integer to find the factorial of: ";
    cin >> n;

    cout << "The factorial of " << n << " is " << factorial(n);

}

int factorial(int n){
    if(n == 0){
        return 1;
    }

    return n*factorial(n-1);
    
}