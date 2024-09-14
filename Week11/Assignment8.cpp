//Assignment 8

#include <iostream>
#include <algorithm>
using namespace std;

class Data //class declaration
{
    public:
        void set_distance(int d);
        void set_times(int i, double t);
        void display();
        void statistics( );
    private:
        double time[5]; //array of time in second
        int distance; //distance in meter
        double min, max, average;
};

int main ()
{
    Data race; //Create an instance of the class Data, the object "race"

    int d_in, t_in; 
    cout << "Race distance: ";//To collect user input for race distance
    cin >> d_in;
    race.set_distance(d_in);

    for(int i = 0; i < 5; i++){
        cout << "race time #" << i + 1 << ": "; //To allocate the 5 race times as members of the array
        cin >> t_in;
        race.set_times(i, t_in);
    }

    race.statistics();
    race.display();
    
}

void Data::set_distance(int d)//Set inputted distance to the member variable "distance"
{
    distance = d;
}

void Data::set_times(int i, double t)//Puts the ith time inputted as the ith value in array
{
    time[i] = t;
}

void Data::display()
{
    cout << "Here is your best 5 times for " << distance << " meter \n";
    for(int i = 0; i < 5; i++)//Display all the race times
    {
        cout << time[i] << endl;
    }
    cout << "Worst time: " << min << endl;
    cout << "Best time: " << max << endl;
    cout << "Average time: " << average << endl;
}

void Data::statistics()
{
    sort(time, time + 5);//use sort function from <algorithm> library to sort the array from lowest to greatest
    min = time[4];//Assign the lowest value as the min
    max = time[0];//Assign the greatest value as the max

    int sum = time[0] + time[1] + time[2] + time[3] + time[4];

    average = sum / 5.0; //Calculate and return the value (type double since used 5.0) for the average time

}