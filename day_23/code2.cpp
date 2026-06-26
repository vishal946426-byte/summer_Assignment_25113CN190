#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    string str;
    cout << " enter string";
    cin >> str;

    unordered_set<char> seen;

    for (char ch : str)

    {

        if (seen.count(ch))
        {
            cout << " first reporting charector " << ch;
            return 0;
        }
        seen.insert(ch);
    }
    cout << " no repeating charecton found ";
    return 0;
}