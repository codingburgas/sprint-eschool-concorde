#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm> 
#include <iomanip>
#include "leaderboardModernism.h"
#include "MenuLeaderboards.h"
#include "TestMenu.h"
using namespace std;

void leaderboardModernism() {
    system("CLS");
    ifstream file("leaderboardModernism.txt");
    if (!file) {
        cout << "Error: Could not open leaderboard file!" << endl;
        return;
    }

    string line;
    string name;
    string grade;
    string scoreStr;  // Store score as string to remove the percentage symbol
    double score;
    int finalGrade;

    // Skip the header line
    getline(file, line);

    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << "\033[38;2;30;170;190m" << setw(160) << "--------------------------------------------------------------------------------------------------------" << "\033[0m" << endl;
    cout << setw(80) << " " << endl;
    cout << "\033[38;2;30;170;190m" << setw(155) << "----------------------------------------------------------------------------------------------" << "\033[0m" << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << "\033[38;2;0;180;200m" << setw(148) << "  _______  _______  ______   _______  _______  _       _________ _______  _______ " << "\033[0m" << endl;
    cout << "\033[38;2;0;180;200m" << setw(148) << " (       )(  ___  )(  __  \\ (  ____ \\(  ____ )( (    /|\\__   __/(  ____ \\(       )" << "\033[0m" << endl;
    cout << "\033[38;2;0;180;200m" << setw(148) << " | () () || (   ) || (  \\  )| (    \\/| (    )||  \\  ( |   ) (   | (    \\/| () () |" << "\033[0m" << endl;
    cout << "\033[38;2;0;180;200m" << setw(148) << " | || || || |   | || |   ) || (__    | (____)||   \\ | |   | |   | (_____ | || || |" << "\033[0m" << endl;
    cout << "\033[38;2;0;180;200m" << setw(148) << " | |(_)| || |   | || |   | ||  __)   |     __)| (\\ \\) |   | |   (_____  )| |(_)| |" << "\033[0m" << endl;
    cout << "\033[38;2;0;180;200m" << setw(148) << " | |   | || |   | || |   ) || (      | (\\ (   | | \\   |   | |         ) || |   | |" << "\033[0m" << endl;
    cout << "\033[38;2;0;180;200m" << setw(148) << " | )   ( || (___) || (__/  )| (____/\\| ) \\ \\__| )  \\  |___) (___/\\____) || )   ( |" << "\033[0m" << endl;
    cout << "\033[38;2;0;180;200m" << setw(147) << " |/     \\|(_______)(______/ (_______/|/   \\__/|/    )_\\_______/\\_______)|/     \\|" << "\033[0m" << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << "\033[38;2;0;180;200m" << setw (65) << "Name" << "\t\t" << setw(21) << "Grade" << "\t" << setw(18) << "Score" << "(%)\t" << setw(33) << "Final Grade" << endl;
    cout << "\033[38;2;30;170;190m" << setw(160) << "--------------------------------------------------------------------------------------------------------" << endl;
    

    // Read the file line by line
    while (getline(file, line)) {
        stringstream ss(line);  // Use stringstream to split the line
        getline(ss, name, ','); // Read name until the first comma
        getline(ss, grade, ','); // Read grade until the second comma
        getline(ss, scoreStr, ','); // Read score string until the third comma

        // Remove the '%' from the score string before converting to double
        scoreStr.erase(remove(scoreStr.begin(), scoreStr.end(), '%'), scoreStr.end());
        stringstream(scoreStr) >> score;  // Convert score to double

        ss >> finalGrade; // Read finalGrade

        // Print the values read from the file
        cout << setw(65) << name << "\t\t" << setw(20) <<  grade << "\t" << setw(20) << score << "%\t\t" << setw(20) << finalGrade << endl;
    }
    cout << "" << endl;
    cout << setw(143) << "Enter 1 to return to the test menu or 2 to return to the leaderboard menu. ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        testmenu();
    }
    else if (choice == 2) {
        LeaderboardsMenu();
    }
    else {
		system("CLS");
        cout << "Invalid input, try again!" << endl;
		leaderboardModernism();
    }


    file.close();
}
