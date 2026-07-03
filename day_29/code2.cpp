#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Size of Array: ";
    cin >> n;

    int arr[100];

    cout << "Enter Elements:\n";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int choice;

    do
    {
        cout << "\n===== Array Operations =====\n";
        cout << "1. Display\n";
        cout << "2. Find Maximum\n";
        cout << "3. Find Minimum\n";
        cout << "4. Find Sum\n";
        cout << "5. Exit\n";

        cin >> choice;

        switch (choice)
        {
        case 1:
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            break;

        case 2:
        {
            int mx = arr[0];

            for (int i = 1; i < n; i++)
                if (arr[i] > mx)
                    mx = arr[i];

            cout << "Maximum = " << mx;
            break;
        }

        case 3:
        {
            int mn = arr[0];

            for (int i = 1; i < n; i++)
                if (arr[i] < mn)
                    mn = arr[i];

            cout << "Minimum = " << mn;
            break;
        }

        case 4:
        {
            int sum = 0;

            for (int i = 0; i < n; i++)
                sum += arr[i];

            cout << "Sum = " << sum;
            break;
        }
        }

    } while (choice != 5);

    return 0;
}