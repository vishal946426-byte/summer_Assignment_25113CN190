#include <iostream>
#include <vector>
using namespace std;

vector<int> mergearr(const vector<int> &arr1, const vector<int> &arr2)
{
    vector<int> result;
    int i = 0;
    int j = 0;
    int n = arr1.size();
    int m = arr2.size();

    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            result.push_back(arr1[i++]);
        }
        else
        {
            result.push_back(arr2[j++]);
        }
    }

    while (i < n)
        result.push_back(arr1[i++]);
    while (j < n)
        result.push_back(arr2[j++]);
    return result;
}
int main()
{
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};
    vector<int> res = mergearr(arr1, arr2);
    for (int x : res)
        cout << x << " ";
    return 0;
}