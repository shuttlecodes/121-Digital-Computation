#include <iostream>
using namespace std;

int main()
{
      char input;
      
      cout << "Are the lights on right now? y/n\n";
      cin >> input;

      if (input == 'y')
      {
        cout << "Please turn the light off before leaving the room!";
      }
              

      else if (input == 'n')
      {
        cout << "Good job! You may leave the room now";
      }
      
      

}