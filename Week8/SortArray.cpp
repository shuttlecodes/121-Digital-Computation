#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int size, x, y;
    double median;

    cout << "How many integers would you like to enter?\n";
    cin >> size;

    int num[size];

    cout << "Enter " << size << " integers.\n";
    for (int i=0; i < size; i++){
        cin >> num[i];
    }

    sort(num, num + size); //function to sort the numbers

    for(int i=0; i< size; i++){ //print outs the sorted numbers
        cout << num[i] << " ";
    }

    if (size%2 == 0){
        x = (size-1)/2;
        y = x + 1;
        median = (num[x] + num[y])/2.0;
    }

    else {
        x = (size)/2;
        median = num[x];
    }
    
    cout << "\nThe median value is " << median;

    return 0;
}