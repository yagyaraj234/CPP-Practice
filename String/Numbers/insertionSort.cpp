#include <iostream>
using namespace std;
int printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int insertionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] >= key)
        {
            /* code */
            swap(arr[j], arr[j + 1]);
            j = j - 1;
        }
        arr[j - 1] = key;
    }

    printArray(arr, size);
}

int main()
{

    int arr[7] = {4, 2, 6, 3, 6, 1, 5};

    insertionSort(arr, 7);

    return 0;
}