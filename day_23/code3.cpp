#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str1, str2;

    cout << " enter first string :";
    cin >> str1;

    cout << " enter second string :";
    cin >> str2;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if (str1 == str2)
        cout << " string are angrams";
    else
        cout << " string are not a angrams";

    return 0;
}