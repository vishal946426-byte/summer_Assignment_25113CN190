#include <iostream>
#include <vector>
using namespace std;

void findpair(vector<int> &arr, int target)
{
    bool found = false;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << " pair found:(" << arr[i] << " ," << arr[j] << ")" << endl;
                found = true;
                return;
            }
        }
    }
    if (!found)
    {
        cout << "no pair found with the given sum." << endl;
    }
}
int main()
{
    vector<int> arr = {10, 20, 30, 40, 45, 60, 80};
    int target = 70;
    findpair(arr, target);
    return 0;
}
