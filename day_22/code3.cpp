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

    cout << " charector freq's \n";

    for (auto x : freq)
        cout << x.first << " : " << x.second << endl;
    return 0;
}
