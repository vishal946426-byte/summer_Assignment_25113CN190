#include <iostream>
using namespace std;

int main()
{

    int arr[3];
    cout << " enter 4 element :" << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    cout << " dupicate element are:";
    bool hasduplicate = false;

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                hasduplicate = true;
                break;
            }
        }
    }

    if (!hasduplicate)
    {
        cout << " none ";
    }
    cout << endl;

    return 0;
}