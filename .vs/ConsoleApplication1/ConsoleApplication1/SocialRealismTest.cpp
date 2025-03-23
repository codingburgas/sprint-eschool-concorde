#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include "testRealism.h"

using namespace std;

void SocialRealismTest()
{
    //questions and their respective answers ("qeustion 1, 2 ..." is to be replaced with the question, as well as their answers)
    string questionsEasy[20] = {
    "What is social realism?\na) A literary movement depicting social issues.\nb) A fantasy genre.\nc) A political ideology.\nd) A historical period.",
    "In which century did social realism emerge?\na) 18th century.\nb) 19th century.\nc) 20th century.\nd) 21st century.",
    "Who is the author of Father Goriot?\na) Victor Hugo.\nb) Honore de Balzac.\nc) Gustave Flaubert.\nd) Emile Zola.",
    "Who is the author of Madame Bovary?\na) Emile Zola.\nb) Honore de Balzac.\nc) Gustave Flaubert.\nd) Victor Hugo.",
    "In which country does Father Goriot take place?\na) Germany.\nb) Italy.\nc) France.\nd) England.",
    "In which country does Madame Bovary take place?\na) France.\nb) Spain.\nc) Italy.\nd) Russia.",
    "What is the name of the young student in Father Goriot?\na) Lucien de Rubempre.\nb) Eugene de Rastignac.\nc) Charles Bovary.\nd) Vautrin.",
    "What is the name of Emma Bovary's husband?\na) Eugene.\nb) Charles.\nc) Leon.\nd) Rodolphe.",
    "What is the main theme of Father Goriot?\na) Money and society.\nb) Love and betrayal.\nc) Adventure and heroism.\nd) Political conflict.",
    "What is the main theme of Madame Bovary?\na) Friendship.\nb) Illusions and reality.\nc) War and peace.\nd) Science and progress.",
    "What does Madame Vauquer’s boarding house symbolize?\na) Love and passion.\nb) Social hierarchy.\nc) Education.\nd) Political power.",
    "What leads to Emma Bovary’s downfall?\na) Her love for Charles.\nb) Debt and affairs.\nc) A tragic accident.\nd) Her devotion to family.",
    "What was Father Goriot’s social status at the beginning of the novel?\na) Wealthy merchant.\nb) Poor beggar.\nc) Noble aristocrat.\nd) Government official.",
    "What genre is Madame Bovary?\na) Fantasy.\nb) Science fiction.\nc) Realist novel.\nd) Gothic horror.",
    "What genre is Father Goriot?\na) Romantic novel.\nb) Realist novel.\nc) Epic poem.\nd) Satire.",
    "Which literary movement came before social realism?\na) Modernism.\nb) Romanticism.\nc) Symbolism.\nd) Surrealism.",
    "What is the nature of Vautrin in Father Goriot?\na) Innocent scholar.\nb) Criminal mastermind.\nc) Wealthy businessman.\nd) Religious leader.",
    "What is the name of the town where the Bovarys live?\na) Rouen.\nb) Yonville.\nc) Paris.\nd) Marseille.",
    "What is Charles Bovary's profession?\na) Doctor.\nb) Lawyer.\nc) Banker.\nd) Professor.",
    "What happens to Father Goriot’s daughters?\na) They become famous.\nb) They abandon him.\nc) They care for him.\nd) They move abroad."
    };

    string questionsMedium[20] = {
    "What genre is Father Goriot?\na) Romantic novel.\nb) Realist novel.\nc) Epic poem.\nd) Satire.",
    "What genre is Madame Bovary?\na) Fantasy.\nb) Science fiction.\nc) Realist novel.\nd) Gothic horror.",
    "What is the main theme of Father Goriot?\na) Money and society.\nb) Love and betrayal.\nc) Adventure and heroism.\nd) Political conflict.",
    "What is the main theme of Madame Bovary?\na) Friendship.\nb) Illusions and reality.\nc) War and peace.\nd) Science and progress.",
    "What is Rastignac’s social status at the beginning?\na) Poor student.\nb) Wealthy aristocrat.\nc) Middle-class merchant.\nd) Government official.",
    "How did Father Goriot make his fortune?\na) Through trade.\nb) Inheritance.\nc) Gambling.\nd) Banking.",
    "What happens to Father Goriot’s daughters?\na) They reject him.\nb) They care for him.\nc) They inherit his wealth.\nd) They move abroad.",
    "Which character in Father Goriot is a criminal?\na) Vautrin.\nb) Rastignac.\nc) Goriot.\nd) Madame Vauquer.",
    "What is Emma Bovary’s husband’s profession?\na) Doctor.\nb) Lawyer.\nc) Banker.\nd) Professor.",
    "How does Emma Bovary die?\na) Poisoning herself.\nb) Illness.\nc) Drowning.\nd) Murder.",
    "What does Rastignac dream of achieving?\na) Wealth and success.\nb) Love and happiness.\nc) Political power.\nd) Artistic fame.",
    "What is Emma Bovary’s main flaw?\na) Naivety.\nb) Wisdom.\nc) Honesty.\nd) Strength.",
    "Who wrote The Human Comedy?\na) Balzac.\nb) Flaubert.\nc) Zola.\nd) Hugo.",
    "In which century did Balzac live?\na) 19th century.\nb) 18th century.\nc) 20th century.\nd) 21st century.",
    "In which century did Flaubert live?\na) 19th century.\nb) 18th century.\nc) 20th century.\nd) 21st century.",
    "How does Flaubert present reality?\na) Objectively.\nb) Subjectively.\nc) Idealistically.\nd) Romantically.",
    "What literary technique does Balzac use?\na) Detailed description.\nb) Symbolism.\nc) Allegory.\nd) Stream of consciousness.",
    "What is Emma Bovary’s marriage like?\na) Unhappy.\nb) Passionate.\nc) Violent.\nd) Joyful.",
    "How does Father Goriot end?\na) Goriot dies poor.\nb) Goriot becomes rich.\nc) Goriot moves abroad.\nd) Goriot is arrested.",
    "What does Rastignac say at the end of the novel?\na) 'It’s between us now, Paris and me!' \nb) 'I regret nothing.'\nc) 'I have failed.'\nd) 'We must change the world!'"};

    string questionsHard[10] = {
     "Which literary movement came before social realism?\na) Modernism.\nb) Romanticism.\nc) Symbolism.\nd) Surrealism.",
     "What main issue does Balzac reveal?\na) The power of money.\nb) The struggles of war.\nc) The importance of family.\nd) The decline of nobility.",
     "What main issue does Flaubert reveal?\na) Political corruption.\nb) Illusory dreams.\nc) The brutality of war.\nd) The rise of democracy.",
     "What does Madame Vauquer’s boarding house symbolize?\na) Social hierarchy.\nb) Economic prosperity.\nc) Political corruption.\nd) Religious devotion.",
     "Which character in Father Goriot represents the criminal world?\na) Vautrin.\nb) Rastignac.\nc) Madame Vauquer.\nd) Goriot.",
     "What literary method does Flaubert use?\na) Objectivity.\nb) Sentimentalism.\nc) Allegory.\nd) Romantic idealism.",
     "What is Emma Bovary’s goal?\na) To live like in a novel.\nb) To become a doctor.\nc) To rule a kingdom.\nd) To be a great writer.",
     "What happens to Emma Bovary’s husband?\na) He dies of grief.\nb) He remarries.\nc) He moves away.\nd) He becomes wealthy.",
     "What does Madame Bovary criticize?\na) Bourgeois values.\nb) Religious institutions.\nc) Political systems.\nd) Scientific advancements.",
     "What style does Balzac use?\na) Realism.\nb) Romanticism.\nc) Naturalism.\nd) Symbolism."
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

        cout << "||||" << PickedQuestionEasy[i] << "||||" << endl;
        


        cout << endl;

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

        cout << "||||" << PickedQuestionMedium[i] << "||||" << endl;
        

        cout << endl;

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

        cout << "||||" << PickedQuestionHard[i] << "||||" << endl;
        

        cout << endl;

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
	cout << "Your score is: " << GradeRealism << "%" << endl;


}