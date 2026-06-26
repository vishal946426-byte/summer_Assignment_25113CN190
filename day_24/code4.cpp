#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    string str;
    cout << " enter a string ";
    cin >> str;

    unordered_set<char> seen;
    string result = "";
    for (char ch : str)
    {
        if (!seen.count(ch))
        {
            result += ch;
            seen.insert(ch);
        }
    }
    cout << " after removing duplicates:" << result;
    return 0;
}