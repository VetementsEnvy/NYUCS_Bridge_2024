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
    // Prompt the user to enter necessary information
    cout << "Please enter number of coins:" << endl;
    cout << "# of quarters:";
    cin >> quarters;
    cout << "# of dimes: ";
    cin >> dimes;
    cout << "# of nickels: ";
    cin >> nickels;
    cout << "# of pennies: ";
    cin >> pennies;
    // Calculating the total in cents
    totalCents = quarters * QUARTER_VALUE + dimes * DIME_VALUE +
                 nickels * NICKEL_VALUE + pennies;
    dollars = totalCents / CENTS_PER_DOLLAR;
    cents = totalCents % CENTS_PER_DOLLAR;
    cout << "The total is " << dollars << " dollars and "
         << cents << "cents" << endl;
}
