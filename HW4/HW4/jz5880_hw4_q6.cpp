#include <iostream>
using namespace std;
int main()
{
    int userInput;
    cout << "Please input a positive integer n: ";
    cin >> userInput;
    for (int currNumber = 0; currNumber < userInput; currNumber++)
    {
        int evenCount = 0, oddCount = 0, digit = currNumber % 10;
        if (digit % 2 == 0)
        {
            evenCount++;
        } else
        {
            oddCount++;
        }
        if (evenCount > oddCount)
            cout << currNumber << endl;
    }
}
