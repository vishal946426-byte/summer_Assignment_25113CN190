#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string sentence;
    cout << " enter sentence : ";
    getline(cin, sentence);

    stringstream ss(sentence);
    string word;
    int count = 0;

    while (ss >> word)
        count++;
    cout << " total words= " << count;
    return 0;
}