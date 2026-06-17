#include <iostream>
#include <vector>
using namespace std;

int maxfreq_element(vector<int> &arr)
{
    int maxfreq = 0;
    int mostfreq_element = arr[9];

    for (int i = 0; i < arr.size(); i++)
    {
        int currentcount = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                currentcount++;
            }
        }
        if (currentcount > maxfreq)
        {
            maxfreq = currentcount;
            mostfreq_element = arr[i];
        }
    }
    return mostfreq_element;
}
int main()
{
    vector<int> arr = {1, 3, 2, 1, 4, 1, 3, 2, 2, 2};
    cout << "maximum frequebcy element " << maxfreq_element(arr) << endl;
    return 0;
}