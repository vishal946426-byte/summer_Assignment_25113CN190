#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {54, 34, 23, 53, 55, 22, 43};
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
                minindex = j;
        }

        swap(arr[i], arr[minindex]);
    }
    cout << " sorted array: ";
    for (int x : arr)
        cout << x << " ";
    return 0;
}
