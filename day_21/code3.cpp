#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string str;
    cout << " enter a string :";
    getline(cin, str);

    int vowels = 0, consonants = 0;

    for (char ch : str)
    {
        ch = tolower(ch);

        if (isalpha(ch))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;

            else

                consonants++;
        }
    }

    cout << " vowels =" << vowels << endl;
    cout << " consonants =" << consonants << endl;

    return 0;
}