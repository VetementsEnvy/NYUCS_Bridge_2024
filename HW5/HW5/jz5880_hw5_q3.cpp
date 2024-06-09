//#include <iostream>
//using namespace std;
//int printMonthCalender(int numOfDays, int startingDay)
//{
//    cout << "Mon\tTue\tWed\tThr\tFri\tSat\tSun" << endl;
//    for (int space = 0; space < (startingDay - 1); space++)
//    {
//        cout << '\t';
//    }
//    for (int i = 1; i <= numOfDays; i++)
//    {
//        if ((i + startingDay - 1) % 7 == 0)
//            cout << i << endl;
//        else
//            cout << i << '\t';
//    }
//    cout << endl;
//    return ((startingDay + numOfDays - 1) % 7);
//}
//int determineLeapYear(int year)
//{
//    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//        return 29;
//    else
//        return 28;
//}
//void printYearCalender(int year, int startingDay)
//{
//    int numberOfDaysInFeb = determineLeapYear(year);
//    int startingDayTemp;
//    cout << "January " << year << endl;
//    startingDayTemp = printMonthCalender(31, 5) + 1;
//    cout << endl;
//    
//    cout << "February " << year << endl;
//    startingDayTemp =printMonthCalender(numberOfDaysInFeb, startingDayTemp) + 1;
//    cout << endl;
//    
//    cout << "March " << year << endl;
//    startingDayTemp =printMonthCalender(31, startingDayTemp) + 1;
//    cout << endl;
//    
//    cout << "April " << year << endl;
//    startingDayTemp =printMonthCalender(30, startingDayTemp) + 1;
//    cout << endl;
//    
//    cout << "May " << year << endl;
//    startingDayTemp =printMonthCalender(31, startingDayTemp) + 1;
//    cout << endl;
//    
//    cout << "June " << year << endl;
//    startingDayTemp =printMonthCalender(30, startingDayTemp) + 1;
//    cout << endl;
// 
//    cout << "July " << year << endl;
//    startingDayTemp =printMonthCalender(31, startingDayTemp) + 1;
//    cout << endl;
//    
//    cout << "August " << year << endl;
//    startingDayTemp =printMonthCalender(31, startingDayTemp) + 1;
//    cout << endl;
//    
//    cout << "September " << year << endl;
//    startingDayTemp =printMonthCalender(30, startingDayTemp) + 1;
//    cout << endl;
//    
//    cout << "October " << year << endl;
//    startingDayTemp =printMonthCalender(31, startingDayTemp) + 1;
//    cout << endl;
//    
//    cout << "November " << year << endl;
//    startingDayTemp =printMonthCalender(30, startingDayTemp) + 1;
//    cout << endl;
//    
//    cout << "December " << year << endl;
//    startingDayTemp =printMonthCalender(31, startingDayTemp) + 1;
//    cout << endl;
//    
//}
//int main()
//{
//    int year, startingDay;
//    cout << "please enter an integer that represents a year: ";
//    cin >> year;
//    cout << "Please enter a number 1-7 that represents the day in the week"
//            " of 1/1 in that year: ";
//    cin >> startingDay;
//    printYearCalender(year, startingDay);
//    return 0;
//}
