#include<iostream>
#include<vector>

using namespace std;
void printAnArray(vector<int> v)
{

    cout << "The size of an array is : " << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
}

int main(){

    pair<int,string> p[5];

    p[0]=make_pair(45,"lavaking");
    p[1]=make_pair(5,"zingle bell");
    p[2]=make_pair(95,"singhisking");
    p[3]=make_pair(55,"ownData");
    p[4]={55,"fathershaab"};

    for (int i = 0; i < 5; i++)
    {
        cout<<"First : "<<p[i].first <<" Second : "<<p[i].second<<endl;
    }
    

    return 0;
}