//#include <iostream>
//#include <vector>
//
//using namespace std;
//void resizedArr(int*& arr, int& arrSize);
//void printMatchedResult(int* arr, int arrIndex,int NumberLookup);
//void printMatchedResultForVec(vector<int>& vec, int arrIndex,int NumberLookup);
//void main1();
//void main2();
//int main()
//{
//    main1();
//    main2();
//    return 0;
//}
//void main1()
//{
//    int arrIndex = 0, arrSize = 10,temp, nMatches = 0;
//    int* arr = new int[arrSize];
//    bool termination = false;
//    
//    cout << "Please enter a sequence of positive integers, each in"
//            "a separate line." << endl;
//    cout << "End you input by typing -1." << endl;
//    while(termination == false)
//    {
//        cin >> temp;
//        if(temp == -1)
//        {
//            termination = true;
//        } else
//        {
//            if(arrIndex > arrSize - 1)
//            {
//                resizedArr(arr, arrSize);
//            }
//            arr[arrIndex++] = temp;
//        }
//    }
//    cout << "Please enter a number you want to search:" << endl;
//    cin >> temp;
//    printMatchedResult(arr, arrIndex, temp);
//    delete[] arr;
//    arr = nullptr;
//}
//void main2()
//{
//    vector<int> vec;
//    int temp;
//    bool termination = false;
//    cout << "Please enter a sequence of positive integers, each in"
//            "a separate line." << endl;
//    cout << "End you input by typing -1." << endl;
//    while(termination == false)
//    {
//        cin >> temp;
//        if(temp == -1)
//        {
//            termination = true;
//        } else
//        {
//            vec.push_back(temp);
//        }
//    }
//    cout << "Please enter a number you want to search:" << endl;
//    cin >> temp;
//    printMatchedResultForVec(vec, vec.size(), temp);
//}
//void resizedArr(int*& arr, int& arrSize)
//{
//    int newArrSize = arrSize * 2, index = 0;
//    int* newArr = new int[newArrSize];
//    while(index < arrSize)
//    {
//        newArr[index] = arr[index];
//        index++;
//    }
//    arrSize = newArrSize;
//    delete[] arr;
//    arr = newArr;
//}
//void printMatchedResult(int* arr, int arrIndex,int NumberLookup)
//{
//    int nOutput = 0, nMatches = 0;
//    cout << NumberLookup << " shows in lines ";
//    for(int index = 0; index < arrIndex; index++)
//    {
//        if(arr[index] == NumberLookup)
//            nMatches++;
//    }
//    for(int index = 0; index < arrIndex; index++)
//    {
//        if(arr[index] == NumberLookup)
//        {
//            if(nOutput < nMatches - 1)
//            {
//                cout << index + 1 << ", ";
//                nOutput++;
//            } else
//            {
//                cout << index + 1 << ".";
//            }
//        }
//    }
//    cout << endl;
//}
//void printMatchedResultForVec(vector<int>& vec, int arrIndex,int NumberLookup)
//{
//    int nOutput = 0, nMatches = 0;
//    cout << NumberLookup << " shows in lines ";
//    for(int index = 0; index < arrIndex; index++)
//    {
//        if(vec[index] == NumberLookup)
//            nMatches++;
//    }
//    for(int index = 0; index < arrIndex; index++)
//    {
//        if(vec[index] == NumberLookup)
//        {
//            if(nOutput < nMatches - 1)
//            {
//                cout << index + 1 << ", ";
//                nOutput++;
//            } else
//            {
//                cout << index + 1 << "." << endl;
//            }
//        }
//    }
//    cout << endl;
//}
