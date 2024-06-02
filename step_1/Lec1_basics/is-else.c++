#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter 1 for age check, 2 for option check: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int age;
            cout << "Enter your age: ";
            cin >> age;

            if (age >= 18) {
                cout << "You're an Adult" << endl;
            } else {
                cout << "You're a Minor" << endl;
            }
            break;
        }
        case 2: {
            int option;
            cout << "Enter an option (1-3): ";
            cin >> option;

            switch (option) {
                case 1:
                    cout << "Option 1 selected" << endl;
                    break;
                case 2:
                    cout << "Option 2 selected" << endl;
                    break;
                case 3:
                    cout << "Option 3 selected" << endl;
                    break;
                default:
                    cout << "Invalid option" << endl;
                    break;
            }
            break;
        }
        default:
            cout << "Invalid choice" << endl;
            break;
    }

    return 0;
}
