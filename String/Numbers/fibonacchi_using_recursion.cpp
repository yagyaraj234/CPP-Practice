#include<iostream>
using namespace std;
int fibonacchi(int i){

    if (i==0)
    {
        return 0;
    }
    else if (i==1)
    {
        return 1;
    }
        else return (fibonacchi(i-1)+fibonacchi(i-2));
    
    
}
int main(){
     

     int n;
     cin>>n;

     for (int i = 0; i < n; i++)
     {
        int fib=fibonacchi(i);
        cout<<fib<<endl;
     }
     
   
  
     return 0;
}