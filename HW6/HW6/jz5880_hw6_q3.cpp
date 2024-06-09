#include <iostream>
using namespace std;

void swap(int& a, int& b);
void reverseArray(int arr[], int arrSize);
void removeOdd(int arr[], int& arrSize);
void splitParity(int arr[],int arrSize);
void printArray(int arr[], int arrSize);

int main()
{
    int arr1[10] = {9, 2, 14, 12, -3};
    int arr1Size = 5;
    int arr2[10] = {21, 12, 6, 7, 14};
    int arr2Size = 5;
    int arr3[10] = {3, 6, 4, 1, 12};
    int arr3Size = 5;
    
    reverseArray(arr1, arr1Size);
    printArray(arr1, arr1Size);
    
    removeOdd(arr2, arr2Size);
    printArray(arr2, arr2Size);
    
    splitParity(arr3, arr3Size);
    printArray(arr3, arr3Size);
    return 0;
}
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void reverseArray(int arr[], int arrSize)
{
    int leftIndex = 0, rightIndex = arrSize - 1;
    while(leftIndex < rightIndex)
    {
        swap(arr[leftIndex], arr[rightIndex]);
        leftIndex++;
        rightIndex--;
    }
    
}
void printArray(int arr[], int arrSize)
{
    int i;
    for (i = 0; i < arrSize; i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}
void removeOdd(int arr[], int& arrSize)
{
    int arrEvenIndex = 0;
    for(int index = 0; index < arrSize; index++)
    {
        if(arr[index] % 2 == 0)
        {
            arr[arrEvenIndex] = arr[index];
            arrEvenIndex++;
        }
    }
    arrSize = arrEvenIndex;
}
void splitParity(int arr[], int arrSize)
{
    int leftIndex = 0, rightIndex = arrSize - 1;
    while(leftIndex < rightIndex)
    {
        while(arr[leftIndex] % 2 != 0)
        {
            leftIndex++;
        }
        while(arr[rightIndex] % 2 == 0)
        {
            rightIndex--;
        }
        swap(arr[leftIndex], arr[rightIndex]);
        leftIndex++;
        rightIndex--;
    }
}

