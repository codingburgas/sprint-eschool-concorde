#include <iostream>
#include <string>
#include "testmenu.h"
#include <windows.h>
using namespace std;



int main() {
	system("CLS");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Set the background color to white (240) and text color to light blue (11)
    SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_BLUE | FOREGROUND_GREEN);

    // Fill the console with spaces to change the background color
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    DWORD consoleSize = csbi.dwSize.X * csbi.dwSize.Y;
    DWORD charsWritten;
    FillConsoleOutputCharacter(hConsole, ' ', consoleSize, { 0, 0 }, &charsWritten);
    FillConsoleOutputAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE, consoleSize, { 0, 0 }, &charsWritten);

    // Move the cursor to the top left corner
    SetConsoleCursorPosition(hConsole, { 0, 0 });
    int optionMainMenu;
    cout << "                    /--------------------------------------------------------------------------------------/" << endl;
    cout << "                         _______  _______  _        _______  _______  _______  ______   _______ " << endl;
    cout << "                        (  ____ \\(  ___  )( (    /|(  ____ \\(  ___  )(  ____ )(  __  \\ (  ____ \\" << endl;
    cout << "                        | (    \\/| (   ) ||  \\  ( || (    \\/| (   ) || (    )|| (  \\  )| (    \\/" << endl;
    cout << "                        | |      | |   | ||   \\ | || |      | |   | || (____)|| |   ) || (__    " << endl;
    cout << "                        | |      | |   | || (\\ \\) || |      | |   | ||     __)| |   | ||  __)   " << endl;
    cout << "                        | |      | |   | || | \\   || |      | |   | || (\\ (   | |   ) || (      " << endl;
    cout << "                        | (____/\\| (___) || )  \\  || (____/\\| (___) || ) \\ \\__| (__/  )| (____/\\ " << endl;
    cout << "                        (_______/(_______)|/    )_)(_______/(_______)|/   \\__/(______/ (_______/ " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                     WELCOME TO CONCORDE!                         " << endl;
    cout << "                                                 CHOOSE ONE OF THE FOLLOWING:                     " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                   1. Head to Test Section                        " << endl;
    cout << "                                                     2. Exit the Program                          " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                    /--------------------------------------------------------------------------------------/" << endl;
    cout << "                                        Your choice: ";
    cin >> optionMainMenu;

    if (optionMainMenu == 1) {
        testmenu();
    }
    else if (optionMainMenu == 2) {
        return 1;
    }
    else {
        system("CLS");
        cout << "                    Invalid input, try again!" << endl;
    }

}