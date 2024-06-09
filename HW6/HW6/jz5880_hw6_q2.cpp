#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string str);

int main()
{
    string my_str;
    cout << "Please enter a word: ";
    getline(cin, my_str);
    if(isPalindrome(my_str) == 1)
    {
        cout << my_str << " is a palindrome" << endl;
    } else
    {
        cout << my_str << " is not a palindrome" << endl;
    }
    return 0;
}
bool isPalindrome(string str)
{
    int len = str.length();
    int leftIndex = 0, rightIndex = len - 1;

    while(leftIndex < rightIndex)
    {
        if(str[leftIndex] != str[rightIndex])
        {
            return false;
        }
        leftIndex++;
        rightIndex--;
    }
    return true;
}
