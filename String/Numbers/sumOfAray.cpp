#include <iostream>
using namespace std;


// int arraySum(int arr[], int n){
//   int sum=0;
//     for (int i = 0; i < n; i++)
//     {
//         sum+=arr[i];
        
//     }
// cout<<sum<<endl<<endl;
    
// }

int sumRecc(int arr[],int n){

    // Base Case
    if (n<0)
    {
        return 0;
    }
    else{
    return sumRecc(arr,n-1)+arr[n];
    }
    

}
int main()
{

    int size;
    cin >> size;
    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }


    // arraySum(arr,size);

   int ans = sumRecc(arr,size-1);

   cout<<ans<<endl;
    

    return 0;
}
