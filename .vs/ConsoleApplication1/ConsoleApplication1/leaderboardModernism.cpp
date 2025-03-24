#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm> 
#include "leaderboardModernism.h"
#include "main.h"
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

    cout << "===== Modernism Leaderboard =====" << endl;
    cout << "Name\t\tGrade\tScore (%)\tFinal Grade" << endl;
    cout << "-----------------------------------------" << endl;

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
