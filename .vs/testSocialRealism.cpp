#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include "raylib.h"

using namespace std;

void ModernismTest() {
    // Initialize Raylib window
    InitWindow(800, 600, "Modernism Test");
    SetTargetFPS(60); // Set frames per second

    // Questions and Answers (Easy, Medium, and Hard)
    string questionsEasy[20] = { "What is social realism?", "In which century did social realism emerge?", "Who is the author of Father Goriot?", "Who is the author of Madame Bovary?", "In which country does Father Goriot take place?", "In which country does Madame Bovary take place?", "What is the name of the young student in Father Goriot?", "What is the name of Emma Bovary’s husband?", "What is the main theme of Father Goriot?", "What is the main theme of Madame Bovary?", "What does Madame Vauquer’s boarding house symbolize?", "What leads to Emma Bovary’s downfall?", "What was Father Goriot’s social status at the beginning of the novel?", "What genre is Madame Bovary?", "What genre is Father Goriot?", "Which literary movement came before social realism?", "What is the nature of Vautrin in Father Goriot?", "What is the name of the town where the Bovarys live?", "What is Charles Bovary’s profession?", "What happens to Father Goriot’s daughters?" };
    string answersEasy[20] = { "A literary movement depicting social issues.", "19th century.", "Honore de Balzac.", "Gustave Flaubert.", "France.", "France.", "Eugene de Rastignac.", "Charles Bovary.", "Money and society.", "Illusions and reality.", "Social hierarchy.", "Debt and affairs.", "Wealthy merchant.", "Realist novel.", "Realist novel.", "Romanticism.", "Criminal mastermind.", "Yonville.", "Doctor.", "They abandon him." };

    string questionsMedium[20] = { "What genre is Father Goriot?", "What genre is Madame Bovary?", "What is the main theme of Father Goriot?", "What is the main theme of Madame Bovary?", "What does Rastignac dream of achieving?", "What is Emma Bovary’s main flaw?", "Who wrote The Human Comedy?", "In which century did Balzac live?", "In which century did Flaubert live?", "How does Flaubert present reality?", "What literary technique does Balzac use?", "What is Emma Bovary’s marriage like?", "How does Father Goriot end?", "What does Rastignac say at the end of the novel?", "What happens to Emma Bovary’s husband?", "What does Madame Bovary criticize?", "How did Father Goriot make his fortune?", "What is Charles Bovary’s profession?", "What happens to Father Goriot’s daughters?", "Which character in Father Goriot is a criminal?" };
    string answersMedium[20] = { "Realist novel.", "Realist novel.", "Money and society.", "Illusions and reality.", "Wealth and success.", "Naive", "Balzac.", "19th century.", "19th century.", "Objectively.", "Detailed description.", "Unhappy.", "Goriot dies poor.", "It’s between us now, Paris and me!", "He dies of grief.", "Bourgeois values.", "Through trade.", "Doctor.", "They reject him.", "Vautrin." };

    string questionsHard[10] = { "Which literary movement came before social realism?", "What main issue does Balzac reveal?", "What main issue does Flaubert reveal?", "What does Madame Vauquer’s boarding house symbolize?", "Which character in Father Goriot represents the criminal world?", "What literary method does Flaubert use?", "What is Emma Bovary’s goal?", "What happens to Emma Bovary’s husband?", "What does Madame Bovary criticize?", "What style does Balzac use?" };
    string answersHard[10] = { "Romanticism.", "The power of money.", "Illusory dreams.", "Social hierarchy.", "Vautrin.", "Objectivity.", "To live like in a novel.", "He dies of grief.", "Bourgeois values.", "Realism." };

    // Randomization setup
    srand(time(0)); // sets the seed for random number generator

    string PickedQuestionEasy[10];
    string PickedEasyAnswers[10];
    int countEasy = 0;

    string PickedQuestionMedium[6];
    string PickedMediumAnswers[6];
    int countMedium = 0;

    string PickedQuestionHard[4];
    string PickedHardAnswers[4];
    int countHard = 0;

    // Arrays for user answers
    string EnteredAnswerEasy[10];
    string EnteredAnswerMedium[6];
    string EnteredAnswerHard[4];

    // Randomly select questions for Easy
    while (countEasy != 10) {
        int EasyIndex = rand() % 20;
        PickedQuestionEasy[countEasy] = questionsEasy[EasyIndex];
        PickedEasyAnswers[countEasy] = answersEasy[EasyIndex];
        countEasy++;
    }

    // Randomly select questions for Medium
    while (countMedium != 6) {
        int MediumIndex = rand() % 20;
        PickedQuestionMedium[countMedium] = questionsMedium[MediumIndex];
        PickedMediumAnswers[countMedium] = answersMedium[MediumIndex];
        countMedium++;
    }

    // Randomly select questions for Hard
    while (countHard != 4) {
        int HardIndex = rand() % 10;
        PickedQuestionHard[countHard] = questionsHard[HardIndex];
        PickedHardAnswers[countHard] = answersHard[HardIndex];
        countHard++;
    }

    // Test score tracking
    float OverallModernizum = 0;

    // Display and handle user input for each question (Easy)
    for (int i = 0; i < 10; i++) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText(("Q: " + PickedQuestionEasy[i]).c_str(), 150, 100, 20, BLACK);
        // Add code for capturing user input (like a text box or key press)
        DrawText("Press ENTER after typing answer", 150, 200, 20, BLACK);

        // Collect and validate input, update score
        if (EnteredAnswerEasy[i] == PickedEasyAnswers[i]) {
            OverallModernizum++;
        }

        EndDrawing();
    }

    // Handle Medium questions (same structure as Easy)
    for (int i = 0; i < 6; i++) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText(("Q: " + PickedQuestionMedium[i]).c_str(), 150, 100, 20, BLACK);
        // Add code for capturing input
        DrawText("Press ENTER after typing answer", 150, 200, 20, BLACK);

        // Validate input
        if (EnteredAnswerMedium[i] == PickedMediumAnswers[i]) {
            OverallModernizum += 2; // Award 2 points for medium
        }

        EndDrawing();
    }

    // Handle Hard questions (same structure)
    for (int i = 0; i < 4; i++) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText(("Q: " + PickedQuestionHard[i]).c_str(), 150, 100, 20, BLACK);
        // Add code for capturing input
        DrawText("Press ENTER after typing answer", 150, 200, 20, BLACK);

        // Validate input
        if (EnteredAnswerHard[i] == PickedHardAnswers[i]) {
            OverallModernizum += 3; // Award 3 points for hard
        }

        EndDrawing();
    }

    // Close the Raylib window when done
    CloseWindow();
}