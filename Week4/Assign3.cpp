// Assign3_1.cpp This program illustrates the local and global variables and call-by-value.
// This program computes the side area and the cross section area of a cylinder
#include<iostream>
#include<cmath>
using namespace std;

const double PI = 3.14159; // This variable is defined globally, known to all functions in this program as PI
const double conversion = 0.3937; // This is the Cm to inch conversion factor
double area(double r); // Function declaration for function that computes cylinder cross section area
double area(double r, double h); // Function declaration for function that computes cylinder side area
double area(double r, int four); // Sphere surface area
double volume(double r, double h); //Cylinder volume
double volume(double r); //Sphere volume

int main(void)
{
    int choice, four=4;
    double h, r; //variables local to the main function

    cout << "Select 1 for a cylinder, or 2 for a sphere. \n";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter the cylinder radius in cm: ";
        cin >> r;
        cout << "Enter the cylinder height in cm: ";
        cin >> h;
        cout << "The side area of the cylinder is " << area(r,h) << " inch-sqr.\n";
        cout << "The total area of the cylindar is " << area(r) + area(r,h) << endl;
        cout << "The volume of the cylinder is " << volume(r, h) << " inch-cubed\n";
    }

    else if (choice == 2)
    {
        cout << "Enter the sphere radius in cm: ";
        cin >> r;
        cout << "The surface area of the sphere is " << area(r, four) << " inch-sqr.\n";
        cout << "The volume of the sphere is " << volume(r) << " inch-cubed.\n";
    }

    else
    {
        cout << "invalid choice error.";
    }

    return 0;

}


double area(double r)//Cylinder cross section area
{
//cross secion area includes the disks at the bottom and the top
r = r * conversion; // converting r to inch
return 2*PI*(pow(r,2));
}


double area(double r, double h)//Cylinder side area
{
    double area; //variable local to Side_area function
    h = h * conversion; // converting h to inch
    r = r * conversion; // converting r to inch
    area = 2*PI*r*h;
    return area;
}

double volume(double r, double h)//Cylinder volume
{
    double volume;
    r = r*conversion;
    h = h*conversion;
    volume = PI*(pow(r,2))*h;
    return volume;
}

double area(double r, int four)//Sphere surface area, used overloading by using a different type of parameter (int)
{
    double area;
    r = r * conversion;
    area = (four)*PI*(pow(r,2));
    return area;

}

double volume(double r)//Sphere volume, using overloading because there's a different number of arguments
{
    double volume;
    r = r*conversion;
    volume = (4.0/3.0)*(PI)*(pow(r,3));
    return volume;
}
