#include<bits/stdc++.h>
using namespace std;
int printArray(int arr[],int s){
    for (int i = 0; i < s; i++){
        cout<<arr[i]<<"  ";
    }   
   cout<< endl;
}
int evaluation(int arrr[],int size,int k){
    int s=0;
    while (s<=size)    
    {
        if(arrr[s]==arrr[s+1]){
            cin>>arrr[s];
            s=s+2;
        }
    }
    printArray(arrr,s);
}

string fillSpace(string &s){
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            s.push_back('@');
            s.push_back('4');
            s.push_back('0');
        }
        else
        s.push_back(s[i]);
    }

    // return s;
    cout<<s;
}

int main()
{
    // int n,k;
    // cout<<"enter the value of n and k : ";
    // cin>>n>>k;

    // int arr[n], arr2[k];
    // for(int i=0;i<n;i++){

    //     cin>>arr[i];

    // }

    // int l,m;
    // cout<<"enter the value of l and m :";
    // cin>>l>>m;
    // for (int j = 0; j < k; j++)
    // {
    //     if(arr2[j]==l){
    //         cin>>arr2[j];
    //     }
    //     else if(arr2[j]==m){
    //         cin>>arr2[j];
    //     }
    // }

    // printArray(arr2,k);
    

    // evaluation(arr,n,k);

    string s;
    getline(cin,s);

    cout<< s;

    cout<<fillSpace(s)<<endl;
    return 0;
} 
