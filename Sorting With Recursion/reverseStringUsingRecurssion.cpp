#include <iostream>
using namespace std;

void reverseString(string &str, int s, int e)
{

    if (s > e){
        return;
    }

    swap(str[s], str[e]);
    s++;
    e--;

    reverseString(str, s, e);
}

int main()
{

    string name = "HaramKhor";

    reverseString(name, 0, name.length()-1);
    cout << name << endl;

    return 0;
}