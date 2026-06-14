#include <iostream>
using namespace std;

int main()
{
    int arr[3];

    cout << " enter a 4 element : " << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    int largest = arr[3];
    int seclargest = -1;

    for (int i = 1; i < 4; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if (arr[i] < largest)
        {
            if (seclargest == -1 || arr[i] > seclargest)
            {
                seclargest = arr[i];
            }
        }
    }

    if (seclargest != -1)
    {
        cout << " second largest element is." << seclargest << endl;
    }
    else
    {
        cout << " ther is no second largest element" << endl;
    }
    return 0;
}