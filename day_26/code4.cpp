#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    char ans;

    cout << " Capital of india?\n";
    cout << "  a)delhi\n b)mumbai\n";
    cin >> ans;

    if (ans == 'a')
        score++;

    cout << " 2+2= ?\n";
    cout << "a) 3\n b) 4\n";
    cin >> ans;
    if (ans == 'b')
        score++;

    cout << " score= " << score << "/2";

    return 0;
}