#include <iostream>
#include <iomanip>
#include "testmenu.h"
#include "Enlightenment.h"
#include "testRealism.h"
#include "Modernism.h" 
#include "main.h"

using namespace std;

void testmenu() {

    system("CLS");
    int optionTestMenu;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << setw(179) << "\033[38;5;135m-------------------------------------------------------------------------------------------------------------------\033[0m" << endl;
    cout << setw(100) << " " << endl;
    cout << setw(174) << "\033[38;5;135m-----------------------------------------------------------------------------------------------------------\033[0m" << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << setw(170) << "\033[38;5;228m_________ _______  _______ _________   _______  _______  _______ __________________ _______  _       \033[0m" << endl;
    cout << setw(170) << "\033[38;5;228m\\__   __/(  ____ \\(  ____ \\\\__   __/  (  ____ \\(  ____ \\(  ____ \\\\__   __/\\__   __/(  ___  )( (    /|\033[0m" << endl;
    cout << setw(170) << "\033[38;5;228m   ) (   | (    \\/| (    \\/   ) (     | (    \\/| (    \\/| (    \\/   ) (      ) (   | (   ) ||  \\  ( |\033[0m" << endl;
    cout << setw(170) << "\033[38;5;228m   | |   | (__    | (_____    | |     | (_____ | (__    | |         | |      | |   | |   | ||   \\ | |\033[0m" << endl;
    cout << setw(170) << "\033[38;5;228m   | |   |  __)   (_____  )   | |     (_____  )|  __)   | |         | |      | |   | |   | || (\\ \\) |\033[0m" << endl;
    cout << setw(170) << "\033[38;5;228m   | |   | (            ) |   | |           ) || (      | |         | |      | |   | |   | || | \\   |\033[0m" << endl;
    cout << setw(170) << "\033[38;5;228m   | |   | (____/\\/\\____) |   | |     /\\____) || (____/\\| (____/\\   | |   ___) (___| (___) || )  \\  |\033[0m" << endl;
    cout << setw(170) << "\033[38;5;228m   )_(   (_______/\\_______)   )_(     \\_______)(_______/(_______/   )_(   \\_______/(_______)|/    )_)\033[0m" << endl;
    cout << setw(80) << " " << endl;
    cout << setw(100) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << setw(138) << "\033[38;5;228mCHOOSE ONE OF THE FOLLOWING TESTS:\033[0m" << endl;
    cout << setw(80) << " " << endl;
    cout << setw(100) << " " << endl;
    cout << setw(131) << "\033[38;5;228m1. Age of Enlightenment\033[0m" << endl;
    cout << setw(126) << "\033[38;5;228m2. Modernism\033[0m" << endl;
    cout << setw(129) << "\033[38;5;228m3. Social Realism\033[0m" << endl;
    cout << setw(131) << "\033[38;5;228m4. Return to Main Menu\033[0m" << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << setw(100) << " " << endl;
    cout << setw(174) << "\033[38;5;135m-----------------------------------------------------------------------------------------------------------\033[0m" << endl;
    cout << setw(100) << " " << endl;
    cout << setw(179) << "\033[38;5;135m-------------------------------------------------------------------------------------------------------------------\033[0m" << endl;
    cout << setw(113) << "Your choice: ";
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