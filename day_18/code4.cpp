#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60};
    int target = 40;
    int left = 0,
        right = arr.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            cout << " element found at index : " << mid;
            return 0;
        }
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    cout << " element not found";
    return 0;
}