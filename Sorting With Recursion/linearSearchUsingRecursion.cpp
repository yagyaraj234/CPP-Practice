#include <iostream>
using namespace std;

bool search(int *arr, int s, int n)
{
    // Base CAse
    if (s == 0)
    {
        return false;
    }
    if (arr[0] == n)
        return true;

    else
    {
        bool ans = search(arr + 1, s - 1, n);
        return ans;
    }
}

int main()
{

    int arr[5] = {4, 45, 74, 24, 22};

    int ans = search(arr, 5, 222);
    if (ans==true)
    {
        cout<<"Present";
    }
    else
    cout<<"Absent";
    

    return 0;
}