#include<iostream>
using namespace std;
int main(){

    int num,num2,val=0;
    cin>>num;
    num2=num;
    while (num2!=0)
    {
        int r = num2%10;
        val += r*r*r;
        num2=num2/10;
    }

        if (num==val)
        {
            /* code */
            cout<<num <<" is armstong number ";
        }
        else
        cout<<num << " is not a armstong number";
        /* code */
    
    return 0;
}