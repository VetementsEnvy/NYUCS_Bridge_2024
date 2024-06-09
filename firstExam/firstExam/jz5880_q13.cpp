#include <iostream>
using namespace std;
int main()
{
    int userInput;
    int nAsterisks, nLines, nSpace, oddAsterisk;
    cout << "Please enter a positive integer:" << endl;
    cin >> userInput;
    nLines = userInput + 1;
    nAsterisks = userInput;
    nSpace = (userInput - 1)/2;
    oddAsterisk = 1;
    for (int i = 1; i <= nLines; i++)
    {
        if(i % 2 != 0)
        {
            for (int i = 1; i <= nSpace; i++)
            {
                cout << " ";
            }
            for (int n = 1; n <= oddAsterisk; n++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int k = 1; k <= nAsterisks; k++)
            {
                cout << "*";
            }
        }
        nSpace = (userInput - i)/2;
        oddAsterisk = i + 1;
        cout << endl;
    }
}
