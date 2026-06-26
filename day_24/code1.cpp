#include <iostream>
using namespace std;

int main()
{
    string str1, str2;

    cout << " enter first string :";
    cin >> str1;

    cout << " enter second string :";
    cin >> str2;

    if (str1.length() == str2.length() && (str1 + str2).find(str2) != string ::npos)
        cout << " string rotation ";
    else
        cout << " not a rotation;";
    return 0;
}