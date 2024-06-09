#include <iostream>
#include <string>

using namespace std;
string replaceText(string text);
bool isDigit(char cha);

int main()
{
    string text;
    cout << "Please enter a line of text:" << endl;
    getline(cin, text);
    string replacedText = replaceText(text);
    cout << replacedText << endl;
    return 0;
}
bool isDigit(char cha)
{
    if(cha < '0' || cha > '9')
    {
        return false;
    }
    return true;
    
}
string replaceText(string text)
{
    string replacedText;
    bool isPreviousDigit;
    for(int index = 0; index < text.length(); index++)
    {
        if(isDigit(text[index]))
        {
            if(!isPreviousDigit && (text[index - 1] == ' ' || index == 0))
            {
                replacedText += 'x';
                isPreviousDigit = true;
            } else if (isPreviousDigit)
            {
                replacedText += 'x';
    
            } else
            {
                replacedText += text[index];
            }
        } else
        {
            replacedText += text[index];
            isPreviousDigit = false;
        }
    }
    return replacedText;
}

