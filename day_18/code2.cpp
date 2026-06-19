#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {54, 34, 23, 53, 55, 22, 43};
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }

    cout << " sorted array: ";
    for (int x : arr)
        cout << x << " ";

    return 0;
}