#include<iostream>
#include<map>

using namespace std;
int main(){
    // map<int,string> m;

    // m[1]="abc";
    // m[2]="bcd";
    // m[3]="cde";
    // m[4]="def";
    // m.insert({45,"lavaKing"});


    // for (auto it = m.begin(); it !=m.end() ;it++)
    // {
    //     cout<<it->first<<"  "<<it->second<<endl;
    // }
    
    // for (auto &t : m)
    // {
    //     cout<<t.first<<"  "<<t.second<<endl;
    // }


    // input out of maps


    map<string,int> maps;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin>>s;
        maps[s]++;
       
    }

    for (auto it:maps)
    {
        cout<<it.first<<"  "<<it.second<<endl;
    }
    
    
    
    



    return 0;
}