#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string str;
    cout << " enter string :";
    getline(cin, str);

    unordered_map<char, int> freq;

    for (char ch : str)
        freq[ch]++;

    char maxchar;
    int maxfreq = 0;

    for (auto x : freq)
    {
        if (x.second > maxfreq)
        {
            maxfreq = x.second;
            maxchar = x.first;
        }
    }

    cout << " maximum occurring char:" << maxchar << endl;

    cout << " frequency:" << maxfreq;

    return 0;
}