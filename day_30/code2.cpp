#include <iostream>
#include <vector>
using namespace std;

struct Book
{
    int id;
    string title;
    bool issued;
};

int main()
{
    vector<Book> books;
    int choice;

    do
    {
        cout << "\n1.Add Book";
        cout << "\n2.Display Books";
        cout << "\n3.Issue Book";
        cout << "\n4.Exit\n";

        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Book b;

            cout << "Book ID: ";
            cin >> b.id;

            cin.ignore();

            cout << "Title: ";
            getline(cin, b.title);

            b.issued = false;

            books.push_back(b);
            break;
        }

        case 2:
            for (auto b : books)
            {
                cout << b.id
                     << " "
                     << b.title
                     << " ";

                if (b.issued)
                    cout << "Issued";
                else
                    cout << "Available";

                cout << endl;
            }
            break;

        case 3:
        {
            int id;

            cout << "Enter Book ID: ";
            cin >> id;

            for (auto &b : books)
            {
                if (b.id == id)
                    b.issued = true;
            }

            break;
        }
        }

    } while (choice != 4);

    return 0;
}