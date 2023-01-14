#include <bits/stdc++.h>
using namespace std;
int printAnArray(int arr[], int size)
{
    for (int i = 0; i < size; i++) // Sorting an Array using selection Sorting
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function for a Bubble sort  

int bubbleSort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        // int ans = i;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j+1] < arr[j])
            {
                swap(arr[j+1], arr[j]);
            }
        }
    }
    return printAnArray(arr, size);
}

//   Function  for a Insertion Sort   
int insertionSort(int arr[], int size)
{

    for (int i = 1; i < size - 1; i++)
    {
        // int ans = i;
        for (int j = 1; j < size; j++)
        {
            if (arr[j-1] > arr[j])
            {
                swap(arr[j-1], arr[j]);
            }
        }
    }
    return printAnArray(arr, size);
}
int main()
{
    int arr2[6]={4,6,25,90,54,21};
   int arr[5]={5,2,42,3,54};

    printAnArray(arr2, 6);
    insertionSort(arr2,6);
    printAnArray(arr,5);
    bubbleSort(arr, 5);
}
