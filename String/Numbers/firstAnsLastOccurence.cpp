#include <iostream>
using namespace std;
int occurence(int arr[], int size, int num)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == num)
        {
            ans = mid;
            end=mid-1;
        }
        else if (num > arr[mid])
        {
            start = mid + 1;
        }
        else if (num < arr[mid])
        {
            end = mid - 1;
        }

        int mid= start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    
    int arr[5]={3,4,5,6,3};

    cout << "the first occurence is " << occurence(arr, 5, 6) << endl;

    return 0;
}
