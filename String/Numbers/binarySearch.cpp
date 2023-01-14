#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start += 1;
        }
        else
        {
            end -= 1;
        }

        mid = (start + end) / 2;
    }

    return -1;
}

 bool isPresent(int *arr,int n, int key){


    if (arr)
    {
        /* code */
    }
    


 }

int main()
{

    int n, key;
    cout << "Enter the no. of element you want to implement in an array" << endl;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the Key : " << endl;
    cin >> key;

    // int index = binarySearch(arr, n, key);

    // cout << "Index of " << key << " is : " << index << endl;



    // Binary search using Reccursion

        int ans = isPresent(arr,n,key);


    return 0;
}