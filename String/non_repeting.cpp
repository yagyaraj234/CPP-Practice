// #include<iostream>
// #include<string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
      
    
    string str;
    cin >> str;
    int rpt[26] = {0};

    for (int i = 0; i <str.length(); i++)
    {
        rpt[str[i] - 97]++;
    }
    for (int i = 0; i <str.length(); i++)
    {
        if (rpt[str[i] - 97] == 1)
        {
            cout << str[i] << endl;
            break;
        }
    }


    }

return 0;
} 
