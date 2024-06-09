#include <iostream>
#include <string>
using namespace std;
const double WEEKDAY_RATE = 0.4;
const double WEEKDAY_DISCOUNT_RATE = 0.25;
const double WEEKEND_RATE = 0.15;
int main()
{
    string weekDay;
    int hourStart, minuteStart, numberOfminutes;
    char temp;
    double cost;
    cout << "Please enter your day of the week: ";
    cin >> weekDay;
    cout << "Please enter the time the call started in 24-hour notation: ";
    cin >> hourStart >> temp >> minuteStart;
    cout << "Please enter the length of the call in minutes: ";
    cin >> numberOfminutes;
    
    if (weekDay == "Sa" || weekDay == "Su")
        cost = numberOfminutes * WEEKEND_RATE;
    else
    {
        if (hourStart >= 8 && hourStart <= 18)
            cost = numberOfminutes * WEEKDAY_RATE;
        else
            cost = numberOfminutes * WEEKDAY_DISCOUNT_RATE;
    }
    cout << "The cost of the call is: $" << cost << endl;
}
