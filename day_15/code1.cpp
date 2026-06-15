#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 2, 34, 32, 44};
    int n = sizeof(arr) / sizeof(arr);

    reverse(arr, arr + n);

    cout << " revesred arry:";
    for (int x : arr)
        cout << x << " ";
    cout << endl;
    return 0;
}