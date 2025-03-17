#include <iostream>
#include "testmenu.h"
#include "Enlightenment.h"
#include "testRealism.h"
#include "Modernism.h" 
#include "main.h"

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
    cout << "                                          1. Age of Enlightenment" << endl;
    cout << "                                                2. Modernism" << endl;
    cout << "                                              3. Social Realism" << endl;
    cout << "                                           4. Return to Main Menu" << endl;
    cout << "                                                                                                              " << endl;
    cout << "                                                                                                              " << endl;
    cout << "                                                                                                              " << endl;
    cout << "-/-----------------------------------------------------------------------------------------------------------------/-" << endl;
    int optionTestMenu;
    cin >> optionTestMenu;

    if (optionTestMenu == 1) {
        AgeOfenlightenmentTest();
    }
    else if (optionTestMenu == 2) {
        ModernismTest();
    }
    else if (optionTestMenu == 3) {
        SocialRealismTest();
    }
    else if (optionTestMenu == 4) {
        main();
    }
    else {
        system("CLS");
        cout << "Invalid input, try again!" << endl;
    }
}