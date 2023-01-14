#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int sqrtNum(int x){
    int s=0;
    int e=x;
    int ans=-1;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        int square= mid*mid;
        if(square<x){
            int ans=mid;
            s=mid+1;
        }
        else if(square==x){
            return mid;
        }
        else if(square>x){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    // return ans;
}

int main(){
    int n=36;
    // cin>>n;

    int num = sqrtNum(n);
    cout<<"the num is : "<<num<<endl;

    return 0;

}