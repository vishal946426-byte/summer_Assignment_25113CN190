#include <iostream>
using namespace std;
int main()
{

    int arr[3];
    int key, found = -1;

    cout << " enter 5 elements of array" << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    cout << " enter the  element you went to search: ";
    cin >> key;

    for (int i = 0; i < 4; i++)
    {
        if (arr[i] == key)
        {
            found = i;
            break;
        }
    }

    if (found != -1)
    {
        cout << " element found at endex " << found << endl;
    }
    else
    {
        cout << " element not found in the array." << endl;
    }
    return 0;
}