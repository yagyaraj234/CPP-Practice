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

    vector<int> arr;

    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(65);
    arr.push_back(23);
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(65);
    arr.push_back(23);
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(65);
    arr.push_back(23);

    printAnArray(arr);

    cout << arr.at(3) << endl;
    cout << arr.front() << endl;
    cout << arr.back() << endl;
    cout << arr.data() << endl;
    cout << arr[2] << endl;

    return 0;
}