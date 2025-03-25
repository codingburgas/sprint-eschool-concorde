#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm> 
#include "leaderboardEnlightenment.h"
#include "main.h"
#include "TestMenu.h"
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
    cout << "\033[38;2;0;180;200m" << setw(145) << "         _______ _       _      ________________        ________________ _       _______ _______ _      _________   _       _______ _______ ______  _______ _______ ______  _______ _______ _______ ______          " << "\033[0m" << endl;
    cout << "\033[38;2;0;180;200m" << setw(145) << "        (  ____ ( (    /( \\     \\__   __(  ____ |\\     /\\__   __(  ____ ( (    /(       (  ____ ( (    /\\__   __/  ( \\     (  ____ (  ___  (  __  \\(  ____ (  ____ (  ___ \\(  ___  (  ___  (  ____ (  __  \\         " << "\033[0m" << endl;
    cout << "\033[38;2;0;180;200m" << setw(145) << " ___ ___| (    \\|  \\  ( | (        ) (  | (    \\| )   ( |  ) (  | (    \\|  \\  ( | () () | (    \\|  \\  ( |  ) (     | (     | (    \\| (   ) | (  \\  | (    \\| (    )| (   ) | (   ) | (   ) | (    )| (  \\  )___ ___ " << "\033[0m" << endl;
    cout << "\033[38;2;0;180;200m" << setw(145) << "(___(___| (__   |   \\ | | |        | |  | |     | (___) |  | |  | (__   |   \\ | | || || | (__   |   \\ | |  | |     | |     | (__   | (___) | |   ) | (__   | (____)| (__/ /| |   | | (___) | (____)| |   ) (___(___)" << "\033[0m" << endl;
    cout << "\033[38;2;0;180;200m" << setw(145) << " ___ ___|  __)  | (\\ \\) | |        | |  | | ____|  ___  |  | |  |  __)  | (\\ \\) | |(_)| |  __)  | (\\ \\) |  | |     | |     |  __)  |  ___  | |   | |  __)  |     __|  __ ( | |   | |  ___  |     __| |   | |___ ___ " << "\033[0m" << endl;
    cout << "\033[38;2;0;180;200m" << setw(145) << "(___(___| (     | | \\   | |        | |  | | \\_  | (   ) |  | |  | (     | | \\   | |   | | (     | | \\   |  | |     | |     | (     | (   ) | |   ) | (     | (\\ (  | (  \\ \\| |   | | (   ) | (\\ (  | |   ) (___(___)" << "\033[0m" << endl;
    cout << "\033[38;2;0;180;200m" << setw(146) << "        | (____/| )  \\  | (____/___) (__| (___) | )   ( |  | |  | (____/| )  \\  | )   ( | (____/| )  \\  |  | |     | (____/| (____/| )   ( | (__/  | (____/| ) \\ \\_| )___) | (___) | )   ( | ) \\ \\_| (__/  )        " << "\033[0m" << endl;
    cout << "\033[38;2;0;180;200m" << setw(146) << "        (_______|/    )_(_______\\_______(_______|/     \\|  )_(  (_______|/    )_|/     \\(_______|/    )_)  )_(     (_______(_______|/     \\(______/(_______|/   \\__|/ \\___/(_______|/     \\|/   \\__(______/         " << "\033[0m" << endl;










    
    cout << "\033[38;2;0;180;200m" << "Name\t\tGrade\tScore (%)\tFinal Grade" << endl;
    cout << "\033[38;2;30;170;190m" << "-----------------------------------------" << endl;

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
        cout << name << "\t\t" << grade << "\t" << score << "%\t\t" << finalGrade << endl;
    }

    cout << "Enter 1 to return to the test menu or 2 to return to the main menu: ";
    int choice;
	cin >> choice;
	
    if (choice == 1) {
		testmenu();
	}
    else if (choice == 2) {
        main();
	}
	else {
		cout << "Invalid input, try again!" << endl;
	}


    file.close();
}
