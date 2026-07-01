#include <iostream>
#include <vector>
#include <limits>
using namespace std;

struct book
{
    int id;
    string title;
};

int main()
{

    vector<book> books;
    int choice;

    do
    {
        cout << "\n==== Library managment=====\n";
        cout << "\n1. add book";
        cout << "\n2. display books";
        cout << "\n3. exit";
        cout << "\n4. enter choice";
        cin >> choice;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << " invalid input!\n";
            continue;
        }
        switch (choice)
        {
        case 1:
        {
            book b;
            cout << " book ID";
            cin >> b.id;

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << " book title";
            getline(cin, b.title);

            books.push_back(b);
            cout << " book added successfully\n";
            break;
        }

        case 2:
            if (books.empty())
            {

                cout << " \n  no Library Books\n";
            }

            else
            {
                for (auto b : books)
                {
                    cout << "ID:" << b.id << " _ " << b.title << endl;
                }
            }
            break;
        case 3:
            cout << " exiting...\n";
        default:
            cout << "  invalid choice\n";
        }
    } while (choice != 3);
    return 0;
}