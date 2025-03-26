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
   
    system("CLS");
    string userName;
    string userGrade;
    cout << setw(80) << "" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(175) << "\033[38;2;0;150;170m-----------------------------------------------------------------------------------------\033[0m" << endl;
    cout << setw(172) << "\033[38;2;0;150;170m-----------------------------------------------------------------------------------\033[0m" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(173) << "\033[38;2;0;150;170m                      Welcome to the Social Realism test!                      \033[0m" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(172) << "\033[38;2;0;150;170m-----------------------------------------------------------------------------------\033[0m" << endl;
    cout << setw(175) << "\033[38;2;0;150;170m-----------------------------------------------------------------------------------------\033[0m" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(115) << " Enter your name: ";
    cin.ignore();
    getline(cin, userName);
    cout << setw(127) << "Enter your grade(9A, 9B, 9V, 9G)  ";
    cin >> userGrade;


    //questions and their respective answersw
    string questionsEasy[20] = {
    string(84, ' ') + "What is social realism?\n" + string(84, ' ') + "a) A literary movement depicting social issues.\n" + string(84, ' ') + "b) A fantasy genre.\n" + string(84, ' ') + "c) A political ideology.\n" + string(84, ' ') + "d) A historical period.",
    string(84, ' ') + "In which century did social realism emerge?\n" + string(84, ' ') + "a) 18th century.\n" + string(84, ' ') + "b) 19th century.\n" + string(84, ' ') + "c) 20th century.\n" + string(84, ' ') + "d) 21st century.",
    string(84, ' ') + "Who is the author of Father Goriot?\n" + string(84, ' ') + "a) Victor Hugo.\n" + string(84, ' ') + "b) Honore de Balzac.\n" + string(84, ' ') + "c) Gustave Flaubert.\n" + string(84, ' ') + "d) Emile Zola.",
    string(84, ' ') + "Who is the author of Madame Bovary?\n" + string(84, ' ') + "a) Emile Zola.\n" + string(84, ' ') + "b) Honore de Balzac.\n" + string(84, ' ') + "c) Gustave Flaubert.\n" + string(84, ' ') + "d) Victor Hugo.",
    string(84, ' ') + "In which country does Father Goriot take place?\n" + string(84, ' ') + "a) Germany.\n" + string(84, ' ') + "b) Italy.\n" + string(84, ' ') + "c) France.\n" + string(84, ' ') + "d) England.",
    string(84, ' ') + "In which country does Madame Bovary take place?\n" + string(84, ' ') + "a) France.\n" + string(84, ' ') + "b) Spain.\n" + string(84, ' ') + "c) Italy.\n" + string(84, ' ') + "d) Russia.",
    string(84, ' ') + "What is the name of the young student in Father Goriot?\n" + string(84, ' ') + "a) Lucien de Rubempre.\n" + string(84, ' ') + "b) Eugene de Rastignac.\n" + string(84, ' ') + "c) Charles Bovary.\n" + string(84, ' ') + "d) Vautrin.",
    string(84, ' ') + "What is the name of Emma Bovary's husband?\n" + string(84, ' ') + "a) Eugene.\n" + string(84, ' ') + "b) Charles.\n" + string(84, ' ') + "c) Leon.\n" + string(84, ' ') + "d) Rodolphe.",
    string(84, ' ') + "What is the main theme of Father Goriot?\n" + string(84, ' ') + "a) Money and society.\n" + string(84, ' ') + "b) Love and betrayal.\n" + string(84, ' ') + "c) Adventure and heroism.\n" + string(84, ' ') + "d) Political conflict.",
    string(84, ' ') + "What is the main theme of Madame Bovary?\n" + string(84, ' ') + "a) Friendship.\n" + string(84, ' ') + "b) Illusions and reality.\n" + string(84, ' ') + "c) War and peace.\n" + string(84, ' ') + "d) Science and progress.",
    string(84, ' ') + "What does Madame Vauquer’s boarding house symbolize?\n" + string(84, ' ') + "a) Love and passion.\n" + string(84, ' ') + "b) Social hierarchy.\n" + string(84, ' ') + "c) Education.\n" + string(84, ' ') + "d) Political power.",
    string(84, ' ') + "What leads to Emma Bovary’s downfall?\n" + string(84, ' ') + "a) Her love for Charles.\n" + string(84, ' ') + "b) Debt and affairs.\n" + string(84, ' ') + "c) A tragic accident.\n" + string(84, ' ') + "d) Her devotion to family.",
    string(84, ' ') + "What was Father Goriot’s social status at the beginning of the novel?\n" + string(84, ' ') + "a) Wealthy merchant.\n" + string(84, ' ') + "b) Poor beggar.\n" + string(84, ' ') + "c) Noble aristocrat.\n" + string(84, ' ') + "d) Government official.",
    string(84, ' ') + "What genre is Madame Bovary?\n" + string(84, ' ') + "a) Fantasy.\n" + string(84, ' ') + "b) Science fiction.\n" + string(84, ' ') + "c) Realist novel.\n" + string(84, ' ') + "d) Gothic horror.",
    string(84, ' ') + "What genre is Father Goriot?\n" + string(84, ' ') + "a) Romantic novel.\n" + string(84, ' ') + "b) Realist novel.\n" + string(84, ' ') + "c) Epic poem.\n" + string(84, ' ') + "d) Satire.",
    string(84, ' ') + "Which literary movement came before social realism?\n" + string(84, ' ') + "a) Modernism.\n" + string(84, ' ') + "b) Romanticism.\n" + string(84, ' ') + "c) Symbolism.\n" + string(84, ' ') + "d) Surrealism.",
    string(84, ' ') + "What is the nature of Vautrin in Father Goriot?\n" + string(84, ' ') + "a) Innocent scholar.\n" + string(84, ' ') + "b) Criminal mastermind.\n" + string(84, ' ') + "c) Wealthy businessman.\n" + string(84, ' ') + "d) Religious leader.",
    string(84, ' ') + "What is the name of the town where the Bovarys live?\n" + string(84, ' ') + "a) Rouen.\n" + string(84, ' ') + "b) Yonville.\n" + string(84, ' ') + "c) Paris.\n" + string(84, ' ') + "d) Marseille.",
    string(84, ' ') + "What is Charles Bovary's profession?\n" + string(84, ' ') + "a) Doctor.\n" + string(84, ' ') + "b) Lawyer.\n" + string(84, ' ') + "c) Banker.\n" + string(84, ' ') + "d) Professor.",
    string(84, ' ') + "What happens to Father Goriot’s daughters?\n" + string(84, ' ') + "a) They become famous.\n" + string(84, ' ') + "b) They abandon him.\n" + string(84, ' ') + "c) They care for him.\n" + string(84, ' ') + "d) They move abroad."
    };

    string questionsMedium[20] = {
     string(84, ' ') + "What genre is Father Goriot?\n" + string(84, ' ') + "a) Romantic novel.\n" + string(84, ' ') + "b) Realist novel.\n" + string(84, ' ') + "c) Epic poem.\n" + string(84, ' ') + "d) Satire.",
     string(84, ' ') + "What genre is Madame Bovary?\n" + string(84, ' ') + "a) Fantasy.\n" + string(84, ' ') + "b) Science fiction.\n" + string(84, ' ') + "c) Realist novel.\n" + string(84, ' ') + "d) Gothic horror.",
     string(84, ' ') + "What is the main theme of Father Goriot?\n" + string(84, ' ') + "a) Money and society.\n" + string(84, ' ') + "b) Love and betrayal.\n" + string(84, ' ') + "c) Adventure and heroism.\n" + string(84, ' ') + "d) Political conflict.",
     string(84, ' ') + "What is the main theme of Madame Bovary?\n" + string(84, ' ') + "a) Friendship.\n" + string(84, ' ') + "b) Illusions and reality.\n" + string(84, ' ') + "c) War and peace.\n" + string(84, ' ') + "d) Science and progress.",
     string(84, ' ') + "What is Rastignac’s social status at the beginning?\n" + string(84, ' ') + "a) Poor student.\n" + string(84, ' ') + "b) Wealthy aristocrat.\n" + string(84, ' ') + "c) Middle-class merchant.\n" + string(84, ' ') + "d) Government official.",
     string(84, ' ') + "How did Father Goriot make his fortune?\n" + string(84, ' ') + "a) Through trade.\n" + string(84, ' ') + "b) Inheritance.\n" + string(84, ' ') + "c) Gambling.\n" + string(84, ' ') + "d) Banking.",
     string(84, ' ') + "What happens to Father Goriot’s daughters?\n" + string(84, ' ') + "a) They reject him.\n" + string(84, ' ') + "b) They care for him.\n" + string(84, ' ') + "c) They inherit his wealth.\n" + string(84, ' ') + "d) They move abroad.",
     string(84, ' ') + "Which character in Father Goriot is a criminal?\n" + string(84, ' ') + "a) Vautrin.\n" + string(84, ' ') + "b) Rastignac.\n" + string(84, ' ') + "c) Goriot.\n" + string(84, ' ') + "d) Madame Vauquer.",
     string(84, ' ') + "What is Emma Bovary’s husband’s profession?\n" + string(84, ' ') + "a) Doctor.\n" + string(84, ' ') + "b) Lawyer.\n" + string(84, ' ') + "c) Banker.\n" + string(84, ' ') + "d) Professor.",
     string(84, ' ') + "How does Emma Bovary die?\n" + string(84, ' ') + "a) Poisoning herself.\n" + string(84, ' ') + "b) Illness.\n" + string(84, ' ') + "c) Drowning.\n" + string(84, ' ') + "d) Murder.",
     string(84, ' ') + "What does Rastignac dream of achieving?\n" + string(84, ' ') + "a) Wealth and success.\n" + string(84, ' ') + "b) Love and happiness.\n" + string(84, ' ') + "c) Political power.\n" + string(84, ' ') + "d) Artistic fame.",
     string(84, ' ') + "What is Emma Bovary’s main flaw?\n" + string(84, ' ') + "a) Naivety.\n" + string(84, ' ') + "b) Wisdom.\n" + string(84, ' ') + "c) Honesty.\n" + string(84, ' ') + "d) Strength.",
     string(84, ' ') + "Who wrote The Human Comedy?\n" + string(84, ' ') + "a) Balzac.\n" + string(84, ' ') + "b) Flaubert.\n" + string(84, ' ') + "c) Zola.\n" + string(84, ' ') + "d) Hugo.",
     string(84, ' ') + "In which century did Balzac live?\n" + string(84, ' ') + "a) 19th century.\n" + string(84, ' ') + "b) 18th century.\n" + string(84, ' ') + "c) 20th century.\n" + string(84, ' ') + "d) 21st century.",
     string(84, ' ') + "In which century did Flaubert live?\n" + string(84, ' ') + "a) 19th century.\n" + string(84, ' ') + "b) 18th century.\n" + string(84, ' ') + "c) 20th century.\n" + string(84, ' ') + "d) 21st century.",
     string(84, ' ') + "How does Flaubert present reality?\n" + string(84, ' ') + "a) Objectively.\n" + string(84, ' ') + "b) Subjectively.\n" + string(84, ' ') + "c) Idealistically.\n" + string(84, ' ') + "d) Romantically.",
     string(84, ' ') + "What literary technique does Balzac use?\n" + string(84, ' ') + "a) Detailed description.\n" + string(84, ' ') + "b) Symbolism.\n" + string(84, ' ') + "c) Allegory.\n" + string(84, ' ') + "d) Stream of consciousness.",
     string(84, ' ') + "What is Emma Bovary’s marriage like?\n" + string(84, ' ') + "a) Unhappy.\n" + string(84, ' ') + "b) Passionate.\n" + string(84, ' ') + "c) Violent.\n" + string(84, ' ') + "d) Joyful.",
     string(84, ' ') + "How does Father Goriot end?\n" + string(84, ' ') + "a) Goriot dies poor.\n" + string(84, ' ') + "b) Goriot becomes rich.\n" + string(84, ' ') + "c) Goriot moves abroad.\n" + string(84, ' ') + "d) Goriot is arrested.",
     string(84, ' ') + "What does Rastignac say at the end of the novel?\n" + string(84, ' ') + "a) 'It’s between us now, Paris and me!'\n" + string(84, ' ') + "b) 'I regret nothing.'\n" + string(84, ' ') + "c) 'I have failed.'\n" + string(84, ' ') + "d) 'We must change the world!'"
    };

    string questionsHard[10] = {
    string(84, ' ') + "Which literary movement came before social realism?\n" + string(84, ' ') + "a) Modernism.\n" + string(84, ' ') + "b) Romanticism.\n" + string(84, ' ') + "c) Symbolism.\n" + string(84, ' ') + "d) Surrealism.",
    string(84, ' ') + "What main issue does Balzac reveal?\n" + string(84, ' ') + "a) The power of money.\n" + string(84, ' ') + "b) The struggles of war.\n" + string(84, ' ') + "c) The importance of family.\n" + string(84, ' ') + "d) The decline of nobility.",
    string(84, ' ') + "What main issue does Flaubert reveal?\n" + string(84, ' ') + "a) Political corruption.\n" + string(84, ' ') + "b) Illusory dreams.\n" + string(84, ' ') + "c) The brutality of war.\n" + string(84, ' ') + "d) The rise of democracy.",
    string(84, ' ') + "What does Madame Vauquer’s boarding house symbolize?\n" + string(84, ' ') + "a) Social hierarchy.\n" + string(84, ' ') + "b) Economic prosperity.\n" + string(84, ' ') + "c) Political corruption.\n" + string(84, ' ') + "d) Religious devotion.",
    string(84, ' ') + "Which character in Father Goriot represents the criminal world?\n" + string(84, ' ') + "a) Vautrin.\n" + string(84, ' ') + "b) Rastignac.\n" + string(84, ' ') + "c) Madame Vauquer.\n" + string(84, ' ') + "d) Goriot.",
    string(84, ' ') + "What literary method does Flaubert use?\n" + string(84, ' ') + "a) Objectivity.\n" + string(84, ' ') + "b) Sentimentalism.\n" + string(84, ' ') + "c) Allegory.\n" + string(84, ' ') + "d) Romantic idealism.",
    string(84, ' ') + "What is Emma Bovary’s goal?\n" + string(84, ' ') + "a) To live like in a novel.\n" + string(84, ' ') + "b) To become a doctor.\n" + string(84, ' ') + "c) To rule a kingdom.\n" + string(84, ' ') + "d) To be a great writer.",
    string(84, ' ') + "What happens to Emma Bovary’s husband?\n" + string(84, ' ') + "a) He dies of grief.\n" + string(84, ' ') + "b) He remarries.\n" + string(84, ' ') + "c) He moves away.\n" + string(84, ' ') + "d) He becomes wealthy.",
    string(84, ' ') + "What does Madame Bovary criticize?\n" + string(84, ' ') + "a) Bourgeois values.\n" + string(84, ' ') + "b) Religious institutions.\n" + string(84, ' ') + "c) Political systems.\n" + string(84, ' ') + "d) Scientific advancements.",
    string(84, ' ') + "What style does Balzac use?\n" + string(84, ' ') + "a) Realism.\n" + string(84, ' ') + "b) Romanticism.\n" + string(84, ' ') + "c) Naturalism.\n" + string(84, ' ') + "d) Symbolism."
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

    string colorBlue = "\033[94m";
    string colorBlueEnd = "\033[0m";


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

        cout << colorBlue + PickedQuestionEasy[i] + colorBlueEnd << endl;

        cout << setw(80) << " " << endl;
        cout << setw(100) << " " << endl;
        cout << "\033[94m" << setw(155) << "----------------------------------------------------------------------------------------------" << "\033[0m" << endl;
        cout << setw(100) << " " << endl;
        cout << "\033[94m" << setw(160) << "--------------------------------------------------------------------------------------------------------" << "\033[0m" << endl;
        cout << setw(117) << "Your choice: ";
        
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

        cout << colorBlue + PickedQuestionMedium[i] + colorBlueEnd << endl;

        cout << setw(80) << " " << endl;
        cout << setw(100) << " " << endl;
        cout << "\033[94m" << setw(155) << "----------------------------------------------------------------------------------------------" << "\033[0m" << endl;
        cout << setw(100) << " " << endl;
        cout << "\033[94m" << setw(160) << "--------------------------------------------------------------------------------------------------------" << "\033[0m" << endl;
        cout << setw(117) << "Your choice: ";
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

        cout << colorBlue + PickedQuestionHard[i] + colorBlueEnd << endl;

        cout << setw(80) << " " << endl;
        cout << setw(100) << " " << endl;
        cout << "\033[94m" << setw(155) << "----------------------------------------------------------------------------------------------" << "\033[0m" << endl;
        cout << setw(100) << " " << endl;
        cout << "\033[94m" << setw(160) << "--------------------------------------------------------------------------------------------------------" << "\033[0m" << endl;
        cout << setw(117) << "Your choice: ";
        getline(cin, EnteredAnswerHard[i]);



        if (EnteredAnswerHard[i] == PickedHardAnswers[i]) {
            OverallRealism += 3;
        }
        else {
            OverallRealism = OverallRealism;
        }

        system("cls");

    }

    cout << setw(80) << " " << endl;
    cout << setw(100) << " " << endl;
    cout << setw(100) << " " << endl;
    cout << setw(100) << " " << endl;
    cout << setw(100) << " " << endl;
    cout << setw(100) << " " << endl;
    cout << setw(100) << " " << endl;
    cout << setw(100) << " " << endl;
    cout << setw(100) << " " << endl;
    cout << setw(100) << " " << endl;
    cout << "\033[94m" << setw(155) << "----------------------------------------------------------------------------------------------" << "\033[0m" << endl;
    cout << setw(100) << " " << endl;
    cout << "\033[94m" << setw(160) << "--------------------------------------------------------------------------------------------------------" << "\033[0m" << endl;

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

    cout << setw(116) << "Your final grade is: " << FinalGrade << endl;
    cout << setw(110) << "Your score is: " << fixed << setprecision(2) << GradeRealism << "%" << endl;

    ofstream leaderboard("leaderboardRealism.txt", ios::app);
    if (leaderboard.is_open()) {
        leaderboard << userName << ", " << userGrade << ", " << GradeRealism << "%, " << FinalGrade << endl;
        leaderboard.close();
    }
    else {
        cout << setw(120) << "Error: Unable to open leaderboard file." << endl;
    }


    char choice;
    cout << setw(100) << " " << endl;
    cout << "                                                        Enter 'y/Y' if you wish to see the leaderboards for this test, or 'n/N' if you wish to return to the main menu: " << endl;
    cout << setw(80) << " " << endl;
    cout << setw(100) << " " << endl;
    cout << "\033[94m" << setw(160) << "--------------------------------------------------------------------------------------------------------" << "\033[0m" << endl;
    cout << setw(100) << " " << endl;
    cout << "\033[94m" << setw(155) << "----------------------------------------------------------------------------------------------" << "\033[0m" << endl;


    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        leaderboardRealism();
    }
    else if (choice == 'n' || choice == 'N') {
        testmenu();
    }
    else {
        cout << setw(120) << "Invalid input, returning to main menu." << endl;
        testmenu();
    }


}