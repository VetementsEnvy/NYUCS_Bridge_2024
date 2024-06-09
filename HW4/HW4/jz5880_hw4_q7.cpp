#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int userInput, nRow, nCol;
    cout << "Please enter a positive integer: " << endl;
    cin >> userInput;
    
    for (nRow = 1; nRow <= userInput; nRow++)
    {
        cout << nRow;
        for (nCol = 2; nCol <= userInput; nCol++)
        {
            cout << setw(4) << nRow * nCol;
        }
        cout << endl;
    }
    return 0;
}
