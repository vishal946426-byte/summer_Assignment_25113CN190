#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string str;
    cout << "neter string :";
    cin >> str;

    unordered_map<char, int> freq;

    for (char ch : str)
        freq[ch]++;

    for (char ch : str)
    {
        if (freq[ch] == 1)
        {
            cout << " forst non repeating char:" << ch;
            return 0;
        }
    }
    cout << "  no non repeating charecter found";
    return 0;
}