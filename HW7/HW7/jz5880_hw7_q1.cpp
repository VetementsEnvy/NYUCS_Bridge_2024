//#include <iostream>
//#include <string>
//using namespace std;
//
//void countArr(int arr[], string transformedText);
//const int nAlphabte = 26;
//
//int main()
//{
//    string inputText, transformedText;
//    int countArray[nAlphabte] = {}, wordsCount = 0;
//    
//    cout << "Please enter a line of text:" << endl;
//    getline(cin, inputText);
//
//    for(char c: inputText)
//    {
//        if(c != ' ' && c != ',' && c != '.')
//        {
//            if(c >= 'a' && c <= 'z')
//                transformedText += c;
//            else
//                transformedText += towlower(c);
//        } else {wordsCount++;}
//    }
//    countArr(countArray, transformedText);
//    //Display the output
//    cout << wordsCount << '\t' << "words" << endl;
//    for (int index = 0; index < nAlphabte; index++)
//    {
//        if(countArray[index] != 0)
//        {
//            cout << countArray[index] << '\t' << (char)(index + 'a') << endl;
//        }
//    }
//    return 0;
//}
//void countArr(int arr[], string transformedText)
//{
//    for(char c: transformedText)
//    {
//        arr[c - 'a']++;
//    }
//}
