//#include <iostream>
//#include <string>
//
//
//using namespace std;
//bool areTheyAnagrams(string userInputOne, string userInputTwo);
//void countText(int arr[], string userInput);
//const int nAlphabte = 26;
//int main()
//{
//    string userInputOne, userInputTwo;
//    cout << "Please enter your first string" << endl;
//    getline(cin, userInputOne);
//    cout << "Please enter your second string" << endl;
//    getline(cin, userInputTwo);
//    
//    if(areTheyAnagrams(userInputOne, userInputTwo) == 1)
//    {
//        cout << "Your two strings are anagrams!" << endl;
//    } else
//    {
//        cout << "Your two strings are not anagrams!" << endl;
//    }
//    return  0;
//}
//bool areTheyAnagrams(string userInputOne, string userInputTwo)
//{
//    int arrOne[nAlphabte] = {}, arrTwo[nAlphabte] = {};
//    countText(arrOne, userInputOne);
//    countText(arrTwo, userInputTwo);
//    for(int index = 0; index < nAlphabte; index++)
//    {
//        if(arrOne[index] != arrTwo[index])
//            return false;
//    }
//    return true;
//}
//void countText(int arr[], string userInput)
//{
//    string temp;
//    for(char c: userInput)
//    {
//        if(isalpha(c))
//        {
//            if(c >= 'a' && c <= 'z')
//            {
//                temp += c;
//            } else
//            {
//                temp += towlower(c);
//            }
//        }
//    }
//    //count alphabetical letters and store them in an array
//    for(char letter: temp)
//    {
//        arr[letter - 'a']++;
//    }
//}
