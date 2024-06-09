#include <iostream>
using namespace std;

const int ARRAY_SIZE = 20;
int minInArray(int arr[], int arrSize);

int main()
{
    int result;
    int arr[ARRAY_SIZE];
    cout << "Please enter 20 integers separated by a space:" << endl;
    for (int index = 0; index < ARRAY_SIZE; index++)
    {
        cin >> arr[index];
    }
    result = minInArray(arr, ARRAY_SIZE);
    cout << "The minimum value is " << result
         << ", and it is located in the following indices: ";
    for (int index = 0; index < ARRAY_SIZE; index++)
    {
        if(arr[index] == result)
            cout << index << " ";
        
    }
    cout << endl;
    return 0;
}
int minInArray(int arr[], int arrSize)
{
    int min = arr[0];
    for (int i = 0; i < arrSize; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
