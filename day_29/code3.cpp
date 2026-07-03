#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;

    cout << "Enter String: ";
    getline(cin, str);

    int choice;

    do
    {
        cout << "\n===== String Operations =====\n";
        cout << "1. Length\n";
        cout << "2. Reverse\n";
        cout << "3. Convert to Uppercase\n";
        cout << "4. Exit\n";

        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Length = "
                 << str.length();
            break;

        case 2:
        {
            string temp = str;
            reverse(temp.begin(),
                    temp.end());

            cout << "Reverse = "
                 << temp;
            break;
        }

        case 3:
        {
            string temp = str;

            for (char &c : temp)
                c = toupper(c);

            cout << "Uppercase = "
                 << temp;
            break;
        }
        }

    } while (choice != 4);

    return 0;
}