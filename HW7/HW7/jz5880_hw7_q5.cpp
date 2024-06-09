//#include <iostream>
//
//using namespace std;
//int* getPosNums1(int* arr, int arrSize, int& outPosArrSize);
//int* getPosNums2(int* arr, int arrSize, int* outPosArrSizePtr);
//void getPosNums3(int* arr, int arrSize,
//                 int*& outPosArr, int& outPosArrSize);
//void getPosNums4(int* arr, int arrSize,
//                 int** outPosArrPtr, int* outPosArrSizePtr);
//void printArr(int* arr, int arrSize);
//
//
//void printArr(int* arr, int arrSize)
//{
//    cout << "[";
//    for(int index = 0; index < arrSize; index++)
//    {
//        if(index < arrSize - 1)
//        {
//            cout << arr[index] << ", ";
//        } else {cout << arr[index];}
//    }
//    cout << "]" <<endl;
//}
//
//
//int main()
//{
//    int arr[] = {3, -1, -3, 0, 6, 4};
//    int arrSize = sizeof(arr) / sizeof(arr[0]), outPosArrSize = 0;
//    int *outPosArr = nullptr, **outPosArrPtr = &outPosArr;
//    
//    //Test for getPosNums1
//    int *res = getPosNums1(arr, arrSize, outPosArrSize);
//    cout << "Test for getPosNums1:" << endl;
//    cout << "outPosArrSize: "<< outPosArrSize << endl;
//    printArr(res, outPosArrSize);
//    delete[] res;
//    res = nullptr;
//    //Test for getPosNums2
//    res = getPosNums2(arr, arrSize, &outPosArrSize);
//    cout << endl;
//    cout << "Test for getPosNums2:" << endl;
//    cout << "outPosArrSize: "<< outPosArrSize << endl;
//    printArr(res, outPosArrSize);
//    delete[] res;
//    res = nullptr;
//    //Test for getPosNums3
//    cout << endl;
//    cout << "Test for getPosNums3:" << endl;
//    getPosNums3(arr, arrSize, outPosArr, outPosArrSize);
//    cout << "outPosArrSize: "<< outPosArrSize << endl;
//    printArr(outPosArr, outPosArrSize);
//    delete[] outPosArr;
//    outPosArr = nullptr;
//    //Test for getPosNums4
//    cout << endl;
//    cout << "Test for getPosNums4:" << endl;
//    getPosNums4(arr, arrSize, outPosArrPtr, &outPosArrSize);
//    cout << "outPosArrSize: "<< outPosArrSize << endl;
//    printArr(*outPosArrPtr, outPosArrSize);
//    delete[] *outPosArrPtr;
//    *outPosArrPtr = nullptr;
//    return 0;
//}
//
//int* getPosNums1(int* arr, int arrSize, int& outPosArrSize)
//{
//    int count = 0, resIndex = 0;
//    for(int index = 0; index < arrSize; index++)
//    {
//        if(arr[index] > 0){count++;}
//    }
//    outPosArrSize = count;
//    int* res = new int[count];
//    for(int index = 0; index < arrSize; index++)
//    {
//        if(arr[index] > 0)
//        {
//            res[resIndex] = arr[index];
//            resIndex++;
//        }
//    }
//    return res;
//}
//int* getPosNums2(int* arr, int arrSize, int* outPosArrSizePtr)
//{
//    int count = 0, resIndex = 0;
//    for(int index = 0; index < arrSize; index++)
//    {
//        if(arr[index] > 0){count++;}
//    }
//    *outPosArrSizePtr = count;
//    int* res = new int[count];
//    for(int index = 0; index < arrSize; index++)
//    {
//        if(arr[index] > 0)
//        {
//            res[resIndex] = arr[index];
//            resIndex++;
//        }
//    }
//    return res;
//}
//void getPosNums3(int* arr, int arrSize,
//                 int*& outPosArr, int& outPosArrSize)
//{
//    int count = 0, resIndex = 0;
//    for(int index = 0; index < arrSize; index++)
//    {
//        if(arr[index] > 0){count++;}
//    }
//    outPosArrSize = count;
//    int* res = new int[count];
//    for(int index = 0; index < arrSize; index++)
//    {
//        if(arr[index] > 0)
//        {
//            res[resIndex] = arr[index];
//            resIndex++;
//        }
//    }
//    outPosArr = res;
//}
//void getPosNums4(int* arr, int arrSize,
//                 int** outPosArrPtr, int* outPosArrSizePtr)
//{
//    int count = 0, resIndex = 0;
//    for(int index = 0; index < arrSize; index++)
//    {
//        if(arr[index] > 0){count++;}
//    }
//    *outPosArrSizePtr = count;
//    int* res = new int[count];
//    for(int index = 0; index < arrSize; index++)
//    {
//        if(arr[index] > 0)
//        {
//            res[resIndex] = arr[index];
//            resIndex++;
//        }
//    }
//    *outPosArrPtr = res;
//}
