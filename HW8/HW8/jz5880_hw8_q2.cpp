#include <iostream>
using namespace std;
int sumOfSquares(int arr[], int arrSize);
bool isSorted(int arr[], int arrSize);

int main()
{
    int arr[] = {2, -1, 3, 10};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int result = sumOfSquares(arr, arrSize);
    cout << result << endl;
    int arrTwo[] = {1, 2, 3, 4, 4, 5};
    int arrTwoSize = sizeof(arrTwo) / sizeof(arrTwo[0]);
    bool res = isSorted(arrTwo, arrTwoSize);
    if(res == 1)
    {
        cout << "The elements in array are sorted in an ascending order"
             << endl;
    } else
    {
        cout << "The elements in array are not sorted in an ascending order"
             << endl;
    }
}

bool isSorted(int arr[], int arrSize)
{
    if(arrSize == 1)
    {
        return true;
    }
    bool firstElement = isSorted(arr, arrSize - 1);
    int resElement = arr[arrSize - 1];
    return firstElement && arr[arrSize - 2] < resElement;

}







int sumOfSquares(int arr[], int arrSize)
{
    if(arrSize == 1)
    {
        return arr[0] * arr[0];
    } else
    {
        int startElement = sumOfSquares(arr, arrSize - 1);
        int currentElement = arr[arrSize - 1];
        return startElement + currentElement * currentElement;
    }
}
//bool isSorted(int arr[], int arrSize)
//{
//    if(arrSize == 1)
//    {
//        return true;
//    } else
//    {
//        int currentElement = arr[arrSize - 1];
//        int previousElement = arr[arrSize - 2];
//        return isSorted(arr, arrSize - 1) && (previousElement <= currentElement);
//    }
//}
