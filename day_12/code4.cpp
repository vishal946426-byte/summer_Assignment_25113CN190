#include <iostream>
using namespace std;

bool isperfact(int n)
{
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cout << " enter a number:";
    cin >> n;
    if (isperfact(n))
    {
        cout << n << " is a perfact nume" << endl;
    }
    else
    {
        cout << n << " is not a perfact number" << endl;
    }
    return 0;
}