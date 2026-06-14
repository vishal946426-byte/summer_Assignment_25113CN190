#include <iostream>
using namespace std;

int main()
{
    int arr[4];

    cout << " enter 5 elements " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int largest = arr[4];
    int smallest = arr[4];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    cout << " largest element :" << largest << endl;
    cout << " smallest element:" << smallest << endl;

    return 0;
}