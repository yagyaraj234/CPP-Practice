#include<iostream>
using namespace std;

int main(){
     int t;
     cin>>t;
     while (t--)
     {
    int n;
    cin>>n;
    n=n%10;
            if (n==1 || n==0){
                cout<<"it's a binary number"<<endl;
            }
            else
            cout<<"it's not a binary number "<<endl;
     }
     

    return 0;
}