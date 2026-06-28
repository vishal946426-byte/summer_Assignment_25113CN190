#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int secret = rand() % 100 + 1;
    int guess;

    do
    {

        cout << "enter number (1-100):";
        cin >> guess;

        if (guess > secret)
            cout << " too high\n";
        else if (guess < secret)
        {
            cout << " too low\n";
        }
        else
            cout << " correct number!\n";

    } while (guess != secret);

    return 0;
}