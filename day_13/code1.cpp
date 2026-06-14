#include <iostream>
using namespace std;

int main()
{
    int arr[4];
    cout << " enter 5 element of array";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << " the array element are:";
    for (int i = 0; i < 5; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}