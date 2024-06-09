//#include <iostream>
//
//using namespace std;
//int jumpIt(int* arr, int arrSize, int index = 0);
//int main()
//{
//    int arr[] = {0, 3, 80, 6, 57, 10};
//    int arrSize = sizeof(arr) / sizeof(arr[0]);
//    int res = jumpIt(arr, arrSize);
//    cout << res << endl;
//}
//
//int jumpIt(int* arr, int arrSize, int index)
//{
//    if(index == arrSize - 1)
//    {
//        return arr[index];
//    }
//    if(index == arrSize - 2)
//    {
//        return arr[index] + jumpIt(arr, arrSize, index + 1);
//    }
//    int moveCost = arr[index] + jumpIt(arr, arrSize, index + 1);
//    int jumpCost = arr[index] + jumpIt(arr, arrSize, index + 2);
//    if (moveCost < jumpCost)
//    {
//        return moveCost;
//    } else
//    {
//        return jumpCost;
//
//    }
//}
