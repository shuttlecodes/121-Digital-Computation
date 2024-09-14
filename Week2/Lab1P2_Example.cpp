#include <iostream>
using namespace std;
int main( )
{
    int cases_per_day, bottles_per_day;
    int bottles_per_case = 12;
    double profit_per_bottle = 0.2; // 20 cents per bottle profit
    double profit_per_day, profit_per_year;
    
    cout << "Press enter after entering each number \n";
    cout << "Enter number of cases \n";
    cin >> cases_per_day;
    
    profit_per_day = cases_per_day * bottles_per_case * profit_per_bottle;
    profit_per_year = 365 * profit_per_day;
    
    cout << "The store has a made : ";
    cout << profit_per_day;
cout << " per day. \n";
cout << "That means the profit for one year will be:";
cout << profit_per_year << endl;
cout << "Good business?! \n";
return 0;
}