#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //Section a, using for loop to calculate geometric mean of input ints
    int userInput, nInput;
    double geometricMean, product = 1.0;
    cout << "Please enter the length of the sequence: ";
    cin >> nInput;
    cout << "Please enter your sequence: " << endl;
    for (int curr = 0; curr < nInput; curr++)
    {
        cin >> userInput;
        product *= userInput;
    }
    geometricMean = pow(product, 1.0/nInput);
    cout << "section a, The geometric mean is: " << geometricMean << endl;
    
    cout << "Please enter a non-empty sequence of positive integers,"
            "each one in a separate line. End your sequence by typing -1:"
         << endl;
    //Section b, using while loop for the same computation
    bool termination = false;
    product = 1.0;
    nInput = 0;
    while (termination != true)
    {
        cin >> userInput;
        if (userInput != -1)
        {
            product *= userInput;
            nInput++;
        } else {termination = true;}
    }
    geometricMean = pow(product, 1.0/nInput);
    cout << "section b, The geometric mean is: " << geometricMean << endl;
    return 0;
}
