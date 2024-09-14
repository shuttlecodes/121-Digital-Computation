#include <iostream>
using namespace std;

class Student
{
    public:
    string student_name, student_idnumber;
};

int main ()
{
    int size;

    cout << "Number of students: ";
    cin >> size;

    Student *list = new Student[size]; //array of objects (type Student). The number of objects in array = size
    for (int i = 0; i < size; i++)
    {
        cout << "Student firstname: ";
        cin >> list[i].student_name; //access and allocate string values to member variables of the ith object in array
        cout << "Student ID: ";
        cin >> list[i].student_idnumber;
        cout << endl;
    }

    cout << "Here is the classlist.\n";
    for (int i = 0; i < size; i++)
    {
        cout << list[i].student_name << ": " << list[i].student_idnumber << endl;
    }

}