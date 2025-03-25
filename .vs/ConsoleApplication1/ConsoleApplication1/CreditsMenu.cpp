#include <iostream>
#include <iomanip>
#include"CreditsMenu.h"
#include"main.h"
using namespace std;

void CreditsMenu() {
	system("CLS");
	int choiceCredits;
    cout << setw(80) << "" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(80) << "" << endl;
    cout << "\033[38;5;214m" << setw(155) << "----------------------------------------------------------------------------------------------\033[0m" << endl;
    cout << setw(80) << "" << endl;
    cout << "\033[38;5;214m" << setw(159) << "------------------------------------------------------------------------------------------------------\033[0m" << endl;
    cout << "\033[38;5;214m" << setw(135) << "   _____  _____   ______  _____  _____  _______  _____\033[0m " << endl;
    cout << "\033[38;5;214m" << setw(135) << "  / ____||  __ \\ |  ____||  __ \\|_   _||__   __|/ ____|\033[0m" << endl;
    cout << "\033[38;5;214m" << setw(135) << " | |     | |__) || |__   | |  | | | |     | |  | (___  \033[0m" << endl;
    cout << "\033[38;5;214m" << setw(135) << " | |     |  _  / |  __|  | |  | | | |     | |   \\___ \\ \033[0m" << endl;
    cout << "\033[38;5;214m" << setw(135) << " | |____ | | \\ \\ | |____ | |__| |_| |_    | |   ____) |\033[0m" << endl;
    cout << "\033[38;5;214m" << setw(135) << "  \\_____||_|  \\_\\|______||_____/|_____|   |_|  |_____/ \033[0m" << endl;
    cout << setw(80) << "" << endl;
    cout << "\033[38;5;214m" << setw(135) << "Here you can find everyone who has participated\033[0m" << endl;
    cout << "\033[38;5;214m" << setw(130) << " in creating the Concorde project.\033[0m" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(80) << "" << endl;
    cout << "\033[38;5;214m" << setw(129) << "Bojidar Georgiev (9B) - Scrum Trainer\033[0m" << endl;
    cout << "\033[38;5;214m" << setw(132) << "Stilian Palazov (9B) - Front-end Developer\033[0m" << endl;
    cout << "\033[38;5;214m" << setw(132) << "Kristiqn Andreev (9G) - Back-end Developer\033[0m" << endl;
    cout << "\033[38;5;214m" << setw(129) << "Mihail Karanikolov (9G) - Designer\033[0m " << endl;
    cout << setw(80) << "" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(80) << "" << endl;
    cout << "\033[38;5;214m" << setw(159) << "------------------------------------------------------------------------------------------------------\033[0m" << endl;
    cout << setw(80) << "" << endl;
    cout << "\033[38;5;214m" << setw(155) << "----------------------------------------------------------------------------------------------\033[0m" << endl;
    cout << setw(80) << "" << endl;
    

    cout << "\033[38;5;214m" << setw(130) << "Enter 1 to return to the main menu: \033[0m";
    cin >> choiceCredits;
	if (choiceCredits == 1) {
		main();
	}
	else {
		system("CLS");		
		CreditsMenu();
        cout << "\033[38;5;214m" << setw(130) << "Invalid input. Please enter 1 to return to the main menu: \033[0m";
	}

}
