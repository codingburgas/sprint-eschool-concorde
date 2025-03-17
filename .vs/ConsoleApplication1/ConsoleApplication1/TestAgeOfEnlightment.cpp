#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Enlightenment.h"

using namespace std;

void AgeOfenlightenmentTest() {
    srand(time(0)); // Seed for randomness

    string questionsEasy[20] = { "What was the Age of Enlightenment?", "In which century did the Enlightenment occur?", "Who wrote 'The Social Contract'?", "Who wrote 'Two Treatises of Government'?", "Which country was the center of the Enlightenment?", "Who is known as the father of modern philosophy?", "Which Enlightenment thinker proposed separation of powers?", "Who wrote 'Candide'?", "What was the main goal of the Enlightenment?", "What did the Enlightenment emphasize over tradition?", "Who developed the idea of the general will?", "What is 'tabula rasa'?", "Who wrote 'The Spirit of the Laws'?", "Which Enlightenment thinker advocated for free speech?", "What did Voltaire criticize in his writings?", "What form of government did Enlightenment thinkers favor?", "Who is known for advocating women’s rights during the Enlightenment?", "What is Deism?", "Who wrote 'A Vindication of the Rights of Woman'?", "What revolution was inspired by Enlightenment ideas?" };

    string answersEasy[20] = { "An intellectual movement emphasizing reason and individualism.", "18th century.", "Jean-Jacques Rousseau.", "John Locke.", "France.", "Rene Descartes.", "Montesquieu.", "Voltaire.", "To promote reason and progress.", "Reason.", "Rousseau.", "The mind is a blank slate.", "Montesquieu.", "Voltaire.", "The church and monarchy.", "Democracy or constitutional monarchy.", "Mary Wollstonecraft.", "Belief in a non-intervening God.", "Mary Wollstonecraft.", "The American Revolution." };

    string questionsMedium[20] = { "What role did coffeehouses play in the Enlightenment?", "Which Enlightenment thinker influenced the U.S. Constitution?", "What is 'natural rights' according to John Locke?", "Which Enlightenment thinker argued for religious tolerance?", "Who coined the phrase 'I think, therefore I am'?", "What economic system was influenced by Adam Smith?", "What is the 'invisible hand' theory?", "Which Enlightenment thinker developed the concept of checks and balances?", "What is an 'Enlightened Despot'?", "Which ruler was considered an Enlightened Despot?", "What book did John Locke write about government?", "Who wrote 'The Wealth of Nations'?", "What was the purpose of Diderot’s Encyclopedia?", "What is 'social contract theory'?", "Which Enlightenment thinker inspired the French Revolution?", "What role did reason play in the Enlightenment?", "What did Enlightenment thinkers believe about education?", "Who was a major opponent of mercantilism?", "What is the connection between the Enlightenment and secularism?", "How did Enlightenment ideas spread?" };

    string answersMedium[20] = { "Places for intellectual discussion.", "Montesquieu.", "Life, liberty, and property.", "Voltaire.", "Rene Descartes.", "Capitalism.", "Free-market regulation.", "Montesquieu.", "A ruler who embraced Enlightenment ideas.", "Frederick the Great.", "Two Treatises of Government.", "Adam Smith.", "To spread knowledge and reason.", "Government based on consent.", "Rousseau.", "It was the foundation of knowledge.", "It was essential for progress.", "Adam Smith.", "It promoted secular thinking.", "Through books and salons." };

    string questionsHard[10] = { "What was the role of the Enlightenment in the American Revolution?", "How did the Enlightenment challenge traditional monarchy?", "What is the difference between rationalism and empiricism?", "Which Enlightenment ideas influenced modern democracy?", "What was the impact of Rousseau’s concept of the general will?", "How did Kant define Enlightenment?", "What was the role of skepticism in the Enlightenment?", "What did David Hume argue about human understanding?", "How did the Enlightenment affect religious institutions?", "What was the impact of the Enlightenment on scientific progress?" };

    string answersHard[10] = { "Inspired ideas of liberty and governance.", "It questioned divine right and absolutism.", "Rationalism is reason-based, empiricism is experience-based.", "Freedom, equality, and government accountability.", "It led to ideas of direct democracy.", "Dare to know.", "It led to questioning authority.", "That knowledge comes from experience.", "It weakened their power.", "It encouraged scientific discovery." };

    string PickedQuestionEasy[10], PickedEasyAnswers[10];
    string PickedQuestionMedium[6], PickedMediumAnswers[6];
    string PickedQuestionHard[4], PickedHardAnswers[4];

    int countEasy = 0, countMedium = 0, countHard = 0;

    // Randomly select questions
    while (countEasy < 10) {
        int index = rand() % 20;
        PickedQuestionEasy[countEasy] = questionsEasy[index];
        PickedEasyAnswers[countEasy] = answersEasy[index];
        countEasy++;
    }
    while (countMedium < 6) {
        int index = rand() % 20;
        PickedQuestionMedium[countMedium] = questionsMedium[index];
        PickedMediumAnswers[countMedium] = answersMedium[index];
        countMedium++;
    }
    while (countHard < 4) {
        int index = rand() % 10;
        PickedQuestionHard[countHard] = questionsHard[index];
        PickedHardAnswers[countHard] = answersHard[index];
        countHard++;
    }

    float OverallScore = 0;
    string userAnswer;

    cin.ignore();

    auto askQuestions = [&](string questions[], string answers[], int count, int points) {
        for (int i = 0; i < count; i++) {
            cout << "Question " << (i + 1) << ": " << questions[i] << endl;
            cout << "Your answer: ";
            getline(cin, userAnswer);
            if (userAnswer == answers[i]) {
                cout << "Correct!" << endl;
                OverallScore += points;
            }
            else {
                cout << "Incorrect! The correct answer is: " << answers[i] << endl;
            }
            cout << "-----------------------------" << endl;
        }
        };

    askQuestions(PickedQuestionEasy, PickedEasyAnswers, 10, 1);
    askQuestions(PickedQuestionMedium, PickedMediumAnswers, 6, 2);
    askQuestions(PickedQuestionHard, PickedHardAnswers, 4, 3);

    cout << "Test Completed! Your final score: " << OverallScore << " points" << endl;
    cout << "Percentage: " << (OverallScore / 26) * 100 << "%" << endl;
}
