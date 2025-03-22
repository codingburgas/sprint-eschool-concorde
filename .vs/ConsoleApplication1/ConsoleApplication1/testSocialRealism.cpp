#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <iomanip>
#include "testRealism.h"

using namespace std;

void SocialRealismTest() {
    string questionsEasy[20] = {
        "What is social realism?",
        "In which century did social realism emerge?",
        "Who is the author of Father Goriot?",
        "Who is the author of Madame Bovary?",
        "In which country does Father Goriot take place?",
        "In which country does Madame Bovary take place?",
        "What is the name of the young student in Father Goriot?",
        "What is the name of Emma Bovary’s husband?",
        "What is the main theme of Father Goriot?",
        "What is the main theme of Madame Bovary?",
        "What does Madame Vauquer’s boarding house symbolize?",
        "What leads to Emma Bovary’s downfall?",
        "What was Father Goriot’s social status at the beginning of the novel?",
        "What genre is Madame Bovary?",
        "What genre is Father Goriot?",
        "Which literary movement came before social realism?",
        "What is the nature of Vautrin in Father Goriot?",
        "What is the name of the town where the Bovarys live?",
        "What is Charles Bovary’s profession?",
        "What happens to Father Goriot’s daughters?"
    };

    string optionsEasy[20][4] = {
        {"A. A literary movement depicting social issues.", "B. A fantasy genre.", "C. A poetic style.", "D. A type of music."},
        {"A. 18th century.", "B. 19th century.", "C. 20th century.", "D. 21st century."},
        {"A. Victor Hugo.", "B. Gustave Flaubert.", "C. Honore de Balzac.", "D. Emile Zola."},
        {"A. Honore de Balzac.", "B. Gustave Flaubert.", "C. Emile Zola.", "D. Leo Tolstoy."},
        {"A. Germany.", "B. England.", "C. France.", "D. Russia."},
        {"A. Spain.", "B. Italy.", "C. France.", "D. Portugal."},
        {"A. Eugene de Rastignac.", "B. Charles Bovary.", "C. Vautrin.", "D. Madame Vauquer."},
        {"A. Charles Bovary.", "B. Leon Dupuis.", "C. Rodolphe Boulanger.", "D. Justin."},
        {"A. Money and society.", "B. Romance.", "C. War.", "D. Adventure."},
        {"A. Illusions and reality.", "B. Science fiction.", "C. Horror.", "D. Mystery."},
        {"A. Social hierarchy.", "B. Love and betrayal.", "C. Political corruption.", "D. Justice."},
        {"A. Debt and affairs.", "B. Political corruption.", "C. Family disputes.", "D. War."},
        {"A. Wealthy merchant.", "B. Poor farmer.", "C. Nobleman.", "D. Teacher."},
        {"A. Realist novel.", "B. Romantic novel.", "C. Gothic novel.", "D. Adventure novel."},
        {"A. Realist novel.", "B. Romantic novel.", "C. Gothic novel.", "D. Adventure novel."},
        {"A. Romanticism.", "B. Modernism.", "C. Symbolism.", "D. Surrealism."},
        {"A. Criminal mastermind.", "B. Nobleman.", "C. Honest worker.", "D. Poet."},
        {"A. Yonville.", "B. Rouen.", "C. Paris.", "D. Lille."},
        {"A. Doctor.", "B. Lawyer.", "C. Merchant.", "D. Farmer."},
        {"A. They abandon him.", "B. They care for him.", "C. They inherit his wealth.", "D. They are disinherited."}
    };

    string answersEasy[20] = { "A", "B", "C", "B", "C", "C", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A" };

    string questionsMedium[20] = {
         "What genre is Father Goriot?",
         "What genre is Madame Bovary?",
         "What is the main theme of Father Goriot?",
         "What is the main theme of Madame Bovary?",
         "What does Rastignac dream of achieving?",
         "What is Emma Bovary’s main flaw?",
         "Who wrote The Human Comedy?",
         "In which century did Balzac live?",
         "In which century did Flaubert live?",
         "How does Flaubert present reality?",
         "What literary technique does Balzac use?",
         "What is Emma Bovary’s marriage like?",
         "How does Father Goriot end?",
         "What does Rastignac say at the end of the novel?",
         "What happens to Emma Bovary’s husband?",
         "What does Madame Bovary criticize?",
         "How did Father Goriot make his fortune?",
         "What is Charles Bovary’s profession?",
         "What happens to Father Goriot’s daughters?",
         "Which character in Father Goriot is a criminal?"
    };

    string optionsMedium[20][4] = {
    {"A. Romance", "B. Realism", "C. Gothic", "D. Adventure"},
    {"A. Realism", "B. Fantasy", "C. Gothic", "D. Science Fiction"},
    {"A. The corruption of society and ambition", "B. Love and passion", "C. Supernatural revenge", "D. War and heroism"},
    {"A. The dangers of romantic illusions", "B. Political revolution", "C. Religious devotion", "D. The supernatural"},
    {"A. Wealth and high social status", "B. A simple rural life", "C. Becoming a soldier", "D. Living as a poet"},
    {"A. Her romantic delusions and dissatisfaction", "B. Her intelligence", "C. Her kindness", "D. Her honesty"},
    {"A. Honor? de Balzac", "B. Victor Hugo", "C. ?mile Zola", "D. Gustave Flaubert"},
    {"A. 19th", "B. 18th", "C. 17th", "D. 16th"},
    {"A. 19th", "B. 18th", "C. 17th", "D. 16th"},
    {"A. With detailed, objective realism", "B. Through exaggerated romanticism", "C. Through mythical allegory", "D. With surreal dreamlike elements"},
    {"A. Social realism and detailed descriptions", "B. Stream of consciousness", "C. Magical realism", "D. Nonlinear narrative"},
    {"A. Boring and unromantic", "B. Passionate and fulfilling", "C. Adventurous and exciting", "D. Full of political intrigue"},
    {"A. Goriot dies alone and heartbroken", "B. Goriot reunites with his daughters", "C. Rastignac leaves for the countryside", "D. Paris is destroyed"},
    {"A. “? nous deux, maintenant!” (It’s between you and me now, Paris!)", "B. “War is peace, freedom is slavery.”", "C. “Love conquers all.”", "D. “Nothing matters anymore.”"},
    {"A. He dies heartbroken after discovering Emma’s affairs", "B. He remarries and lives happily", "C. He moves to Paris", "D. He becomes a famous doctor"},
    {"A. The emptiness of bourgeois life and romantic illusions", "B. The military", "C. The monarchy", "D. The supernatural"},
    {"A. In the pasta trade", "B. Through inheritance", "C. By gambling", "D. Banking"},
    {"A. Doctor", "B. Banker", "C. Lawyer", "D. Writer"},
    {"A. They abandon him and ignore his suffering", "B. They care for him in his old age", "C. They become wealthy and happy", "D. They move to America"},
    {"A. Vautrin", "B. Rastignac", "C. Goriot", "D. Charles Bovary"}
    };

    string answersMedium[20] = { "B", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A" };


    string questionsHard[10] = {
         "Which literary movement came before social realism?",
         "What main issue does Balzac reveal?",
         "What main issue does Flaubert reveal?",
         "What does Madame Vauquer’s boarding house symbolize?",
         "Which character in Father Goriot represents the criminal world?",
         "What literary method does Flaubert use?",
         "What is Emma Bovary’s goal?",
         "What happens to Emma Bovary’s husband?",
         "What does Madame Bovary criticize?",
         "What style does Balzac use?"
    };

    string optionsHard[10][4] = {
     {"A. Romanticism", "B. Realism", "C. Gothic", "D. Naturalism"},
     {"A. The pursuit of wealth and social status", "B. The decline of the aristocracy", "C. The struggle of the working class", "D. The rise of socialism"},
     {"A. The dangers of romantic illusions", "B. The breakdown of society", "C. The conflict between nature and civilization", "D. The consequences of industrialization"},
     {"A. The greed and selfishness of society", "B. The dangers of living alone", "C. The moral decay of the bourgeoisie", "D. The chaos of urban life"},
     {"A. Eug?ne de Rastignac", "B. Vautrin", "C. Father Goriot", "D. Delphine de Nucingen"},
     {"A. Realism", "B. Naturalism", "C. Symbolism", "D. Stream of consciousness"},
     {"A. To escape provincial life and achieve wealth and status", "B. To find true love", "C. To move to Paris", "D. To live a simple life in the countryside"},
     {"A. He divorces Emma and becomes a famous doctor", "B. He dies heartbroken after discovering Emma’s affairs", "C. He remarries and lives happily", "D. He moves to Paris and becomes rich"},
     {"A. The emptiness of bourgeois life and romantic illusions", "B. The rise of industrialization", "C. The challenges of motherhood", "D. The breakdown of traditional values"},
     {"A. Social realism and detailed descriptions", "B. Surrealism and dream-like elements", "C. Romanticism and idealization", "D. Naturalism and determinism"}
    };

    string answersHard[10] = { "A", "A", "A", "A", "B", "A", "A", "B", "A", "A"};

    srand(time(0));

    float overallScore = 0;
    string enteredAnswer;

    auto askQuestions = [&](string questions[], string options[][4], string answers[], int num, float scoreValue) {
        for (int i = 0; i < num; i++) {
            cout << "\n" << questions[i] << "\n";
            for (int j = 0; j < 4; j++) {
                cout << options[i][j] << "\n";
            }
            cout << "Enter your answer (A/B/C/D): ";
            cin >> enteredAnswer;
            enteredAnswer = toupper(enteredAnswer[0]);

            if (enteredAnswer == answers[i]) {
                cout << "Correct!\n";
                overallScore += scoreValue;
            }
            else {
                cout << "Wrong! The correct answer was " << answers[i] << "\n";
            }
        }
        };

    askQuestions(questionsEasy, optionsEasy, answersEasy, 10, 1.0);
    askQuestions(questionsMedium, optionsMedium, answersMedium, 6, 2.0);
    askQuestions(questionsHard, optionsHard, answersHard, 4, 3.0);

    float grade = 2.00 + (overallScore / 40.0) * 4.00;
    cout << fixed << setprecision(2) << "Your grade: " << grade << endl;
}
