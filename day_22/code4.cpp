#include <iostream>
using namespace std;

int main()
{
    string str, ans = " ";

    cout << " enter string :";
    getline(cin, str);

    for (char c : str)
    {
        if (c != ' ')
        {
            ans += c;
        }
    }
    cout << " after removing spaces:" << ans;
    return 0;
}