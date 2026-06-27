#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string a, string b)
{
    return a.length() < b.length();
}

int main()
{
    vector<string> words = {
        " apple",
        " cat",
        "element"};

    sort(words.begin(), words.end(), cmp);

    for (string x : words)
        cout << x << " ";

    return 0;
}
