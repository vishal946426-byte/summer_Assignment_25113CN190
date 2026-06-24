#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string str;
    cout << " enter a string :";
    getline(cin, str);

    for (char &ch : str)
    {
        ch = toupper(ch);
    }

    cout << " Uppercase string =" << str;

    return 0;
}
