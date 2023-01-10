#include <iostream>
using namespace std;

int getPower(int a, int b)
{
    // Base Case

    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
        return a;

    // Recursive Relation

    int ans = getPower(a, b / 2);

    // if B is even

    if (b % 2 == 0)
        return ans * ans;

    // if B is Odd

    else
        return a * ans * ans;
}

int main()
{

    int a, p;
    cin >> a >> p;

    cout << getPower(a, p);

    // return 0;
}