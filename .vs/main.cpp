#include <iostream>
#include <string>
using namespace std;



int main() {
    int option;

    while (true) {
        cout << "/----------MAIN MENU----------/" << endl;
        cout << "1. Option 1" << endl;
        cout << "2. Option 2" << endl;
        cout << "3. Option 3" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose an option: ";
        cin >> option;

        system("CLS");

        switch (option) {
        case 1: {
            int optionMainMenu;
            do {
                cout << "You chose option 1" << endl;
                cout << "Type 0 to return to the main menu: ";
                cin >> optionMainMenu;

                if (optionMainMenu != 0) {
                    system("CLS");
                    cout << "\033[31mInvalid input! Please enter 0 to return.\033[0m" << endl;
                }
            } while (optionMainMenu != 0);  // Keep asking until the user enters 0
            break;
        }
              break;
        case 2: {
            int optionMainMenu;
            do {
                cout << "You chose option 2" << endl;
                cout << "Type 0 to return to the main menu: ";
                cin >> optionMainMenu;

                if (optionMainMenu != 0) {
                    system("CLS");
                    cout << "\033[31mInvalid input! Please enter 0 to return.\033[0m" << endl;
                }
            } while (optionMainMenu != 0);  // Keep asking until the user enters 0
            break;
        }
              break;
        case 3: {
            int optionMainMenu;
            do {
                cout << "You chose option 3" << endl;
                cout << "Type 0 to return to the main menu: ";
                cin >> optionMainMenu;

                if (optionMainMenu != 0) {
                    system("CLS");
                    cout << "\033[31mInvalid input! Please enter 0 to return.\033[0m" << endl;
                }
            } while (optionMainMenu != 0);  // Keep asking until the user enters 0
            break;
        }
              break;
        case 4:
            cout << "\033[38;2;255;165;0mExiting...\033[0m" << endl;
            return 0;
        default:
            cout << "Please enter a valid number!" << endl;
            break;
        }
        system("pause");  // pauses the program and wait for the user to press any button to continue
        system("CLS");   // clears the screen
    }


}