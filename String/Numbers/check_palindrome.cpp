#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num, s = 0, temp;
        cin >> num;
        temp = num;
        while (temp != 0)
        {
            s = s * 10 + temp % 10;
            temp = temp / 10;
        }
        if (s == num)
        {
            cout << "It's  Palindrome" << endl;
        }
        else
            cout << "It's not Palindrome" << endl;
    }
}