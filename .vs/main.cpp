#include <iostream>
#include <string>
#include "testmenu.h"
using namespace std;



int main() {
    int optionMainMenu;
    cout << "/--------------------------------------------------------------------------------------/" << endl;
    cout << "     _______  _______  _        _______  _______  _______  ______   _______ " << endl;
    cout << "    (  ____ \\(  ___  )( (    /|(  ____ \\(  ___  )(  ____ )(  __  \\ (  ____ \\" << endl;
    cout << "    | (    \\/| (   ) ||  \\  ( || (    \\/| (   ) || (    )|| (  \\  )| (    \\/" << endl;
    cout << "    | |      | |   | ||   \\ | || |      | |   | || (____)|| |   ) || (__    " << endl;
    cout << "    | |      | |   | || (\\ \\) || |      | |   | ||     __)| |   | ||  __)   " << endl;
    cout << "    | |      | |   | || | \\   || |      | |   | || (\\ (   | |   ) || (      " << endl;
    cout << "    | (____/\\| (___) || )  \\  || (____/\\| (___) || ) \\ \\__| (__/  )| (____/\\ " << endl;
    cout << "    (_______/(_______)|/    )_)(_______/(_______)|/   \\__/(______/ (_______/ " << endl;
    cout << "                                                                              " << endl;
    cout << "                                 WELCOME TO CONCORDE!                         " << endl;
    cout << "                             CHOOSE ONE OF THE FOLLOWING:                     " << endl;
    cout << "                                                                              " << endl;
    cout << "                               1. Head to Test Section                        " << endl;
    cout << "                                 2. Exit the Program                          " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "/--------------------------------------------------------------------------------------/" << endl;
    cin >> optionMainMenu;

    if (optionMainMenu == 1) {
        testmenu();
    } else if (optionMainMenu == 2) {
        return 1;
    }
    else {
        system("CLS");
        cout << "Invalid input, try again!" << endl;
    }

}