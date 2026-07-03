#include <iostream>
#include <vector>
using namespace std;

struct Product
{
    int id;
    string name;
    int quantity;
    double price;
};

int main()
{
    vector<Product> products;
    int choice;

    do
    {
        cout << "\n===== Inventory Management =====\n";
        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Product p;

            cout << "Product ID: ";
            cin >> p.id;

            cin.ignore();

            cout << "Product Name: ";
            getline(cin, p.name);

            cout << "Quantity: ";
            cin >> p.quantity;

            cout << "Price: ";
            cin >> p.price;

            products.push_back(p);
            break;
        }

        case 2:
            cout << "\nProducts List\n";

            for (auto p : products)
            {
                cout << p.id << " "
                     << p.name << " "
                     << p.quantity << " "
                     << p.price << endl;
            }
            break;
        }

    } while (choice != 3);

    return 0;
}