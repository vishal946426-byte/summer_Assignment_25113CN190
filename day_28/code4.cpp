#include <iostream>
#include <vector>
using namespace std;

struct Contact
{
    string name;
    string phone;
};

int main()
{
    vector<Contact> contacts;
    int choice;

    do
    {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Contact c;
            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, c.name);

            cout << "Enter Phone Number: ";
            getline(cin, c.phone);

            contacts.push_back(c);
            cout << "Contact Added Successfully!\n";
            break;
        }

        case 2:
            if (contacts.empty())
            {
                cout << "No Contacts Found!\n";
            }
            else
            {
                for (auto c : contacts)
                {
                    cout << "Name : " << c.name
                         << "\nPhone: " << c.phone
                         << "\n\n";
                }
            }
            break;

        case 3:
        {
            string searchName;
            cin.ignore();

            cout << "Enter Name to Search: ";
            getline(cin, searchName);

            bool found = false;

            for (auto c : contacts)
            {
                if (c.name == searchName)
                {
                    cout << "Phone Number: "
                         << c.phone << endl;
                    found = true;
                }
            }

            if (!found)
                cout << "Contact Not Found!\n";

            break;
        }
        }

    } while (choice != 4);

    return 0;
}