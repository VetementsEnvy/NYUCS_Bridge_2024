#include <iostream>
#include <string>
using namespace std;


bool isEven(char cha)
{
    return (cha == '0' || cha == '2' || cha == '4' || cha == '6' || cha == '8');
}


bool moreEvens(string S, int startIndex = 0, int nOdd = 0, int nEven = 0)
{
    if(startIndex == S.length())
    {
        return nEven > nOdd;
    }
    if(isEven(S[startIndex]) == 1)
    {
        nEven++;
    } else
    {
        nOdd++;
    }
    return moreEvens(S, startIndex + 1, nOdd, nEven);
}
int main()
{
    string S = "2";
    bool res = moreEvens(S);
    cout << res << endl;

}

