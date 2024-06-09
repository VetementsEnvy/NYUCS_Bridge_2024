#include <iostream>
using namespace std;
const int CENTS_PER_DOLLAR = 100;
const int QUARTER_VALUE = 25;
const int DIME_VALUE = 10;
const int NICKEL_VALUE = 5;
int main()
{
    int quarters, dimes, nickels, pennies;
    int totalCents, dollars, cents;
    cout << "Please enter your amount in the format of dollars and cents"
            " separated by a space:" << endl;
    cin >> dollars >> cents;
    totalCents = dollars * CENTS_PER_DOLLAR + cents;
    // Calculating the number of coins
    quarters = totalCents / QUARTER_VALUE;
    totalCents %= QUARTER_VALUE;
    dimes = totalCents / DIME_VALUE;
    totalCents %= DIME_VALUE;
    nickels = totalCents / NICKEL_VALUE;
    totalCents %= NICKEL_VALUE;
    pennies = totalCents;
    // Displaying the result
    cout << dollars << " dollars and " << cents << " cents are:" << endl;
    cout << quarters << " quarters, " << dimes << " dimes, "
         << nickels << " nickels and " << pennies << " pennies" << endl;
}
