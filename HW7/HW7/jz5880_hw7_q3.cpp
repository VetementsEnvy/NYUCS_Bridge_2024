//#include <iostream>
//
//using namespace std;
//void oddsKeepEvensFlip(int arr[], int arrSize);
//
//int main()
//{
//    
//    int arr[] = {5, 2, 11, 7, 6, 4};
//    int arrSize = sizeof(arr) / sizeof(arr[0]);
//    oddsKeepEvensFlip(arr, arrSize);
//    for(int i = 0; i < arrSize; i++)
//    {
//        cout << arr[i] << '\t';
//    }
//    cout << endl;
//    return 0;
//}
//void oddsKeepEvensFlip(int arr[], int arrSize)
//{
//    int TempArr[arrSize], TempArrIndex = 0;
//    //fill tempArr with odd elements
//    for(int i = 0; i < arrSize; i++)
//    {
//        if(arr[i] % 2 != 0)
//        {
//            TempArr[TempArrIndex] = arr[i];
//            TempArrIndex++;
//        }
//    }
//    //fill tempArr with even number with reversed ordered;
//    for(int i = arrSize - 1; i > 0; i--)
//    {
//        if(arr[i] % 2 == 0)
//        {
//            TempArr[TempArrIndex] = arr[i];
//            TempArrIndex++;
//        }
//    }
//    //Copy the contents of tempArr back to arr
//    for(int i = 0; i < arrSize; i++)
//    {
//        arr[i] = TempArr[i];
//    }
//}
