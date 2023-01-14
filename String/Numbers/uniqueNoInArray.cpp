#include <iostream>
using namespace std;

int printAnArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int uniqueNo(int arr2[],int size){

    int ans=0;
     for (int i = 0; i < size; i++)
     {
       
        ans=ans^arr2[i];

     }

     cout<<"the unique no. is  -> "<< ans;
     

}

int main()
{

        int n;
        cin>>n;
        int arr[100];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        uniqueNo(arr,n);
        printAnArray(arr,n);
   

    return 0;
}