#include <iostream>
using namespace std;
int main()
{
    int num, count = 0;
    cout << "enter a number: ";
    cin >> num;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    cout << "tatal digits=" << count;
    return 0;
}