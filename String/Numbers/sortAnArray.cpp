#include <bits/stdc++.h>
using namespace std;

// For printing an Array 
int printAnArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)                   // Sorting an Array using selection Sorting
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
//   For increasing order
  int sortedArray(int arr[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        int ans = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[ans] > arr[j])
                ans = j;
        }
        swap(arr[ans], arr[i]);
    }
    return printAnArray(arr, size);
}

// for descreasing order

int sortedArray2(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    {
        int ans=i;
        for (int j =i+1; j < size; j++)
        {
            if (arr[ans]<arr[j])
            {
                ans=j;
            }
            
        }
     swap(arr[ans],arr[i]);   
    }
    printAnArray(arr,size);
}

int main()
{  int size;
cin>>size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    printAnArray(arr, size);
    sortedArray(arr, size);
    sortedArray2(arr, size);

    return 0;
}
