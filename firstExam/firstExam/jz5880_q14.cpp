#include <iostream>
using namespace std;
int main()
{
    int userInput;
    int nExcellent = 0, nGood = 0, nAverage = 0, nBlowAverage = 0,nInput = 0;
    int max, min;
    double average = 0.0;
    
    cout << "Please enter a sequence of numbers in between 1 and 100, each one"
            "in a separate line. End your sequence by typing -1:" << endl;
    cin >> userInput;
    max = userInput;
    min = userInput;
    while (userInput != -1)
    {
        nInput++;
        average += userInput;
        if (userInput >= 90)
        {
            nExcellent++;
        } else if (userInput >= 80)
        {
            nGood++;
        } else if (userInput >= 70)
        {
            nAverage++;
        } else
        {
            nBlowAverage++;
        }
        if (userInput > max)
        {
            max = userInput;
        }
        if  (userInput < min)
        {
            min = userInput;
        }
        cin >> userInput;
    }
    average /= (double)nInput;
    cout << "Number of students in the Excellent Category: "
         << nExcellent << endl;
    cout << "Number of students in the Very Good Category: "
         << nGood << endl;
    cout << "Number of students in the Average Category: "
         << nAverage << endl;
    cout << "Number of students in the Below Average Category: "
         << nBlowAverage << endl;
    cout << "Total number of people in the given sequence of scores: "
         << nInput << endl;
    
    
    cout << "Maximum score among the given sequence of scores: "
         << max << endl;
    cout << "Minimum score among the given sequence of scores: "
         << min << endl;
    cout << "Overall Average score of the given sequence of scores: "
         << average << endl;
    
    
    
}
