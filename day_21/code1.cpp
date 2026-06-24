#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "enter a string ";
    getline(cin, str);

    int length = 0;

    for (char ch : str)
    {
        length++;
    }

    cout << " lenght of string =" << length << endl;

    return 0;
}
