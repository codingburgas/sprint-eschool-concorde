#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include"Enlightenment.h"
#include"leaderboardEnlightenment.h"
#include "testmenu.h"

using namespace std;



void AgeOfenlightenmentTest()
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
    cout << setw(160) << "\033[38;2;0;150;170m-----------------------------------------------------------------------------------\033[0m" << endl;
    cout << setw(160) << "\033[38;5;180m                      Welcome to the The Age of Enlightment test!                      \033[0m" << endl;
    cout << setw(160) << "\033[38;2;0;150;170m-----------------------------------------------------------------------------------\033[0m" << endl;
    cout << setw(110) << " Enter your name: ";
    cin.ignore();
    getline(cin, userName);
    cout << setw(120) << "Enter your grade(9A, 9B, 9V, 9G)  ";
    cin >> userGrade;


    //questions and their respective answers
    string questionsEasy[20] = {
    string(84, ' ') + "What was the Age of Enlightenment?\n" + string(84, ' ') + "(a) A religious revival\n" + string(84, ' ') + "(b) An intellectual movement emphasizing reason and individualism\n" + string(84, ' ') + "(c) A period of war in Europe\n" + string(84, ' ') + "(d) A time of artistic decline\n" + string(84, ' '),
    string(84, ' ') + "In which century did the Enlightenment occur?\n" + string(84, ' ') + "(a) 16th century\n" + string(84, ' ') + "(b) 17th century\n" + string(84, ' ') + "(c) 18th century\n" + string(84, ' ') + "(d) 19th century\n" + string(84, ' '),
    string(84, ' ') + "Who wrote 'The Social Contract'?\n" + string(84, ' ') + "(a) John Locke\n" + string(84, ' ') + "(b) Voltaire\n" + string(84, ' ') + "(c) Jean-Jacques Rousseau\n" + string(84, ' ') + "(d) Montesquieu\n" + string(84, ' '),
    string(84, ' ') + "Who wrote 'Two Treatises of Government'?\n" + string(84, ' ') + "(a) Thomas Hobbes\n" + string(84, ' ') + "(b) John Locke\n" + string(84, ' ') + "(c) Montesquieu\n" + string(84, ' ') + "(d) Voltaire\n" + string(84, ' '),
    string(84, ' ') + "Which country was the center of the Enlightenment?\n" + string(84, ' ') + "(a) England\n" + string(84, ' ') + "(b) Germany\n" + string(84, ' ') + "(c) France\n" + string(84, ' ') + "(d) Italy\n" + string(84, ' '),
    string(84, ' ') + "Who is known as the father of modern philosophy?\n" + string(84, ' ') + "(a) Immanuel Kant\n" + string(84, ' ') + "(b) Voltaire\n" + string(84, ' ') + "(c) Rene Descartes\n" + string(84, ' ') + "(d) John Locke\n" + string(84, ' '),
    string(84, ' ') + "Which Enlightenment thinker proposed separation of powers?\n" + string(84, ' ') + "(a) Rousseau\n" + string(84, ' ') + "(b) Montesquieu\n" + string(84, ' ') + "(c) Voltaire\n" + string(84, ' ') + "(d) Hobbes\n" + string(84, ' '),
    string(84, ' ') + "Who wrote 'Candide'?\n" + string(84, ' ') + "(a) Montesquieu\n" + string(84, ' ') + "(b) Jean-Jacques Rousseau\n" + string(84, ' ') + "(c) Voltaire\n" + string(84, ' ') + "(d) John Locke\n" + string(84, ' '),
    string(84, ' ') + "What was the main goal of the Enlightenment?\n" + string(84, ' ') + "(a) To promote reason and progress\n" + string(84, ' ') + "(b) To strengthen religious authority\n" + string(84, ' ') + "(c) To return to medieval traditions\n" + string(84, ' ') + "(d) To expand monarchy power\n" + string(84, ' '),
    string(84, ' ') + "What did the Enlightenment emphasize over tradition?\n" + string(84, ' ') + "(a) Faith\n" + string(84, ' ') + "(b) Reason\n" + string(84, ' ') + "(c) Superstition\n" + string(84, ' ') + "(d) Divine right\n" + string(84, ' '),
    string(84, ' ') + "Who developed the idea of the general will?\n" + string(84, ' ') + "(a) Montesquieu\n" + string(84, ' ') + "(b) Rousseau\n" + string(84, ' ') + "(c) John Locke\n" + string(84, ' ') + "(d) Voltaire\n" + string(84, ' '),
    string(84, ' ') + "What is 'tabula rasa'?\n" + string(84, ' ') + "(a) The idea that the mind is a blank slate\n" + string(84, ' ') + "(b) A form of government\n" + string(84, ' ') + "(c) A scientific theory\n" + string(84, ' ') + "(d) A religious doctrine\n" + string(84, ' '),
    string(84, ' ') + "Who wrote 'The Spirit of the Laws'?\n" + string(84, ' ') + "(a) Voltaire\n" + string(84, ' ') + "(b) Rousseau\n" + string(84, ' ') + "(c) Montesquieu\n" + string(84, ' ') + "(d) John Locke\n" + string(84, ' '),
    string(84, ' ') + "Which Enlightenment thinker advocated for free speech?\n" + string(84, ' ') + "(a) Montesquieu\n" + string(84, ' ') + "(b) Voltaire\n" + string(84, ' ') + "(c) Rousseau\n" + string(84, ' ') + "(d) Descartes\n" + string(84, ' '),
    string(84, ' ') + "What did Voltaire criticize in his writings?\n" + string(84, ' ') + "(a) The church and monarchy\n" + string(84, ' ') + "(b) Science and reason\n" + string(84, ' ') + "(c) The idea of democracy\n" + string(84, ' ') + "(d) The separation of powers\n" + string(84, ' '),
    string(84, ' ') + "What form of government did Enlightenment thinkers favor?\n" + string(84, ' ') + "(a) Absolute monarchy\n" + string(84, ' ') + "(b) Theocracy\n" + string(84, ' ') + "(c) Democracy or constitutional monarchy\n" + string(84, ' ') + "(d) Feudalism\n" + string(84, ' '),
    string(84, ' ') + "Who is known for advocating women’s rights during the Enlightenment?\n" + string(84, ' ') + "(a) Voltaire\n" + string(84, ' ') + "(b) Montesquieu\n" + string(84, ' ') + "(c) Mary Wollstonecraft\n" + string(84, ' ') + "(d) Rousseau\n" + string(84, ' '),
    string(84, ' ') + "What is Deism?\n" + string(84, ' ') + "(a) Belief in many gods\n" + string(84, ' ') + "(b) Belief in a non-intervening God\n" + string(84, ' ') + "(c) A rejection of all religious ideas\n" + string(84, ' ') + "(d) The belief that reason is unnecessary\n" + string(84, ' '),
    string(84, ' ') + "Who wrote 'A Vindication of the Rights of Woman'?\n" + string(84, ' ') + "(a) Mary Wollstonecraft\n" + string(84, ' ') + "(b) Voltaire\n" + string(84, ' ') + "(c) Rousseau\n" + string(84, ' ') + "(d) Montesquieu\n" + string(84, ' '),
    string(84, ' ') + "What revolution was inspired by Enlightenment ideas?\n" + string(84, ' ') + "(a) Industrial Revolution\n" + string(84, ' ') + "(b) Russian Revolution\n" + string(84, ' ') + "(c) The American Revolution\n" + string(84, ' ') + "(d) The Renaissance\n" + string(84, ' ')
    };

    string questionsMedium[20] = {
    string(84, ' ') + "What role did coffeehouses play in the Enlightenment?\n" + string(84, ' ') + "(a) Places for intellectual discussion\n" + string(84, ' ') + "(b) Centers for religious worship\n" + string(84, ' ') + "(c) Social clubs for aristocrats\n" + string(84, ' ') + "(d) Places to discuss political conspiracies\n" + string(84, ' '),
    string(84, ' ') + "Which Enlightenment thinker influenced the U.S. Constitution?\n" + string(84, ' ') + "(a) Rousseau\n" + string(84, ' ') + "(b) Montesquieu\n" + string(84, ' ') + "(c) John Locke\n" + string(84, ' ') + "(d) Voltaire\n" + string(84, ' '),
    string(84, ' ') + "What is 'natural rights' according to John Locke?\n" + string(84, ' ') + "(a) Rights given by the monarchy\n" + string(84, ' ') + "(b) Life, liberty, and property\n" + string(84, ' ') + "(c) Rights granted by the church\n" + string(84, ' ') + "(d) Rights given by the government\n" + string(84, ' '),
    string(84, ' ') + "Which Enlightenment thinker argued for religious tolerance?\n" + string(84, ' ') + "(a) Hobbes\n" + string(84, ' ') + "(b) Rousseau\n" + string(84, ' ') + "(c) Voltaire\n" + string(84, ' ') + "(d) Montesquieu\n" + string(84, ' '),
    string(84, ' ') + "Who coined the phrase 'I think, therefore I am'?\n" + string(84, ' ') + "(a) John Locke\n" + string(84, ' ') + "(b) Rousseau\n" + string(84, ' ') + "(c) Rene Descartes\n" + string(84, ' ') + "(d) Voltaire\n" + string(84, ' '),
    string(84, ' ') + "What economic system was influenced by Adam Smith?\n" + string(84, ' ') + "(a) Mercantilism\n" + string(84, ' ') + "(b) Socialism\n" + string(84, ' ') + "(c) Capitalism\n" + string(84, ' ') + "(d) Feudalism\n" + string(84, ' '),
    string(84, ' ') + "What is the 'invisible hand' theory?\n" + string(84, ' ') + "(a) The idea that the government should control the economy\n" + string(84, ' ') + "(b) The theory that markets regulate themselves through supply and demand\n" + string(84, ' ') + "(c) The idea that workers should regulate their wages\n" + string(84, ' ') + "(d) The belief in communal wealth sharing\n" + string(84, ' '),
    string(84, ' ') + "Which Enlightenment thinker developed the concept of checks and balances?\n" + string(84, ' ') + "(a) John Locke\n" + string(84, ' ') + "(b) Montesquieu\n" + string(84, ' ') + "(c) Rousseau\n" + string(84, ' ') + "(d) Hobbes\n" + string(84, ' '),
    string(84, ' ') + "What is an 'Enlightened Despot'?\n" + string(84, ' ') + "(a) A ruler who embraces Enlightenment ideas\n" + string(84, ' ') + "(b) A ruler who rejects Enlightenment thinking\n" + string(84, ' ') + "(c) A ruler who grants full democracy\n" + string(84, ' ') + "(d) A ruler who imposes absolute rule\n" + string(84, ' '),
    string(84, ' ') + "Which ruler was considered an Enlightened Despot?\n" + string(84, ' ') + "(a) Louis XIV\n" + string(84, ' ') + "(b) Catherine the Great\n" + string(84, ' ') + "(c) Frederick the Great\n" + string(84, ' ') + "(d) Charles I\n" + string(84, ' '),
    string(84, ' ') + "What book did John Locke write about government?\n" + string(84, ' ') + "(a) The Social Contract\n" + string(84, ' ') + "(b) The Wealth of Nations\n" + string(84, ' ') + "(c) Two Treatises of Government\n" + string(84, ' ') + "(d) The Spirit of the Laws\n" + string(84, ' '),
    string(84, ' ') + "Who wrote 'The Wealth of Nations'?\n" + string(84, ' ') + "(a) Thomas Hobbes\n" + string(84, ' ') + "(b) John Locke\n" + string(84, ' ') + "(c) Montesquieu\n" + string(84, ' ') + "(d) Adam Smith\n" + string(84, ' '),
    string(84, ' ') + "What was the purpose of Diderot’s Encyclopedia?\n" + string(84, ' ') + "(a) To promote Enlightenment ideas and spread knowledge\n" + string(84, ' ') + "(b) To create a record of historical events\n" + string(84, ' ') + "(c) To discuss religious philosophies\n" + string(84, ' ') + "(d) To document royal genealogies\n" + string(84, ' '),
    string(84, ' ') + "What is 'social contract theory'?\n" + string(84, ' ') + "(a) The belief that individuals must obey the monarchy\n" + string(84, ' ') + "(b) The idea that governments are formed by the consent of the governed\n" + string(84, ' ') + "(c) The belief that laws come from divine right\n" + string(84, ' ') + "(d) The theory that laws should be decided by religious authorities\n" + string(84, ' '),
    string(84, ' ') + "Which Enlightenment thinker inspired the French Revolution?\n" + string(84, ' ') + "(a) Voltaire\n" + string(84, ' ') + "(b) Rousseau\n" + string(84, ' ') + "(c) Montesquieu\n" + string(84, ' ') + "(d) Hobbes\n" + string(84, ' '),
    string(84, ' ') + "What role did reason play in the Enlightenment?\n" + string(84, ' ') + "(a) It was the foundation of knowledge\n" + string(84, ' ') + "(b) It was essential for progress\n" + string(84, ' ') + "(c) It was rejected in favor of faith\n" + string(84, ' ') + "(d) It was considered unnecessary\n" + string(84, ' '),
    string(84, ' ') + "What did Enlightenment thinkers believe about education?\n" + string(84, ' ') + "(a) It was essential for progress\n" + string(84, ' ') + "(b) It should be reserved for the elite\n" + string(84, ' ') + "(c) It was unnecessary for society\n" + string(84, ' ') + "(d) It should be controlled by the church\n" + string(84, ' '),
    string(84, ' ') + "Who was a major opponent of mercantilism?\n" + string(84, ' ') + "(a) John Locke\n" + string(84, ' ') + "(b) Adam Smith\n" + string(84, ' ') + "(c) Montesquieu\n" + string(84, ' ') + "(d) Voltaire\n" + string(84, ' '),
    string(84, ' ') + "What is the connection between the Enlightenment and secularism?\n" + string(84, ' ') + "(a) Enlightenment thinkers rejected all forms of religion\n" + string(84, ' ') + "(b) Enlightenment thinkers promoted secular thinking, focusing on reason and science\n" + string(84, ' ') + "(c) Enlightenment thinkers advocated for religious control over politics\n" + string(84, ' ') + "(d) Enlightenment thinkers believed in expanding religious authority\n" + string(84, ' '),
    string(84, ' ') + "How did Enlightenment ideas spread?\n" + string(84, ' ') + "(a) Through books and salons\n" + string(84, ' ') + "(b) Through royal decrees\n" + string(84, ' ') + "(c) By word of mouth only\n" + string(84, ' ') + "(d) Through military conquests\n" + string(84, ' ')
    };

    string questionsHard[10] = {
    string(84, ' ') + "What was the role of the Enlightenment in the American Revolution?\n" + string(84, ' ') + "(a) Focused on military strategies\n" + string(84, ' ') + "(b) Advocated for religious control\n" + string(84, ' ') + "(c) Inspired ideas of liberty and governance\n" + string(84, ' ') + "(d) Promoted absolute monarchy\n" + string(84, ' '),
    string(84, ' ') + "How did the Enlightenment challenge traditional monarchy?\n" + string(84, ' ') + "(a) It ignored political systems entirely\n" + string(84, ' ') + "(b) It supported the divine right of kings\n" + string(84, ' ') + "(c) It promoted monarchy as the best form of government\n" + string(84, ' ') + "(d) It questioned divine right and absolutism\n" + string(84, ' '),
    string(84, ' ') + "What is the difference between rationalism and empiricism?\n" + string(84, ' ') + "(a) There is no difference\n" + string(84, ' ') + "(b) Rationalism is reason-based, empiricism is experience-based\n" + string(84, ' ') + "(c) Both rely entirely on sensory experience\n" + string(84, ' ') + "(d) Rationalism is based on authority, empiricism on faith\n" + string(84, ' '),
    string(84, ' ') + "Which Enlightenment ideas influenced modern democracy?\n" + string(84, ' ') + "(a) The belief in theocratic rule\n" + string(84, ' ') + "(b) Freedom, equality, and government accountability\n" + string(84, ' ') + "(c) Monarchy and divine right\n" + string(84, ' ') + "(d) Complete rejection of law and order\n" + string(84, ' '),
    string(84, ' ') + "What was the impact of Rousseau’s concept of the general will?\n" + string(84, ' ') + "(a) It encouraged authoritarian rule\n" + string(84, ' ') + "(b) It promoted absolute monarchy\n" + string(84, ' ') + "(c) It emphasized religious control over politics\n" + string(84, ' ') + "(d) It led to ideas of direct democracy\n" + string(84, ' '),
    string(84, ' ') + "How did Kant define Enlightenment?\n" + string(84, ' ') + "(a) The rejection of science in favor of tradition\n" + string(84, ' ') + "(b) The belief in divine right\n" + string(84, ' ') + "(c) Dare to know\n" + string(84, ' ') + "(d) The pursuit of knowledge through religion\n" + string(84, ' '),
    string(84, ' ') + "What was the role of skepticism in the Enlightenment?\n" + string(84, ' ') + "(a) It promoted absolute monarchy\n" + string(84, ' ') + "(b) It led to questioning authority\n" + string(84, ' ') + "(c) It encouraged unquestioning belief in tradition\n" + string(84, ' ') + "(d) It supported religious dogma\n" + string(84, ' '),
    string(84, ' ') + "What did David Hume argue about human understanding?\n" + string(84, ' ') + "(a) That knowledge comes from experience\n" + string(84, ' ') + "(b) That knowledge is entirely based on reason\n" + string(84, ' ') + "(c) That human understanding is limited to superstition\n" + string(84, ' ') + "(d) That all knowledge is derived from divine intervention\n" + string(84, ' '),
    string(84, ' ') + "How did the Enlightenment affect religious institutions?\n" + string(84, ' ') + "(a) It weakened their power\n" + string(84, ' ') + "(b) It gave them more authority\n" + string(84, ' ') + "(c) It made them the center of governance\n" + string(84, ' ') + "(d) It led to a complete merging of religion and politics\n" + string(84, ' '),
    string(84, ' ') + "What was the impact of the Enlightenment on scientific progress?\n" + string(84, ' ') + "(a) It emphasized religious explanations over science\n" + string(84, ' ') + "(b) It led to a rejection of science\n" + string(84, ' ') + "(c) It limited scientific exploration\n" + string(84, ' ') + "(d) It encouraged scientific discovery\n" + string(84, ' ')
    };

    string answersEasy[20] = {
    "b", "c", "c", "b", "c", "c", "b", "c", "a", "b", "b", "a", "c", "b", "a", "c", "c", "b", "a", "c"
    };


    string answersMedium[20] = {
    "a", "b", "b", "c", "c", "c", "b", "b", "a", "c", "c", "d", "a", "b", "a", "b", "b", "b", "b", "a"
    };

    string answersHard[10] = {
    "c", "d", "b", "b", "d", "c", "b", "a", "a", "d"
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

    float OverallEnlightenment = 0; // these are the points from the test

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
            OverallEnlightenment += 1;
        }
        else {
            OverallEnlightenment = OverallEnlightenment;
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
            OverallEnlightenment += 2;
        }
        else {
            OverallEnlightenment = OverallEnlightenment;
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
            OverallEnlightenment += 3;
        }
        else {
            OverallEnlightenment = OverallEnlightenment;
        }

        system("cls");

    }


    cout << setw(80) << " " << endl;
    cout << setw(100) << " " << endl;
    cout << "\033[94m" << setw(155) << "----------------------------------------------------------------------------------------------" << "\033[0m" << endl;
    cout << setw(100) << " " << endl;
    cout << "\033[94m" << setw(160) << "--------------------------------------------------------------------------------------------------------" << "\033[0m" << endl;

    float GradeEnlightenment = (OverallEnlightenment / 34) * 100;

    int FinalGrade;

    if (GradeEnlightenment >= 0 && GradeEnlightenment <= 55) {

        FinalGrade = 2;

    }

    if (GradeEnlightenment >= 56 && GradeEnlightenment <= 65) {

        FinalGrade = 3;

    }

    if (GradeEnlightenment >= 66 && GradeEnlightenment <= 79) {

        FinalGrade = 4;

    }

    if (GradeEnlightenment >= 80 && GradeEnlightenment <= 90) {

        FinalGrade = 5;

    }
    if (GradeEnlightenment >= 91) {

        FinalGrade = 6;

    }

    cout << setw(116) << "Your final grade is: " << FinalGrade << endl;
    cout << setw(120) << "Your score is: " << fixed << setprecision(2) << GradeEnlightenment << "%" << endl;


    ofstream leaderboard("leaderboardEnlightenment.txt", ios::app);
    if (leaderboard.is_open()) {
        leaderboard << userName << ", " << userGrade << ", " << GradeEnlightenment << "%, " << FinalGrade << endl;
        leaderboard.close();
    }
    else {
        cout << setw(120) << "Error: Unable to open leaderboard file." << endl;
    }
    

    char choice;
    cout << "                            Enter 'y/Y' if you wish to see the leaderboards for this test, or 'n/N' if you wish to return to the main menu: " << endl;
    cin >> choice;
    cout << setw(80) << " " << endl;
    cout << setw(100) << " " << endl;
    cout << "\033[94m" << setw(155) << "----------------------------------------------------------------------------------------------" << "\033[0m" << endl;
    cout << setw(100) << " " << endl;
    cout << "\033[94m" << setw(160) << "--------------------------------------------------------------------------------------------------------" << "\033[0m" << endl;
	if (choice == 'y' || choice == 'Y') {
		leaderboardEnlightenment();
	}
	else if (choice == 'n' || choice == 'N') {
		testmenu();
	}
	else {
		cout << setw(120) << "Invalid input, returning to main menu." << endl;
		testmenu();
	}
}


