#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int userInput;
    cout << "Enter decimal number:" << endl;
    cin >> userInput;
    cout << "The binary representation of " << userInput << " is ";
    for (int nExponent = log2(userInput); nExponent >= 0; nExponent--)
    {
        int threshold = pow(2,nExponent);
        if (userInput >= threshold)
        {
            cout << "1";
            userInput -= threshold;
        } else
        {
            cout << "0";
        }
    }
    cout << endl;
    return 0;
}
