#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{

    vector<int> arr1 = {1, 3, 5};
    vector<int> arr2 = {2, 4, 6, 3, 1};

    set<int> s(arr1.begin(), arr1.end());

    cout << " intersection : ";
    for (int x : arr2)
    {
        if (s.count(x))
            cout << x << " ";
    }
    return 0;
}
