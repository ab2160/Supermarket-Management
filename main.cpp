#include "Supermarket.h" //Header file referred
#include <iostream>
#include <fstream> // Reading and writing from and into file
#include <string>
using namespace std;

int main()
{
    Product P;
    P.saveToFoodFile();
    P.saveToDetergentFile();
    P.saveToCannedFile();

    P.loadFromFood();
    P.loadFromDetergent();
    P.loadFromCanned();
    User U; // Shared object, never reset
    int choice;

    do
    {
        cout << "Supermarket Management System" << endl;
        cout << "1. Choose your role" << endl;
        cout << "2. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            U.chooseRole(P);
            break;
        case 2:
            cout << "Exiting system..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 2);

    return 0;
}
