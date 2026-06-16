#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[1]);
    int d = 2;

    d = d % n;
    reverse(arr, arr + n);
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);

    cout << "right  rotated array:";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}