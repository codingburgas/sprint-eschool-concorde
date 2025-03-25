#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm> 
#include <iomanip>
#include "leaderboardEnlightenment.h"
#include "MenuLeaderboards.h"
#include "TestMenu.h"
#include"main.h"
using namespace std;

void leaderboardEnlightenment() {
	system("CLS");
    ifstream file("leaderboardEnlightenment.txt");
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
    cout << "\033[38;2;0;180;200m" << setw(165) << " _______  _        _       _________ _______          _________ _______  _        _______  _______  _       _________" << "\033[0m" << endl;
    cout << "\033[38;2;0;180;200m" << setw(165) << "(  ____ \\( (    /|( \\      \\__   __/(  ____ \\|\\     /|\\__   __/(  ____ \\( (    /|(       )(  ____ \\( (    /|\\__   __/" << "\033[0m" << endl;
    cout << "\033[38;2;0;180;200m" << setw(165) << "| (    \\/|  \\  ( || (         ) (   | (    \\/| )   ( |   ) (   | (    \\/|  \\  ( || () () || (    \\/|  \\  ( |   ) (   " << "\033[0m" << endl;
    cout << "\033[38;2;0;180;200m" << setw(165) << "| (__    |   \\ | || |         | |   | |      | (___) |   | |   | (__    |   \\ | || || || || (__    |   \\ | |   | |   " << "\033[0m" << endl;
    cout << "\033[38;2;0;180;200m" << setw(165) << "|  __)   | (\\ \\) || |         | |   | | ____ |  ___  |   | |   |  __)   | (\\ \\) || |(_)| ||  __)   | (\\ \\) |   | |   " << "\033[0m" << endl;
    cout << "\033[38;2;0;180;200m" << setw(165) << "| (      | | \\   || |         | |   | | \\_  )| (   ) |   | |   | (      | | \\   || |   | || (      | | \\   |   | |   " << "\033[0m" << endl;
    cout << "\033[38;2;0;180;200m" << setw(165) << "| (____/\\| )  \\  || (____/\\___) (___| (___) || )   ( |   | |   | (____/\\| )  \\  || )   ( || (____/\\| )  \\  |   | |   " << "\033[0m" << endl;
    cout << "\033[38;2;0;180;200m" << setw(165) << "(_______/|/    )_)(_______/\\_______/(_______)|/     \\|   )_(   (_______/|/    )_)|/     \\|(_______/|/    )_)   )_(   " << "\033[0m" << endl;
    cout << setw(80) << " " << endl;
    cout << setw(80) << " " << endl;
    cout << "\033[38;2;0;180;200m" << setw(65) << "Name" << "\t\t" << setw(21) << "Grade" << "\t" << setw(18) << "Score" << "(%)\t" << setw(33) << "Final Grade" << endl;
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
        cout << setw(65) << name << "\t\t" << setw(20) << grade << "\t" << setw(20) << score << "%\t\t" << setw(20) << finalGrade << endl;
    }
    cout << setw(80) << " " << endl;
    cout << setw(142) << "Enter 1 to return to the leaderboard menu or 2 to return to the main menu ";
    int choice;
	cin >> choice;
	
    if (choice == 1) {
		LeaderboardsMenu();
	}
    else if (choice == 2) {
        main();
	}
	else {
		system("CLS");
		cout << "Invalid input, try again!" << endl;
		leaderboardEnlightenment();
	}


    file.close();
}
