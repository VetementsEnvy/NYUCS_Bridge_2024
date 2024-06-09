#include <iostream>
using namespace std;
int main()
{
    int userInput, nSpace, nCol;
    cout << "Please provide the number of positive integers: ";
    cin >> userInput;
    
    for (int currRow = 0; currRow < userInput; currRow++)
    {
        nSpace = currRow;
        nCol = 2 * userInput - 1 - nSpace;
        for (int currCol = 0; currCol < nCol; currCol++)
        {
            if (nSpace != 0)
            {
                cout << " ";
                nSpace--;
            } else {cout << "*";}
        }
        cout << endl;
    }
    
    for (int currRow = 0; currRow < userInput; currRow++)
    {
        nSpace = userInput - currRow - 1;
        nCol = 2 * userInput - 1 - nSpace;
        for (int currCol = 0; currCol < nCol; currCol++)
        {
            if (nSpace != 0)
            {
                cout << " ";
                nSpace--;
            } else {cout << "*";}
        }
        cout << endl;
    }
    return 0;
}
