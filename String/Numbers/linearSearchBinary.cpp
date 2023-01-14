#include <iostream>
using namespace std;

bool isPresent(int *arr, int size, int n)
{

    // Base class
    if (size < 0)
    {
        return false;
    }

    else if (arr[0] == n)
    {
        return true;
    }
    else if(arr[n-1]== n){
        return true;
    }
    else
        isPresent(arr+1, size - 1, n);
}

int main()
{
    int arr[6] = {4, 6, 2, 7, 3, 9};
    int n;
    cin >> n;

    bool ans = isPresent(arr, 6, n);

    // cout<<ans<<endl;
    if (ans)
    {
        cout<< n << " is present "<<endl;
    }
    else
    cout<<n <<" is not present"<<endl;
    

    return 0;
}