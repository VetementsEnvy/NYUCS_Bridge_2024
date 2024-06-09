#include <iostream>
using namespace std;
const int ROMAN_DIGIT_M = 1000;
const int ROMAN_DIGIT_D = 500;
const int ROMAN_DIGIT_C = 100;
const int ROMAN_DIGIT_L = 50;
const int ROMAN_DIGIT_X = 10;
const int ROMAN_DIGIT_V = 5;
const int ROMAN_DIGIT_I = 1;
int main()
{
    int userInput;
    cout << "Enter decimal number: " << endl;
    cin >> userInput;
    
    while (userInput != 0)
    {
        if (userInput >= ROMAN_DIGIT_M)
        {
            for (int index = 0; index < userInput/ROMAN_DIGIT_M; index++)
            {
                cout << "M";
            }
            userInput %= ROMAN_DIGIT_M;
        }
        else if (userInput >= ROMAN_DIGIT_D)
        {
            for (int index = 0; index < userInput/ROMAN_DIGIT_D; index++)
            {
                cout << "D";
            }
            userInput %= ROMAN_DIGIT_D;
        }
        else if (userInput >= ROMAN_DIGIT_C)
        {
            for (int index = 0; index < userInput/ROMAN_DIGIT_C; index++)
            {
                cout << "C";
            }
            userInput %= ROMAN_DIGIT_C;
        }
        else if (userInput >= ROMAN_DIGIT_L)
        {
            for (int index = 0; index < userInput/ROMAN_DIGIT_L; index++)
            {
                cout << "L";
            }
            userInput %= ROMAN_DIGIT_L;
        }
        else if (userInput >= ROMAN_DIGIT_X)
        {
            for (int index = 0; index < userInput/ROMAN_DIGIT_X; index++)
            {
                cout << "X";
            }
            userInput %= ROMAN_DIGIT_X;
        }
        else if (userInput >= ROMAN_DIGIT_V)
        {
            for (int index = 0; index < userInput/ROMAN_DIGIT_V; index++)
            {
                cout << "V";
            }
            userInput %= ROMAN_DIGIT_V;
        }
        else if (userInput >= ROMAN_DIGIT_I)
        {
            for (int index = 0; index < userInput/ROMAN_DIGIT_I; index++)
            {
                cout << "I";
            }
            userInput %= ROMAN_DIGIT_I;
        }
    }
    cout << endl;
    return 0;
}
