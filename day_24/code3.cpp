#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string sen;
    cout << " enter senetence:";
    getline(cin, sen);

    stringstream ss(sen);
    string word, longest = "";

    while (ss >> word)
    {
        if (word.length() > longest.length())
            longest = word;
    }

    cout << " longest word:" << longest;
    return 0;
}