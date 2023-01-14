#include<iostream>
using namespace std;
int main(){
     int t;
     cin>>t;
     while (t--)
     {
        int num,temp=0;
        cin>>num;
             for (int i = 2; i <=(num/2); i++)
             {
        if (num%i==0)
        { temp=1;
        break;
        }
     }
     if (temp==1)
     {
            cout<<num<<" is a not prime number"<<endl;  
        /* code */
     }
     
        else
        cout<<num<<" is  a prime number"<<endl;
             }
             
     

    return 0;
}