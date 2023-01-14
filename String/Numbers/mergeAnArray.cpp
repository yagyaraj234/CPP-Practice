#include<iostream>
using namespace std;
int merge(int arr[],int m,int arr2[],int n,int arr3[]){

   int i=0;
   int j=0;
   int k=0;
    while (i<m &&j<n)
    {
        if(arr[i]<arr2[j]){
            arr3[k]=arr[i];
            k++;
            i++;
        }
        else{
        arr3[k]=arr2[j];
        k++;
        j++;
        }
    }
    while (i<m)
    {
        arr3[k++]=arr[i++];
    }
    while (j<n)
    {
        arr3[k++]=arr[i++];
    }
    
    
    
    
}

void printArray(int ans[],int s){
    for (int i = 0; i < s; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    int arr[5]={1,5,7,8,19};
    int arr2[4]={2,3,14,26};
    int arr3[9]={0};

    merge(arr,5,arr2,4,arr3);
    
    printArray(arr3,9);
    
    return 0;
}