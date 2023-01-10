#include <iostream>
using namespace std;
void reverseString(string &str, int s, int e)
{
    if (s > e)
    {
        return;
    }
    swap(str[s], str[e]);
    s++;
    e--;

    reverseString(str, s, e);
}

bool checkPalindrome(string str, int s, int e)
{

    if (s == e)
        return true;

    if (str[s] != str[e])
        return false;

    if (s < e + 1)
        return checkPalindrome(str, s + 1, e - 1);

    return true;
}

int main()
{
    string str = "rgeegr";
    // reverseString(name, 0, name.length() - 1);
    bool name = checkPalindrome(str, 0, str.length() - 1);

    cout << endl
         << endl;
    if (name == true)
        cout << "Palindrome";

    else
        cout << "Not Palindrome";

    cout << endl
         << endl;

    return 0;
}