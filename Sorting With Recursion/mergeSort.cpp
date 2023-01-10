#include<iostream>
using namespace std;

void merge(int *arr,int s,int e){

    int mid=s+(e-s)/2;

    int len1=mid-s+1;
    int len2=e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // Copy Values
    int index=s;
    for (int i = 0; i < len1; i++)
    {
        first[i]=arr[index++];
    }
    index=mid+1;
    for (int i = 0; i < len2; i++)
    {
        second[i]=arr[index++];
    }

    // Merge two Sorted Array

    int index1=0;
    int index2=0;
    index=s;

    while (index1<len1 && index2<len2)
    {
        if(first[index1]<second[index2]){
            arr[index++]=first[index1++];
        }
        else
        arr[index++]=second[index2++];
    }

    while (index1<len1)
    {
        arr[index++]=first[index1++];
    }
    while (index2<len2)
    {
        arr[index++]=second[index2++];
    }
    // delete[] first;
    // delete[] second; 

}

void sortArray(int *arr,int s,int e){

    // Base Case

    if(s>=e){
        return ;
    }

    int mid=s+(e-s)/2;

    // For left part
    sortArray(arr,s,mid);
    // For Right Part
    sortArray(arr,mid+1,e);

    merge(arr,s,e);
    
}

int main(){

    int arr[7]={4,245,25,64,2,7,43};
    int n=7;

    cout<<endl<<endl<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl<<endl;
    

    sortArray(arr,0,6);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}