#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include "testRealism.h"
#include "leaderboardRealism.h"
#include "testmenu.h"
using namespace std;

void SocialRealismTest()
{
    // Get the console handle
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Set the background color to white and text color to dark blue
    SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_BLUE);

    string userName;
    string userGrade;
    cout << "                    Enter your name: ";
    cin.ignore();
    getline(cin, userName);
    cout << "                    Enter your grade (9A, 9B, 9V, 9G):  ";
    cin >> userGrade;
    //questions and their respective answersw
    string questionsEasy[20] = {
    "                    What is social realism?\n                    a) A literary movement depicting social issues.\n                    b) A fantasy genre.\n                    c) A political ideology.\n                    d) A historical period.\n                    ",
    "                    In which century did social realism emerge?\n                    a) 18th century.\n                    b) 19th century.\n                    c) 20th century.\n                    d) 21st century.\n                    ",
    "                    Who is the author of Father Goriot?\n                    a) Victor Hugo.\n                    b) Honore de Balzac.\n                    c) Gustave Flaubert.\n                    d) Emile Zola.\n                    ",
    "                    Who is the author of Madame Bovary?\n                    a) Emile Zola.\n                    b) Honore de Balzac.\n                    c) Gustave Flaubert.\n                    d) Victor Hugo.\n                    ",
    "                    In which country does Father Goriot take place?\n                    a) Germany.\n                    b) Italy.\n                    c) France.\n                    d) England.\n                    ",
    "                    In which country does Madame Bovary take place?\n                    a) France.\n                    b) Spain.\n                    c) Italy.\n                    d) Russia.\n                    ",
    "                    What is the name of the young student in Father Goriot?\na) Lucien de Rubempre.\n                    b) Eugene de Rastignac.\n                    c) Charles Bovary.\n                    d) Vautrin.\n                    ",
    "                    What is the name of Emma Bovary's husband?\n                    a) Eugene.\n                    b) Charles.\n                    c) Leon.\n                    d) Rodolphe.\n                    ",
    "                    What is the main theme of Father Goriot?\n                    a) Money and society.\n                    b) Love and betrayal.\n                    c) Adventure and heroism.\n                    d) Political conflict.\n                    ",
    "                    What is the main theme of Madame Bovary?\n                    a) Friendship.\n                    b) Illusions and reality.\n                    c) War and peace.\n                    d) Science and progress.\n                    ",
    "                    What does Madame Vauquer’s boarding house symbolize?\n                    a) Love and passion.\n                    b) Social hierarchy.\n                    c) Education.\n                    d) Political power.\n                    ",
    "                    What leads to Emma Bovary’s downfall?\n                    a) Her love for Charles.\n                    b) Debt and affairs.\n                    c) A tragic accident.\n                    d) Her devotion to family.\n                    ",
    "                    What was Father Goriot’s social status at the beginning of the novel?\n                    a) Wealthy merchant.\n                    b) Poor beggar.\n                    c) Noble aristocrat.\n                    d) Government official.\n                    ",
    "                    What genre is Madame Bovary?\n                    a) Fantasy.\n                    b) Science fiction.\n                    c) Realist novel.\n                    d) Gothic horror.\n                    ",
    "                    What genre is Father Goriot?\n                    a) Romantic novel.\n                    b) Realist novel.\n                    c) Epic poem.\n                    d) Satire.\n                    ",
    "                    Which literary movement came before social realism?\n                    a) Modernism.\n                    b) Romanticism.\n                    c) Symbolism.\n                    d) Surrealism.\n                    ",
    "                    What is the nature of Vautrin in Father Goriot?\n                    a) Innocent scholar.\n                    b) Criminal mastermind.\n                    c) Wealthy businessman.\n                    d) Religious leader.\n                    ",
    "                    What is the name of the town where the Bovarys live?\n                    a) Rouen.\n                    b) Yonville.\n                    c) Paris.\n                    d) Marseille.\n                    ",
    "                    What is Charles Bovary's profession?\n                    a) Doctor.\n                    b) Lawyer.\n                    c) Banker.\n                    d) Professor.\n                    ",
    "                    What happens to Father Goriot’s daughters?\n                    a) They become famous.\n                    b) They abandon him.\n                    c) They care for him.\n                    d) They move abroad.\n                    "
    };

    string questionsMedium[20] = {
     "                    What genre is Father Goriot?\n                    a) Romantic novel.\n                    b) Realist novel.\n                    c) Epic poem.\n                    d) Satire.\n                    ",
     "                    What genre is Madame Bovary?\n                    a) Fantasy.\n                    b) Science fiction.\n                    c) Realist novel.\n                    d) Gothic horror.\n                    ",
     "                    What is the main theme of Father Goriot?\n                    a) Money and society.\n                    b) Love and betrayal.\n                    c) Adventure and heroism.\n                    d) Political conflict.\n                    ",
     "                    What is the main theme of Madame Bovary?\n                    a) Friendship.\n                    b) Illusions and reality.\n                    c) War and peace.\n                    d) Science and progress.\n                    ",
     "                    What is Rastignac’s social status at the beginning?\n                    a) Poor student.\n                    b) Wealthy aristocrat.\n                    c) Middle-class merchant.\n                    d) Government official.\n                    ",
     "                    How did Father Goriot make his fortune?\n                    a) Through trade.\n                    b) Inheritance.\n                    c) Gambling.\n                    d) Banking.\n                    ",
     "                    What happens to Father Goriot’s daughters?\n                    a) They reject him.\n                    b) They care for him.\n                    c) They inherit his wealth.\n                    d) They move abroad.\n                    ",
     "                    Which character in Father Goriot is a criminal?\n                    a) Vautrin.\n                    b) Rastignac.\n                    c) Goriot.\n                    d) Madame Vauquer.\n                    ",
     "                    What is Emma Bovary’s husband’s profession?\n                    a) Doctor.\n                    b) Lawyer.\n                    c) Banker.\n                    d) Professor.\n                    ",
     "                    How does Emma Bovary die?\n                    a) Poisoning herself.\n                    b) Illness.\n                    c) Drowning.\n                    d) Murder.\n                    ",
     "                    What does Rastignac dream of achieving?\n                    a) Wealth and success.\n                    b) Love and happiness.\n                    c) Political power.\n                    d) Artistic fame.\n                    ",
     "                    What is Emma Bovary’s main flaw?\n                    a) Naivety.\n                    b) Wisdom.\n                    c) Honesty.\n                    d) Strength.\n                    ",
     "                    Who wrote The Human Comedy?\n                    a) Balzac.\n                    b) Flaubert.\n                    c) Zola.\n                    d) Hugo.\n                    ",
     "                    In which century did Balzac live?\n                    a) 19th century.\n                    b) 18th century.\n                    c) 20th century.\n                    d) 21st century.\n                    ",
     "                    In which century did Flaubert live?\n                    a) 19th century.\n                    b) 18th century.\n                    c) 20th century.\n                    d) 21st century.\n                    ",
     "                    How does Flaubert present reality?\n                    a) Objectively.\n                    b) Subjectively.\n                    c) Idealistically.\n                    d) Romantically.\n                    ",
     "                    What literary technique does Balzac use?\na) Detailed description.\n                    b) Symbolism.\n                    c) Allegory.\n                    d) Stream of consciousness.\n                    ",
     "                    What is Emma Bovary’s marriage like?\na) Unhappy.\n                    b) Passionate.\n                    c) Violent.\n                    d) Joyful.\n                    ",
     "                    How does Father Goriot end?\n                    a) Goriot dies poor.\n                    b) Goriot becomes rich.\n                    c) Goriot moves abroad.\n                    d) Goriot is arrested.\n                    ",
     "                    What does Rastignac say at the end of the novel?\n                    a) 'It’s between us now, Paris and me!'\n                    b) 'I regret nothing.'\n                    c) 'I have failed.'\n                    d) 'We must change the world!'\n                    "
    };

    string questionsHard[10] = {
     "                    Which literary movement came before social realism?\n                    a) Modernism.\n                    b) Romanticism.\n                    c) Symbolism.\n                    d) Surrealism.",
     "                    What main issue does Balzac reveal?\n                    a) The power of money.\n                    b) The struggles of war.\n                    c) The importance of family.\n                    d) The decline of nobility.",
     "                    What main issue does Flaubert reveal?\n                    a) Political corruption.\n                    b) Illusory dreams.\n                    c) The brutality of war.\n                    d) The rise of democracy.",
     "                    What does Madame Vauquer’s boarding house symbolize?\n                    a) Social hierarchy.\n                    b) Economic prosperity.\n                    c) Political corruption.\n                    d) Religious devotion.",
     "                    Which character in Father Goriot represents the criminal world?\n                    a) Vautrin.\n                    b) Rastignac.\n                    c) Madame Vauquer.\n                    d) Goriot.",
     "                    What literary method does Flaubert use?\n                    a) Objectivity.\n                    b) Sentimentalism.\n                    c) Allegory.\n                    d) Romantic idealism.",
     "                    What is Emma Bovary’s goal?\n                    a) To live like in a novel.\n                    b) To become a doctor.\n                    c) To rule a kingdom.\n                    d) To be a great writer.",
     "                    What happens to Emma Bovary’s husband?\n                    a) He dies of grief.\n                    b) He remarries.\n                    c) He moves away.\n                    d) He becomes wealthy.",
     "                    What does Madame Bovary criticize?\n                    a) Bourgeois values.\n                    b) Religious institutions.\n                    c) Political systems.\n                    d) Scientific advancements.",
     "                    What style does Balzac use?\n                    a) Realism.\n                    b) Romanticism.\n                    c) Naturalism.\n                    d) Symbolism."
    };

    string answersEasy[20] = {
    "a", "b", "b", "c", "c", "a", "b", "b", "a", "b",
    "b", "b", "a", "c", "b", "b", "b", "b", "a", "b"
    };


    string answersMedium[20] = {
    "b", "c", "a", "b", "a", "a", "a", "a", "a", "a",
    "a", "a", "a", "a", "a", "a", "a", "a", "a", "a"
    };

    string answersHard[10] = {
    "b", "a", "b", "a", "a", "a", "a", "a", "a", "a"
    };


    srand(time(0)); //sets the seed for random number generator

    string PickedQuestionEasy[10]; //array in which the picked easy questions will be stored
    string PickedQuestionMedium[6]; // array in which the picked medium questions will be stored
    string PickedQuestionHard[4]; // array in which the picked hard questions will be stored

    //arrays in which the asnwers to the picked question will be stored
    string PickedEasyAnswers[10];
    string PickedMediumAnswers[6];
    string PickedHardAnswers[4];

    int countEasy = 0; //this will be used to count that exactly 10 easy questions have been picked
    int countMedium = 0; //this will be used to count that exactly 6 medium questions have been picked
    int countHard = 0; //this will be used to count that exactly 4 hard questions have been picked


    //bool values that will be used to track whether a question has been used
    bool usedEasy[20] = { false };
    bool usedMedium[20] = { false };
    bool usedHard[10] = { false };


    int EasyArraycounter = 0; //will be used for the array PickedQuestionEasy
    //cycle to pick 10 random easy question
    while (countEasy != 10) {

        int EasyIndex = rand() % 20; //picks a random number from 0 to 19
        if (!usedEasy[EasyIndex]) {
            usedEasy[EasyIndex] = true;
            PickedQuestionEasy[EasyArraycounter] = questionsEasy[EasyIndex];
            PickedEasyAnswers[EasyArraycounter] = answersEasy[EasyIndex];

            countEasy++;
            EasyArraycounter++;
        }

    }


    int MediumArraycounter = 0; //will be used for the array PickedQuestionMedium
    //cycle to pick 6 random medium questions
    while (countMedium != 6) {

        int MediumIndex = rand() % 20; //picks a random number from 0 to 19
        if (!usedMedium[MediumIndex]) {
            usedMedium[MediumIndex] = true;
            PickedQuestionMedium[MediumArraycounter] = questionsMedium[MediumIndex];
            PickedMediumAnswers[MediumArraycounter] = answersMedium[MediumIndex];

            countMedium++;
            MediumArraycounter++;

        }
    }


    int HardArraycounter = 0; //will be used for the array PickedQuestionHard
    //cycle pick 4 random hard qusetipons
    while (countHard != 4) {

        int HardIndex = rand() % 10; //picks a random number from 0 to 9
        if (!usedHard[HardIndex]) {
            usedHard[HardIndex] = true;
            PickedQuestionHard[HardArraycounter] = questionsHard[HardIndex];
            PickedHardAnswers[HardArraycounter] = answersHard[HardIndex];

            countHard++;
            HardArraycounter++;
        }

    }









    float OverallRealism = 0; // these are the points from the test

    string EnteredAnswerEasy[10];
    string EnteredAnswerMedium[6];
    string EnteredAnswerHard[4];

    for (int i = 0; i < 10; i++) {

        cout << "                    " << PickedQuestionEasy[i] << endl;
        


        cout << "                                        Your choice: ";

        getline(cin, EnteredAnswerEasy[i]);

        if (EnteredAnswerEasy[i] == PickedEasyAnswers[i]) {
            OverallRealism += 1;
        }
        else {
            OverallRealism = OverallRealism;
        }

        system("cls");

    }

    for (int i = 0; i < 6; i++) {

        cout << "                    " << PickedQuestionMedium[i] << endl;
        

        cout << "                                        Your choice: ";

        getline(cin, EnteredAnswerMedium[i]);

        if (EnteredAnswerMedium[i] == PickedMediumAnswers[i]) {
            OverallRealism += 2;
        }
        else {
            OverallRealism = OverallRealism;
        }

        system("cls");

    }

    for (int i = 0; i < 4; i++) {

        cout << "                    " << PickedQuestionHard[i] << endl;
        

        cout << "                                        Your choice: ";

        getline(cin, EnteredAnswerHard[i]);



        if (EnteredAnswerHard[i] == PickedHardAnswers[i]) {
            OverallRealism += 3;
        }
        else {
            OverallRealism = OverallRealism;
        }

        system("cls");

    }

    float GradeRealism = (OverallRealism / 34) * 100;

    int FinalGrade;

    if (GradeRealism >= 0 && GradeRealism <= 55) {

        FinalGrade = 2;

    }

    if (GradeRealism >= 56 && GradeRealism <= 65) {

        FinalGrade = 3;

    }

    if (GradeRealism >= 66 && GradeRealism <= 79) {

        FinalGrade = 4;

    }

    if (GradeRealism >= 80 && GradeRealism <= 90) {

        FinalGrade = 5;

    }
    if (GradeRealism >= 91) {

        FinalGrade = 6;

    }

    cout << "Your final grade is: " << FinalGrade << endl;
    cout << "Your score is: " << fixed << setprecision(2) << GradeRealism << "%" << endl;

    ofstream leaderboard("leaderboardRealism.txt", ios::app);
    if (leaderboard.is_open()) {
        leaderboard << userName << ", " << userGrade << ", " << GradeRealism << "%, " << FinalGrade << endl;
        leaderboard.close();
    }
    else {
        cout << "Error: Unable to open leaderboard file." << endl;
    }


    char choice;
    cout << "Enter 'y/Y' if you wish to see the leaderboards for this test, or 'n/N' if you wish to return to the main menu: " << endl;
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        leaderboardRealism();
    }
    else if (choice == 'n' || choice == 'N') {
        testmenu();
    }
    else {
        cout << "Invalid input, returning to main menu." << endl;
        testmenu();
    }


}