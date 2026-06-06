#include <iostream>
using namespace std;
int main()
{

    long long binary;
    cout << " enter binary number:";
    cin >> binary;

    long long originalbinary = binary;
    int decimal = 0;
    int base = 1;
    while (binary > 0)
    {
        int ldigit = binary % 10;
        decimal = (ldigit * base);
        base = base * 2;
        binary = binary / 10;
    }
    cout << "decimal of" << originalbinary << "is " << decimal << endl;
    return 0;
}