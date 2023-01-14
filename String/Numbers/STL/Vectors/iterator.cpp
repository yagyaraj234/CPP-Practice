#include <iostream>
#include <vector>
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

int main()
{

    vector<int> vec = {4, 63, 2, 52, 2, 4};
    vector<int>::iterator v=vec.begin();


    for (v=vec.begin();v!=vec.end();++v)
    {
        cout<<*v<<" ";
    }

    cout<<endl;

    
    


    return 0;
}