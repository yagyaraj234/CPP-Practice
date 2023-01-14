#include<iostream>
using namespace std;
int main()
{
    
    int num=57684;
    int reverse=0;
    while (num!=0)  
    {
        cout<<reverse*10+num%10;
        num=num/10;
    }
    


    // cout<<


    return 0;
} // namespace std;
