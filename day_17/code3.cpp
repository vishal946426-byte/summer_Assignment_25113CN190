#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{

    vector<int> arr1 = {1, 3, 5};
    vector<int> arr2 = {2, 4, 6, 3, 1};

    set<int> s;

    for (int x : arr1)
        s.insert(x);
    for (int x : arr2)
        s.insert(x);
    cout << " unian : ";

    for (int x : s)
        cout << x << " ";

    return 0;
}