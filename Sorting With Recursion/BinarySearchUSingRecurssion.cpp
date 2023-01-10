#include <iostream>
using namespace std;

bool binarySearch(int *arr, int start, int end, int key)
{

    if (start > end)
        return false;

        int mid = start +(end-start)/2;

    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, end, key);
    }
    else{
        return binarySearch(arr,start,mid - 1,key);
    }


}

int main()
{

    int arr[6] = {12, 32,45, 62, 73, 74};

    int key=73;

    bool ans = binarySearch(arr,0,5,key);

    cout<<ans<<endl;

    if (ans == true)
        cout << "Present";
    else
        cout << "Absent";

    return 0;
}