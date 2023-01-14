#include <bits/stdc++.h>
using namespace std;
int xorless(int arr[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int tempXor = 0;
        for (int j = i; j < n; j++)
        {
            tempXor ^= arr[j];
            if (tempXor < k)
                count++;
        }
    }
    return count;
}
int main()
{
   int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << xorless(arr, n, x);

    return 0;
}