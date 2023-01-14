#include <bits/stdc++.h>
using namespace std;

// Function for reversing an array

int reverseArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
/// function for printing the element of an array

void printArray(int arrr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arrr[i] << " ";
    }

    cout << endl;
}

// Function for swaping alternate elements in array

int swapAlternate(int arr1[], int n)
{

    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr1[i], arr1[i + 1]);
        }
    }
}

int main()
{
    int arr[6] = {4, 5, 3, 2, 53, 5};
    int arr2[5] = {4, 6, 0, 53, 2};

    // call to reverse an array

    // reverseArr(arr,6);
    // reverseArr(arr2,5);

    // call to swap an array

    swapAlternate(arr, 6);
    swapAlternate(arr2, 5);

    // call to print an array

    printArray(arr, 6);
    printArray(arr2, 5);

    return 0;
}