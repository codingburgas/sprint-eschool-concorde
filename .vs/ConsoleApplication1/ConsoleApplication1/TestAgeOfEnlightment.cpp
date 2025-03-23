#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <cstdlib>
#include"Enlightenment.h"

using namespace std;

void AgeOfenlightenmentTest()
{
    // Get the console handle
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Set the background color to white and text color to dark blue
    SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_BLUE);
    //questions and their respective answers
    string questionsEasy[20] = {
     "                    What was the Age of Enlightenment?\n                    (a) A religious revival\n                    (b) An intellectual movement emphasizing reason and individualism\n                    (c) A period of war in Europe\n                    (d) A time of artistic decline\n                    ",
     "                    In which century did the Enlightenment occur?\n                    (a) 16th century\n                    (b) 17th century\n                    (c) 18th century\n                    (d) 19th century\n                    ",
     "                    Who wrote 'The Social Contract'?\n                    (a) John Locke\n                    (b) Voltaire\n                    (c) Jean-Jacques Rousseau\n                    (d) Montesquieu\n                    ",
     "                    Who wrote 'Two Treatises of Government'?\n                    (a) Thomas Hobbes\n                    (b) John Locke\n                    (c) Montesquieu\n                    (d) Voltaire\n                    ",
     "                    Which country was the center of the Enlightenment?\n                    (a) England\n                    (b) Germany\n                    (c) France\n                    (d) Italy\n                    ",
     "                    Who is known as the father of modern philosophy?\n                    (a) Immanuel Kant\n                    (b) Voltaire\n                    (c) Rene Descartes\n                    (d) John Locke\n                    ",
     "                    Which Enlightenment thinker proposed separation of powers?\n                    (a) Rousseau\n                    (b) Montesquieu\n                    (c) Voltaire\n                    (d) Hobbes\n                    ",
     "                    Who wrote 'Candide'?\n                    (a) Montesquieu\n                    (b) Jean-Jacques Rousseau\n                    (c) Voltaire\n                    (d) John Locke\n                    ",
     "                    What was the main goal of the Enlightenment?\n                    (a) To promote reason and progress\n                    (b) To strengthen religious authority\n                    (c) To return to medieval traditions\n                    (d) To expand monarchy power\n                    ",
     "                    What did the Enlightenment emphasize over tradition?\n                    (a) Faith\n                    (b) Reason\n                    (c) Superstition\n                    (d) Divine right\n                    ",
     "                    Who developed the idea of the general will?\n                    (a) Montesquieu\n                    (b) Rousseau\n                    (c) John Locke\n                    (d) Voltaire\n                    ",
     "                    What is 'tabula rasa'?\n                    (a) The idea that the mind is a blank slate\n                    (b) A form of government\n                    (c) A scientific theory\n                    (d) A religious doctrine\n                    ",
     "                    Who wrote 'The Spirit of the Laws'?\n                    (a) Voltaire\n                    (b) Rousseau\n                    (c) Montesquieu\n                    (d) John Locke\n                    ",
     "                    Which Enlightenment thinker advocated for free speech?\n                    (a) Montesquieu\n                    (b) Voltaire\n                    (c) Rousseau\n                    (d) Descartes\n                    ",
     "                    What did Voltaire criticize in his writings?\n                    (a) The church and monarchy\n                    (b) Science and reason\n                    (c) The idea of democracy\n                    (d) The separation of powers\n                    ",
     "                    What form of government did Enlightenment thinkers favor?\n                    (a) Absolute monarchy\n                    (b) Theocracy\n                    (c) Democracy or constitutional monarchy\n                    (d) Feudalism\n                    ",
     "                    Who is known for advocating women’s rights during the Enlightenment?\n                    (a) Voltaire\n                    (b) Montesquieu\n                    (c) Mary Wollstonecraft\n                    (d) Rousseau\n                    ",
     "                    What is Deism?\n                    (a) Belief in many gods\n                    (b) Belief in a non-intervening God\n                    (c) A rejection of all religious ideas\n                    (d) The belief that reason is unnecessary\n                    ",
     "                    Who wrote 'A Vindication of the Rights of Woman'?\n                    (a) Mary Wollstonecraft\n                    (b) Voltaire\n                    (c) Rousseau\n                    (d) Montesquieu\n                    ",
     "                    What revolution was inspired by Enlightenment ideas?\n                    (a) Industrial Revolution\n                    (b) Russian Revolution\n                    (c) The American Revolution\n                    (d) The Renaissance\n                    "
    };

    string questionsMedium[20] = {
        "                    What role did coffeehouses play in the Enlightenment?\n                    (a) Places for intellectual discussion\n                    (b) Centers for religious worship\n                    (c) Social clubs for aristocrats\n                    (d) Places to discuss political conspiracies\n                    ",
        "                    Which Enlightenment thinker influenced the U.S. Constitution?\n                    (a) Rousseau\n                    (b) Montesquieu\n                    (c) John Locke\n                    (d) Voltaire\n                    ",
        "                    What is 'natural rights' according to John Locke?\n                    (a) Rights given by the monarchy\n                    (b) Life, liberty, and property\n                    (c) Rights granted by the church\n                    (d) Rights given by the government\n                    ",
        "                    Which Enlightenment thinker argued for religious tolerance?\n                    (a) Hobbes\n                    (b) Rousseau\n                    (c) Voltaire\n                    (d) Montesquieu\n                    ",
        "                    Who coined the phrase 'I think, therefore I am'?\n                    (a) John Locke\n                    (b) Rousseau\n                    (c) Rene Descartes\n                    (d) Voltaire\n                    ",
        "                    What economic system was influenced by Adam Smith?\n                    (a) Mercantilism\n                    (b) Socialism\n                    (c) Capitalism\n                    (d) Feudalism\n                    ",
        "                    What is the 'invisible hand' theory?\n                    (a) The idea that the government should control the economy\n                    (b) The theory that markets regulate themselves through supply and demand\n                    (c) The idea that workers should regulate their wages\n                    (d) The belief in communal wealth sharing\n                    ",
        "                    Which Enlightenment thinker developed the concept of checks and balances?\n                    (a) John Locke\n                    (b) Montesquieu\n                    (c) Rousseau\n                    (d) Hobbes\n                    ",
        "                    What is an 'Enlightened Despot'?\n                    (a) A ruler who embraces Enlightenment ideas\n                    (b) A ruler who rejects Enlightenment thinking\n                    (c) A ruler who grants full democracy\n                    (d) A ruler who imposes absolute rule\n                    ",
        "                    Which ruler was considered an Enlightened Despot?\n                    (a) Louis XIV\n                    (b) Catherine the Great\n                    (c) Frederick the Great\n                    (d) Charles I\n                    ",
        "                    What book did John Locke write about government?\n                    (a) The Social Contract\n                    (b) The Wealth of Nations\n                    (c) Two Treatises of Government\n                    (d) The Spirit of the Laws\n                    ",
        "                    Who wrote 'The Wealth of Nations'?\n                    (a) Thomas Hobbes\n                    (b) John Locke\n                    (c) Montesquieu\n                    (d) Adam Smith\n                    ",
        "                    What was the purpose of Diderot’s Encyclopedia?\n                    (a) To promote Enlightenment ideas and spread knowledge\n                    (b) To create a record of historical events\n                    (c) To discuss religious philosophies\n                    (d) To document royal genealogies\n                    ",
        "                    What is 'social contract theory'?\n                    (a) The belief that individuals must obey the monarchy\n                    (b) The idea that governments are formed by the consent of the governed\n                    (c) The belief that laws come from divine right\n                    (d) The theory that laws should be decided by religious authorities\n                    ",
        "                    Which Enlightenment thinker inspired the French Revolution?\n                    (a) Voltaire\n                    (b) Rousseau\n                    (c) Montesquieu\n                    (d) Hobbes\n                    ",
        "                    What role did reason play in the Enlightenment?\n                    (a) It was the foundation of knowledge\n                    (b) It was essential for progress\n                    (c) It was rejected in favor of faith\n                    (d) It was considered unnecessary\n                    ",
        "                    What did Enlightenment thinkers believe about education?\n                    (a) It was essential for progress\n                    (b) It should be reserved for the elite\n                    (c) It was unnecessary for society\n                    (d) It should be controlled by the church\n                    ",
        "                    Who was a major opponent of mercantilism?\n                    (a) John Locke\n                    (b) Adam Smith\n                    (c) Montesquieu\n                    (d) Voltaire\n                    ",
        "                    What is the connection between the Enlightenment and secularism?\n                    (a) Enlightenment thinkers rejected all forms of religion\n                    (b) Enlightenment thinkers promoted secular thinking, focusing on reason and science\n                    (c) Enlightenment thinkers advocated for religious control over politics\n                    (d) Enlightenment thinkers believed in expanding religious authority\n                    ",
        "                    How did Enlightenment ideas spread?\n                    (a) Through books and salons\n                    (b) Through royal decrees\n                    (c) By word of mouth only\n                    (d) Through military conquests\n                    "
    };

    string questionsHard[10] = {
    "                    What was the role of the Enlightenment in the American Revolution?\n                    (a) Focused on military strategies\n                    (b) Advocated for religious control\n                    (c) Inspired ideas of liberty and governance\n                    (d) Promoted absolute monarchy\n                    ",
    "                    How did the Enlightenment challenge traditional monarchy?\n                    (a) It ignored political systems entirely\n                    (b) It supported the divine right of kings\n                    (c) It promoted monarchy as the best form of government\n                    (d) It questioned divine right and absolutism\n                    ",
    "                    What is the difference between rationalism and empiricism?\n                    (a) There is no difference\n                    (b) Rationalism is reason-based, empiricism is experience-based\n                    (c) Both rely entirely on sensory experience\n                    (d) Rationalism is based on authority, empiricism on faith\n                    ",
    "                    Which Enlightenment ideas influenced modern democracy?\n                    (a) The belief in theocratic rule\n                    (b) Freedom, equality, and government accountability\n                    (c) Monarchy and divine right\n                    (d) Complete rejection of law and order\n                    ",
    "                    What was the impact of Rousseau’s concept of the general will?\n                    (a) It encouraged authoritarian rule\n                    (b) It promoted absolute monarchy\n                    (c) It emphasized religious control over politics\n                    (d) It led to ideas of direct democracy\n                    ",
    "                    How did Kant define Enlightenment?\n                    (a) The rejection of science in favor of tradition\n                    (b) The belief in divine right\n                    (c) Dare to know\n                    (d) The pursuit of knowledge through religion\n                    ",
    "                    What was the role of skepticism in the Enlightenment?\n                    (a) It promoted absolute monarchy\n                    (b) It led to questioning authority\n                    (c) It encouraged unquestioning belief in tradition\n                    (d) It supported religious dogma\n                    ",
    "                    What did David Hume argue about human understanding?\n                    (a) That knowledge comes from experience\n                    (b) That knowledge is entirely based on reason\n                    (c) That human understanding is limited to superstition\n                    (d) That all knowledge is derived from divine intervention\n                    ",
    "                    How did the Enlightenment affect religious institutions?\n                    (a) It weakened their power\n                    (b) It gave them more authority\n                    (c) It made them the center of governance\n                    (d) It led to a complete merging of religion and politics\n                    ",
    "                    What was the impact of the Enlightenment on scientific progress?\n                    (a) It emphasized religious explanations over science\n                    (b) It led to a rejection of science\n                    (c) It limited scientific exploration\n                    (d) It encouraged scientific discovery\n                    "
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

        cout << PickedQuestionEasy[i] << endl;



        cout << "                                        Your choice: ";

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

        cout << PickedQuestionMedium[i] << endl;


        cout << "                                        Your choice: ";

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

        cout << PickedQuestionHard[i] << endl;


        cout << "                                        Your choice: ";

        getline(cin, EnteredAnswerHard[i]);



        if (EnteredAnswerHard[i] == PickedHardAnswers[i]) {
            OverallEnlightenment += 3;
        }
        else {
            OverallEnlightenment = OverallEnlightenment;
        }

        system("cls");

    }

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

    cout << "Your final grade is: " << FinalGrade << endl;
    cout << "Your score is: " << GradeEnlightenment << "%" << endl;


}