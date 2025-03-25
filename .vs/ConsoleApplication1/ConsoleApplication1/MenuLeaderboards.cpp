#include <iostream>
#include <iomanip>
#include "leaderboardEnlightenment.h"
#include "leaderboardModernism.h"
#include "leaderboardRealism.h"
#include "main.h"


using namespace std;

void LeaderboardsMenu() {
	system("CLS");

    int PickedLeaderboard;

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

    cout << "\033[38;2;255;165;100m" << setw(165) << " _        _______  _______  ______   _______  _______  ______   _______  _______  _______  ______   _______ " << "\033[0m" << endl;
    cout << "\033[38;2;255;165;100m" << setw(165) << "( \\      (  ____ \\(  ___  )(  __  \\ (  ____ \\(  ____ )(  ___ \\ (  ___  )(  ___  )(  ____ )(  __  \\ (  ____ \\" << "\033[0m" << endl;
    cout << "\033[38;2;255;165;100m" << setw(165) << "| (      | (    \\/| (   ) || (  \\  )| (    \\/| (    )|| (   ) )| (   ) || (   ) || (    )|| (  \\  )| (    \\/" << "\033[0m" << endl;
    cout << "\033[38;2;255;165;100m" << setw(165) << "| |      | (__    | (___) || |   ) || (__    | (____)|| (__/ / | |   | || (___) || (____)|| |   ) || (_____ " << "\033[0m" << endl;
    cout << "\033[38;2;255;165;100m" << setw(165) << "| |      |  __)   |  ___  || |   | ||  __)   |     __)|  __ (  | |   | ||  ___  ||     __)| |   | |(_____  )" << "\033[0m" << endl;
    cout << "\033[38;2;255;165;100m" << setw(165) << "| |      | (      | (   ) || |   ) || (      | (\\ (   | (  \\ \\ | |   | || (   ) || (\\ (   | |   ) |      ) |" << "\033[0m" << endl;
    cout << "\033[38;2;255;165;100m" << setw(165) << "| (____/\\| (____/\\| )   ( || (__/  )| (____/\\| ) \\ \\__| )___) )| (___) || )   ( || ) \\ \\__| (__/  )/\\____) |" << "\033[0m" << endl;
    cout << "\033[38;2;255;165;100m" << setw(165) << "(_______/(_______/|/     \\|(______/ (_______/|/   \\__/|/ \\___/ (_______)|/     \\||/   \\__/(______/ \\_______)" << "\033[0m" << endl;

    cout << setw(80) << " " << endl;
    cout << setw(100) << " " << endl;

    cout << "\033[38;2;255;165;100m" << setw(125) << "Pick one of the following leaderboards: " << "\033[0m" << endl;
    cout << setw(100) << " " << endl;

    cout << "\033[38;2;255;165;100m" << setw(122) << "1. Leaderboard for Enlightment" << "\033[0m" << endl;
    cout << "\033[38;2;255;165;100m" << setw(122) << "2. Leaderboard for Modernism" << "\033[0m" << endl;
    cout << "\033[38;2;255;165;100m" << setw(122) << "3. Leaderboard for Social Realism" << "\033[0m" << endl;

    cout << setw(80) << " " << endl;
    cout << setw(100) << " " << endl;
   
    cout << "\033[38;2;255;165;100m" << setw(117) << "4. Go back to main menu" << "\033[0m" << endl;

    cout << setw(80) << " " << endl;
    cout << setw(100) << " " << endl;
    cout << "\033[94m" << setw(155) << "----------------------------------------------------------------------------------------------" << "\033[0m" << endl;
    cout << setw(100) << " " << endl;
    cout << "\033[94m" << setw(160) << "--------------------------------------------------------------------------------------------------------" << "\033[0m" << endl;
    cout << setw(117) << "Your choice: ";

    cin >> PickedLeaderboard;



    if (PickedLeaderboard == 1) {

        leaderboardEnlightenment();

    }
    else if (PickedLeaderboard == 2) {

        leaderboardModernism();

    }

    else if (PickedLeaderboard == 3) {

        leaderboardRealism();

    }

    else if (PickedLeaderboard == 4) {

        main();

    }
	else {
		system("CLS");
		cout << "Invalid input, try again!" << endl;
		LeaderboardsMenu();
	}



}
