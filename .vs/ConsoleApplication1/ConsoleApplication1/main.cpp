#include <iostream>
#include <iomanip>
#include "testmenu.h"
#include "CreditsMenu.h"
#include "MenuLeaderboards.h"
using namespace std;



int main() {
	system("CLS");
    
    int optionMainMenu;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << "\033[94m" << setw(160) << "--------------------------------------------------------------------------------------------------------" << "\033[0m" << endl;
    cout << setw(80) << " " << endl;
    cout << "\033[94m" << setw(155) << "----------------------------------------------------------------------------------------------" << "\033[0m" << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << "\033[38;2;255;165;100m" << setw(145) << "_______  _______  _        _______  _______  _______  ______   _______ " << "\033[0m" << endl;
    cout << "\033[38;2;255;165;100m" << setw(145) << "(  ____ \\(  ___  )( (    /|(  ____ \\(  ___  )(  ____ )(  __  \\ (  ____ \\" << "\033[0m" << endl;
    cout << "\033[38;2;255;165;100m" << setw(145) << "| (    \\/| (   ) ||  \\  ( || (    \\/| (   ) || (    )|| (  \\  )| (    \\/" << "\033[0m" << endl;
    cout << "\033[38;2;255;165;100m" << setw(145) << "| |      | |   | ||   \\ | || |      | |   | || (____)|| |   ) || (__    " << "\033[0m" << endl;
    cout << "\033[38;2;255;165;100m" << setw(145) << "| |      | |   | || (\\ \\) || |      | |   | ||     __)| |   | ||  __)   " << "\033[0m" << endl;
    cout << "\033[38;2;255;165;100m" << setw(145) << "| |      | |   | || | \\   || |      | |   | || (\\ (   | |   ) || (      " << "\033[0m" << endl;
    cout << "\033[38;2;255;165;100m" << setw(146) << "| (____/\\| (___) || )  \\  || (____/\\| (___) || ) \\ \\__| (__/  )| (____/\\ " << "\033[0m" << endl;
    cout << "\033[38;2;255;165;100m" << setw(146) << "(_______/(_______)|/    )_)(_______/(_______)|/   \\__/(______/ (_______/ " << "\033[0m" << endl;
    cout << setw(80) << " " << endl;
    cout << setw(100) << " " << endl;
    cout << "\033[38;2;255;165;100m" << setw(120) << "WELCOME TO CONCORDE!" << "\033[0m" << endl;
    cout << "\033[38;2;255;165;100m" << setw(124) << "CHOOSE ONE OF THE FOLLOWING:" << "\033[0m" << endl;
    cout << setw(100) << " " << endl;
    cout << "\033[38;2;255;165;100m" << setw(120) << "1. Head to Test Section" << "\033[0m" << endl;
    cout << "\033[38;2;255;165;100m" << setw(120) << "2. Leaderboards" << "\033[0m" << endl;
    cout << "\033[38;2;255;165;100m" << setw(115) << "3. Credits" << "\033[0m" << endl;
    cout << "\033[38;2;255;165;100m" << setw(118) << "4. Exit Program" << "\033[0m" << endl;
    cout << setw(80) << " " << endl;
    cout << setw(100) << " " << endl;
    cout << "\033[94m" << setw(155) << "----------------------------------------------------------------------------------------------" << "\033[0m" << endl;
    cout << setw(100) << " " << endl;
    cout << "\033[94m" << setw(160) << "--------------------------------------------------------------------------------------------------------" << "\033[0m" << endl;
    cout << setw(117) << "Your choice: ";
    cin >> optionMainMenu;

    if (optionMainMenu == 1) {
        testmenu();
    }

    else if (optionMainMenu == 2) {
        LeaderboardsMenu();
    }
    
    else if (optionMainMenu == 3) {
        CreditsMenu();
    }
    else if (optionMainMenu == 4) {
        return 1;
	}
	else {
		system("CLS");
		cout << "Invalid input, try again!" << endl;
		main();

}
}