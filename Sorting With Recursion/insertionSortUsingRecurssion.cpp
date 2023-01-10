#include <iostream>
using namespace std;

void sortArray(int *arr, int n)
{
    
}

int main()
{

    int arr[7] = {4, 3, 73, 84, 2, 52, 5};

    sortArray(arr, 6);

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}