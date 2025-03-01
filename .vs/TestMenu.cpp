#include <iostream>
#include <string>
#include "testmenu.h"
#include "symbolistTest.h"
#include "SpleenTest.h"
#include "ConsoleApplication1/ConsoleApplication1/AutumnSongTest.h"

using namespace std;

void testmenu() {
    system("CLS");
    cout << "-/-----------------------------------------------------------------------------------------------------------------/-" << endl;
    cout << "    _________ _______  _______ _________   _______  _______  _______ __________________ _______  _       " << endl;
    cout << "    \\__   __/(  ____ \\(  ____ \\\\__   __/  (  ____ \\(  ____ \\(  ____ \\\\__   __/\\__   __/(  ___  )( (    /|" << endl;
    cout << "       ) (   | (    \\/| (    \\/   ) (     | (    \\/| (    \\/| (    \\/   ) (      ) (   | (   ) ||  \\  ( |" << endl;
    cout << "       | |   | (__    | (_____    | |     | (_____ | (__    | |         | |      | |   | |   | ||   \\ | |" << endl;
    cout << "       | |   |  __)   (_____  )   | |     (_____  )|  __)   | |         | |      | |   | |   | || (\\ \\) |" << endl;
    cout << "       | |   | (            ) |   | |           ) || (      | |         | |      | |   | |   | || | \\   |" << endl;
    cout << "       | |   | (____/\\/\\____) |   | |     /\\____) || (____/\\| (____/\\   | |   ___) (___| (___) || )  \\  |" << endl;
    cout << "       )_(   (_______/\\_______)   )_(     \\_______)(_______/(_______/   )_(   \\_______/(_______)|/    )_)" << endl;
    cout << "                                                                                                              " << endl;
    cout << "                                                                                                              " << endl;
    cout << "                                      CHOOSE ONE OF THE FOLLOWING TESTS:  " << endl;
    cout << "                                                                                                              " << endl;
    cout << "                                          1. Symbolist Movement" << endl;
    cout << "                                       2. Spleen - Charles Baudelaire" << endl;
    cout << "                                       3. Autumn Song - Paul Verlaine" << endl;
    cout << "                                           4. Return to Main Menu" << endl;
    cout << "                                                                                                              " << endl;
    cout << "                                                                                                              " << endl;
    cout << "                                                                                                              " << endl;
    cout << "-/-----------------------------------------------------------------------------------------------------------------/-" << endl;
    int optionTestMenu;
    cin >> optionTestMenu;

    if (optionTestMenu == 1) {
        SymbolistTest();
    }
    else if (optionTestMenu == 2) {
        SpleenTest();
    }
    else if (optionTestMenu == 3) {
        AutumnSongTest();
    }
    else if (optionTestMenu == 4) {
        return;
    }
    else {
        system("CLS");
        cout << "Invalid input, try again!" << endl;
    }
}
