#include <iostream>
#include <vector>
using namespace std;
int determineDigits(int input)
{
    int count = 0;
    while(input != 0)
    {
        input /= 10;
        count++;
    }
  
    return count;
}


int summationDigit(int x)
{
    int sum = 0;
    while(x != 0)
    {
        sum += (x % 10);
        x /= 10;
    }
    return sum;
}



int main()
{
    vector<int> threeDigVec;
    vector<int> fourDigVec;
    vector<int> fiveDigVec;
    int temp = 0, sum = 0;
    
    cout << "Please enter a sequence of positive integers (each integer will have at least 3 decimal digits and at most 5 decimal digits and first digit of each integer won’t be 0), each one in a separate line. End your sequence by typing -1:" << endl;
    
    while(temp != -1)
    {
        cin >> temp;
        int digits = determineDigits(temp);
        if(digits == 3)
        {
            threeDigVec.push_back(temp);
        } else if (digits == 4)
        {
            fourDigVec.push_back(temp);
        } else if (digits == 5)
        {
            fiveDigVec.push_back(temp);
        }
    }
    
    for(int i : threeDigVec)
    {
        sum += summationDigit(i);
    }
    cout << "Summation of all the digits in all the 3 digits integers:"
         << sum << endl;
    sum = 0;
    for(int i : fourDigVec)
    {
        sum += summationDigit(i);
    }
    cout << "Summation of all the digits in all the 4 digits integers:"
         << sum << endl;
    sum = 0;
    for(int i : fiveDigVec)
    {
        sum += summationDigit(i);
    }
    cout << "Summation of all the digits in all the 5 digits integers:"
         << sum << endl;
}
