#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {2, 4, 6, 5};

    unordered_map<int, int> make_pair;

    for (int x : arr1)
        make_pair[x]++;

    cout << " common element : ";

    for (int x : arr2)
    {
        if (make_pair[x] > 0)
            cout << x << " ";
    }
    return 0;
}