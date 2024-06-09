//#include <iostream>
//
//using namespace std;
//int* findMissing(int arr[], int n, int& resArrSize);
//
//int main()
//{
//    int arr[] = {3, 1, 3, 0, 6, 4}, resArrSize = 0;
//    int arrSize = sizeof(arr) / sizeof(arr[0]);
//    int* result = findMissing(arr, arrSize, resArrSize);
//    cout << "Missing Array: [";
//    for(int index = 0; index < resArrSize; index++)
//    {
//        if(index < resArrSize - 1)
//        {
//            cout << result[index] << ", ";
//        }
//        else
//        {
//            cout << result[index];
//        }
//    }
//    cout << "]" <<endl;
//    delete[] result;
//    return 0;
//}
//int* findMissing(int arr[], int n, int& resArrSize)
//{
//    int *countArray = new int[n + 1]();
//    int *missingArray = new int[n + 1](), nMissing = 0, missingIndex = 0;
//    for(int index = 0; index < n; index++)
//    {
//        countArray[arr[index]]++;
//    }
//    for(int index = 0; index < n + 1; index++)
//    {
//        if(countArray[index] == 0)
//        {
//            missingArray[missingIndex++] = index;
//            nMissing++;
//        }
//    }
//    resArrSize = nMissing;
//    delete[] countArray;
//    return missingArray;
//}
