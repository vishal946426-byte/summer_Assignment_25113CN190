#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << " enter a string ";
    getline(cin, str);

    reverse(str.begin(), str.end());

    cout << " reversed string = " << str << endl;
    return 0;
}
