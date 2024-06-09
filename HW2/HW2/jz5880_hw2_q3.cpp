#include <iostream>
using namespace std;
const int DAY_IN_MINUTES = 24 * 60;
const int HOUR_IN_MINUTES = 60;
int main()
{
    int totalMinutes, JohnMinutes, BillMinutes;
    int days, hours, minutes;
    cout << "Please enter the number of days John has worked: ";
    cin >> days;
    cout << "Please enter the number of hours John has worked: ";
    cin >> hours;
    cout << "Please enter the number of minutes John has worked: ";
    cin >> minutes;
    JohnMinutes = days * DAY_IN_MINUTES + hours * HOUR_IN_MINUTES + minutes;
    cout << "\nPlease enter the number of days John has worked: ";
    cin >> days;
    cout << "Please enter the number of hours John has worked: ";
    cin >> hours;
    cout << "Please enter the number of minutes John has worked: ";
    cin >> minutes;
    BillMinutes = days * DAY_IN_MINUTES + hours * HOUR_IN_MINUTES + minutes;
    totalMinutes = JohnMinutes + BillMinutes;
    days = totalMinutes / DAY_IN_MINUTES;
    totalMinutes %= DAY_IN_MINUTES;
    hours = totalMinutes / HOUR_IN_MINUTES;
    totalMinutes %= HOUR_IN_MINUTES;
    minutes = totalMinutes;
    cout << "The total time both of them worked together is: "
         << days << " days, "
         << hours << " hours" << " and "
         << minutes << " minutes." << endl;
}
