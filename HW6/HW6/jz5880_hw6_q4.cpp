#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


using namespace std;
const int REAL_PIN[5] = {1,2,3,4,5};
const int ARR_SIZE = 10;
void randomizedMapping(int mapping[]);
void printArr(int mapping[]);
int encryptedPIN(int mapping[]);

int main()
{
    srand(time(NULL));
    int mapping[ARR_SIZE];
    int userInput;
    
    cout << "Please enter your PIN according to the following mapping:" << endl;
    cout << "PIN:\t" << "0 1 2 3 4 5 6 7 8 9" << endl;
    randomizedMapping(mapping);
    cout << "NUM:\t";
    printArr(mapping);
    cin >> userInput;
    if(userInput == encryptedPIN(mapping))
    {
        cout << "Your PIN is correct" << endl;
    } else
    {
        cout << "Your PIN is not correct" << endl;
    }
    return 0;
}
void randomizedMapping(int mapping[])
{
    for(int index = 0; index < ARR_SIZE; index++)
    {
        mapping[index] = rand() % 3 + 1;
    }
}
void printArr(int mapping[])
{
    for(int index = 0; index < ARR_SIZE; index++)
    {
        cout << mapping[index] << " ";
    }
    cout << endl;
}
int encryptedPIN(int mapping[])
{
    int correctPin = 0;
    for (int index = 0; index < 5; index++)
    {
        correctPin = correctPin * 10 + mapping[REAL_PIN[index]];
    }
    return correctPin;
}
