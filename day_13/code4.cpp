#include <iostream>
using namespace std;

int main()
{
    int arr[4];

    int evenn = 0;
    int oddn = 0;

    cout << " enter 5 element of array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenn++;
        }
        else
        {
            oddn++;
        }
    }
    cout << " total even elements:" << evenn << endl;
    cout << " total oddn elements:" << oddn << endl;
    return 0;
}