//#include <iostream>
//#include <string>
//
//using namespace std;
//string* createWordsArray(string sentence, int& outWordsArrSize);
//
//int main()
//{
//    int outWordsArrSize = 0;
//    string sentence;
//    cout << "Please enter your sentence: " << endl;
//    getline(cin, sentence);
//    
//    string* arr = createWordsArray(sentence, outWordsArrSize);
//    cout << "number of words: " << outWordsArrSize << endl;
//    cout << "[";
//    for(int index = 0; index < outWordsArrSize; index++)
//    {
//        if(index < outWordsArrSize - 1)
//        {
//            cout << "\"" <<arr[index] << "\"" << ", ";
//        } else{ cout << "\"" <<arr[index] << "\"";}
//    }
//    cout << "]" <<endl;
//    delete[] arr;
//    arr = nullptr;
//    return 0;
//}
//
//string* createWordsArray(string sentence, int& outWordsArrSize)
//{
//    int wordsCount = 1;
//    //determine the number of words in the sentence
//    for (char element: sentence)
//    {
//        if(element == ' ')
//            wordsCount++;
//    }
//    outWordsArrSize = wordsCount;
//    //split sentence in words, and fill in string array with words
//    string* stringArr = new string[outWordsArrSize];
//    string tempWord;
//    int stringArrIndex = 0;
//    for (char element: sentence)
//    {
//        if(element != ' ')
//        {
//            tempWord += element;
//        } else
//        {
//            stringArr[stringArrIndex] = tempWord;
//            tempWord = "";
//            stringArrIndex++;
//        }
//    }
//    //append last word to stringArr
//    stringArr[stringArrIndex] = tempWord;
//    return stringArr;
//}
