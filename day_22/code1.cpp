#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << " enter string:";
    cin >> str;

    string temp = str;
    reverse(temp.begin(), temp.end());

    if (str == temp)
        cout << " pe;eindrome string";
    else
        cout << " not a pelindrome string";

    return 0;
}