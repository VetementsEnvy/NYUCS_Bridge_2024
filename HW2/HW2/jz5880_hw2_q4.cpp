#include <iostream>
using namespace std;
int main()
{
    int integerOne, integerTwo;
    int sum, difference, product, div, mod;
    double division;
    cout << "Please enter two positive integers, separated by a space:"
         << endl;
    cin >> integerOne >> integerTwo;
    //Perform calculations for two inputs
    sum = integerOne + integerTwo;
    difference = integerOne - integerTwo;
    product = integerOne * integerTwo;
    division = (double)integerOne / integerTwo;
    div = integerOne / integerTwo;
    mod = integerOne % integerTwo;
    //Outputing the results
    cout << integerOne << " + " << integerTwo << " = "
         << sum << endl;
    cout << integerOne << " - " << integerTwo << " = "
         << difference << endl;
    cout << integerOne << " * " << integerTwo << " = "
         << product << endl;
    cout << integerOne << " / " << integerTwo << " = "
         << division << endl;
    cout << integerOne << " div " << integerTwo << " = "
         << div << endl;
    cout << integerOne << " mod " << integerTwo << " = "
         << mod << endl;
}
