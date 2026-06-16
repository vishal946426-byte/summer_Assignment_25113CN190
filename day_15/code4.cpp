#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {0, 1, 0, 2, 0, 3, 0, 4, 5};
    int n = sizeof(arr) / sizeof(arr[1]);
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;

            count++;
        }
    }
    cout << " array ofter moving xeroz : ";

    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}