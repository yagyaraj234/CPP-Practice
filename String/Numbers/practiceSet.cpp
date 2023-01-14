#include <bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else{
            studentCount++;
        if (studentCount > m || arr[i] > mid)
        {
            return false;
        }
        
        pageSum = arr[i];
        }
    }
    return true;
}
int minValue(int arr[], int n, int m)
{
    int ans = -1;
    int start = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;

        mid = start + (end - start) / 2;
    }

    return ans;
}
int main()
{

    int arr[4] = {10, 20, 30,40};   
            // 10 90
            // 30 70
            // 60 40
    int arr2[7]={10,20,30,40,50,60,70};


    cout<<"The value is "<<minValue(arr,4,2)<<endl;
    cout<<"The value is "<<minValue(arr2,7,2)<<endl;

    return 0;
}