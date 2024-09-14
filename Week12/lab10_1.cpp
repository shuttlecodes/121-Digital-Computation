//This program illustrates dynamic variables
#include <iostream>
#include <cstring>
using namespace std;

class Area
{
    private:
    string units;
    float area_value;

    public:

    Area(){}

    Area(string units_i, float area_i);

    void compute_area();

};

Area::Area(string units_i, float area_i)
{
    area_value = area_i;
    units = units_i;
}

void Area::compute_area(){
    float area_half = area_value/2.0;
    float area_quarter = area_value/4.0;
    cout << "You have entered an area of " << area_value << units << endl;
    cout << "Half of the area is " << area_half << units << endl;
    cout << "One quarter of the area is " << area_quarter << units;
}

int main ()
{
   string units_i;
   float area_i;

   cout << "Please enter the area units: ";
   cin >> units_i;
   cout << "Please enter the area value: ";
   cin >> area_i;

   Area *p1;
   p1 = new Area(units_i, area_i);     //new returns ADDRESS 
   //Allocates dynamic memory (new box), running constructor (giving it a value), "p1 =" makes *p1 point to the space
   // Variables created using the new operator are called dynamic variables
   p1 -> compute_area(); //syntax for a pointer calling a member function

   delete p1;                // Delete the dynamic variable p1 and return the memory occupied by p1 to the freestore to be reused.

   return 0;
}