#include<iostream>
using namespace std;
    int sum(int arr[],int n){
        //Base
        if(n==0){
            return 0;
        }
        if(n==1){
            return arr[0];
        }
        int add = sum(arr+1,n-1);
        int addd=arr[0]+add;

        return addd;
    }

int main(){
    int arr[4]={3,15,2,7};

    cout<<sum(arr,4);


    return 0;
}