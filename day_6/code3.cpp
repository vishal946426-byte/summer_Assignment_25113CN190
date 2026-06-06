#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << " enter a number:";
    cin >> num;
    int count = 0;
    int temp = num;
    while (temp > 0)
    {
        if (temp % 2 == 1)
        {
            count++;
        }
        temp = temp / 2;
    }
    cout << "total set bits in" << num << "is:" << count << endl;
    return 0;
}