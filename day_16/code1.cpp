#include <iostream>
#include <vector>
using namespace std;

int findmissingnum(vector<int> &arr, int n)
{
    int expectedsum = n * (n + 1) / 2;

    int actualsum = 0;
    for (int num : arr)
    {
        actualsum += num;
    }
    return expectedsum - actualsum;
}

int main()
{
    vector<int> arr = {5, 6, 7, 8, 10};
    int n = 6;
    cout << " missing number:" << findmissingnum(arr, n) << endl;
    return 0;
}