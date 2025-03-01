#include <iostream>
#include <string>
#include"MenuNum2.h"
#include"MainNum3.h"
#include"TestMenu.h"
using namespace std;



int main() {
    int optionMainMenu;
        cout << "/----------MAIN MENU----------/" << endl;
        cout << "1. Option 1" << endl;
        cout << "2. Option 2" << endl;
        cout << "3. Option 3" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose an option: ";
        cin >> optionMainMenu;

        if (optionMainMenu == 1) {
            TestMenu();
        } else if (optionMainMenu == 2) {
            MenuNum2();
        } else if (optionMainMenu == 3) {
            MainNum3();
        } else if (optionMainMenu == 4) {
            return 1;
        } else {
            system("CLS");
            cout << "Invalid input, try again!" << endl;
        }


    }
