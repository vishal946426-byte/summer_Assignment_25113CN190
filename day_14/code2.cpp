#include <iostream>
using namespace std;
int main()
{
    int arr[3];
    int key, count = 0;

    cout << " enter 4 element of array:" << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    cout << " enetr the element to find its frequency:";
    cin >> key;

    for (int i = 0; i < 4; i++)
    {
        if (arr[i] == key)
        {
            count++;
        }
    }
    cout << " frequency of " << key << " is: " << count << endl;
    return 0;
}