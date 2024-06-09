#include <iostream>
using namespace std;
const int FIRST_EVEN_NUMBER = 2;
int main()
{
    int userInput, evenOuput;
    int loopCount = 0;
    cout << "Please enter a positive integer: ";
    cin >> userInput;
    // Check input
    if (userInput <= 0)
    {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    //a), using while loop to disply user specified number of even numbers
    while (loopCount < userInput)
    {
        evenOuput = FIRST_EVEN_NUMBER + loopCount * FIRST_EVEN_NUMBER;
        cout << "section a: " << evenOuput << endl;
        loopCount++;
    }
    //b), using while loop to disply user specified number of even numbers
    for (loopCount = 0; loopCount < userInput; loopCount++)
    {
        evenOuput = FIRST_EVEN_NUMBER + loopCount * FIRST_EVEN_NUMBER;
        cout << "section b: " << evenOuput << endl;
    }
    return 0;
}
