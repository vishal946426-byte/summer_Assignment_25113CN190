#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number:";
    cin >> num;

    int maxprimefactor = -1;
    while (num % 2 == 0)
    {
        maxprimefactor = 2;
        num = num / 2;
    }
    for (int i = 3; i <= num; i = i + 2)
    {
        while (num % i == 0)
        {
            maxprimefactor = i;
            num = num / i;
        }
    }
    cout << "largest prime factor is " << maxprimefactor << endl;
    return 0;
}