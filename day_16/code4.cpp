#include <iostream>
#include <vector>
using namespace std;

vector<int> removeduplicates(vector<int> &arr);
vector<int> uniquearr;
vector<int> removedulicate(vector<int> &arr)
{
    vector<int> uniquearr;
    for (int i = 0; i < arr.size(); i++)
    {
        bool isduplicate = false;

        for (int j = 0; j < uniquearr.size(); j++)
        {
            if (arr[i] == uniquearr[j])
            {
                isduplicate = true;
                break;
            }
        }

        if (!isduplicate)
        {
            uniquearr.push_back(arr[i]);
        }
    }
    return uniquearr;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 4, 4, 4, 5};
    vector<int> result = removeduplicates(arr);

    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}