#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> uniofarr(const vector<int> &arr1, const vector<int> &arr2)
{
    unordered_set<int> s;
    for (int x : arr1)
        s.insert(x);
    for (int x : arr2)
        s.insert(x);

    return vector<int>(s.begin(), s.end());
}
int main()
{
    vector<int> arr1 = {1, 2, 2, 3};
    vector<int> arr2 = {2, 3, 6, 8};
    vector<int> res = uniofarr(arr1, arr2);
    for (int x : res)
        cout << x << " ";
    return 0;
}