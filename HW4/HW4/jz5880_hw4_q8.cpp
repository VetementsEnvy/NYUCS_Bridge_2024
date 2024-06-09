#include <iostream>
#include <cstdlib>
#include <ctime>
const int NUMBER_OF_CHANCE = 5;
const int DEFAULT_SMALLEST = 1;
const int DEFAULT_BIHHEST = 100;
using namespace std;
int main()
{
    int x, userInput,nGuesses = 0, nGuessesLeft = NUMBER_OF_CHANCE;
    int upperLimit = DEFAULT_BIHHEST, lowerLimit = DEFAULT_SMALLEST;
    bool correctAnswer = false;
    srand(time(0));
    x = (rand()%100)+1;
    
    while (correctAnswer == false && nGuessesLeft != 0)
    {
        cout << "I thought of a number between 1 and 100! Try to guess it."
             << endl;
        cout << "Range: [" << lowerLimit <<", "
        << upperLimit << "], Number of guesses left: "
        << nGuessesLeft << endl;
        cout << "your guess: ";
        cin >> userInput;
        nGuesses++;
        nGuessesLeft--;
        if (userInput < x)
        {
            cout << "Wrong! My number is bigger." << endl;
            cout << endl;
            lowerLimit = userInput + 1;
        }
        else if (userInput > x)
        {
            cout << "Wrong! My number is smaller." << endl;
            cout << endl;
            upperLimit = userInput - 1;
        }
        else
        {
            cout << "Congrats! You guessed my number in " << nGuesses
                 << " guesses." << endl;
            correctAnswer = true;
        }
    }
    if (correctAnswer != true)
        cout << "Out of guesses! My number is " << x << endl;
    return 0;
}
