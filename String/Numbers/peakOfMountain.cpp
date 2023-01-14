#include<iostream>
using namespace std;

//   To find a number in a array 
  int binarySearch(int arr[],int pivot,int size,int key){
    int start=pivot;
    int end=size; 
    int mid=start+(end-start)/2;

    while (start<end)
    {

    if (arr[mid]==key)
    {
        return arr[mid];
    }
    else if (arr[mid]>key)
    {
        end=mid-1;
    }
    else if (arr[mid]<key){
        start=mid+1;
    }
    mid=start+(end-start)/2;
    }
         return mid;
  }
// To find The peak of an Array using Binary Search .
int peak(int arr[],int size){

    int s =1;
    int e= size-1;
    int mid=s+(e-s)/2;
    
    while (s<e)
    {
        if (arr[mid]<arr[mid+1])
        {
            s=mid+1;
            
        }
        else{
            e=mid;
        }
       mid=s+(e-s)/2; 
    }
    return s;
}

// ----------------- TO find the Pivot Element in an Array ------------------------------------------

int pivot(int arr[],int size){
   int  s=0;
   int  e=size-1;
   int m= s+(e-s)/2;
   while (s<e)
   {
    if (arr[m]>=arr[0])
    {
       s=m+1;
    }
    else{
        e=m;
    }
    m= s+(e-s)/2;
   }
   
     return s;
}

int findElement(int arr[],int size,int el){

int p = pivot(arr,size);

if (el>=arr[p] && el<=arr[size-1]){
    
     return binarySearch(arr,p,size-1,el);
}
else
return binarySearch(arr,0,p-1,el);


    
}

int main(){
//    ------------------------------ // To find The peak of an Array using Binary Search . -------------------

    // int arr[7]={4,5,6,7,8,3,1};
    // int arr2[10]={2,5,6,9,11,27,3,1,0};


    // cout<<" peak of the Mountain : " <<peak(arr,7)<<endl;
    // cout<<" peak of the Mountain : " <<peak(arr2,9)<<endl;


    // ----------------- TO find the Pivot Element in an Array ------------------------------------------


    int arr[6]={5,7,2,6,3,5};
    int arr2[6]={5,7,9,6,11,5};

    cout<<"The pivot element of an array is : "<<pivot(arr,6)<<endl;
    cout<<"The pivot element of an array is : "<<pivot(arr2,6)<<endl;


    // To find the element in an sorted rotated array


    cout<<"the element is : "<<findElement(arr,6,6)<<endl;



    return 0;
}