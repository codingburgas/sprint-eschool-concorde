#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include"Modernism.h"
#include"TestMenu.h"
#include"leaderboardModernism.h"

using namespace std;

void ModernismTest()
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
    cout << setw(172) << "\033[38;2;0;150;170m-----------------------------------------------------------------------------------------------\033[0m" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(168) << "\033[38;2;0;150;170m---------------------------------------------------------------------------------------\033[0m" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(156) << "\033[38;5;180m                      Welcome to the Modernism test!                      \033[0m" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(168) << "\033[38;2;0;150;170m---------------------------------------------------------------------------------------\033[0m" << endl;
    cout << setw(80) << "" << endl;
    cout << setw(172) << "\033[38;2;0;150;170m-----------------------------------------------------------------------------------------------\033[0m" << endl;
    cout << setw(110) << " Enter your name: ";
    cin.ignore();
    getline(cin, userName);
    cout << setw(120) << "Enter your grade(9A, 9B, 9V, 9G)  ";
    cin >> userGrade;



    //questions and their respective answers

    string questionsEasy[20] = {
    string(84, ' ') + "What is Modernism?\n" + string(84, ' ') + "(a) A cultural movement that rejected traditional forms\n" + string(84, ' ') + "(b) A revival of classical art\n" + string(84, ' ') + "(c) A political revolution\n" + string(84, ' ') + "(d) A new religious movement\n" + string(84, ' '),
    string(84, ' ') + "When did Modernism begin?\n" + string(84, ' ') + "(a) 17th century\n" + string(84, ' ') + "(b) 19th century\n" + string(84, ' ') + "(c) Early 20th century\n" + string(84, ' ') + "(d) 15th century\n" + string(84, ' '),
    string(84, ' ') + "Which event is often associated with the rise of Modernism?\n" + string(84, ' ') + "(a) World War I\n" + string(84, ' ') + "(b) The Industrial Revolution\n" + string(84, ' ') + "(c) The Renaissance\n" + string(84, ' ') + "(d) The French Revolution\n" + string(84, ' '),
    string(84, ' ') + "Which art movement is most associated with Modernism?\n" + string(84, ' ') + "(a) Baroque\n" + string(84, ' ') + "(b) Impressionism\n" + string(84, ' ') + "(c) Cubism\n" + string(84, ' ') + "(d) Rococo\n" + string(84, ' '),
    string(84, ' ') + "Who is known for pioneering Cubism?\n" + string(84, ' ') + "(a) Claude Monet\n" + string(84, ' ') + "(b) Pablo Picasso\n" + string(84, ' ') + "(c) Salvador Dal?\n" + string(84, ' ') + "(d) Andy Warhol\n" + string(84, ' '),
    string(84, ' ') + "Which of these authors is considered a Modernist writer?\n" + string(84, ' ') + "(a) Charles Dickens\n" + string(84, ' ') + "(b) James Joyce\n" + string(84, ' ') + "(c) William Shakespeare\n" + string(84, ' ') + "(d) Edgar Allan Poe\n" + string(84, ' '),
    string(84, ' ') + "What is the main theme of Modernism in literature?\n" + string(84, ' ') + "(a) Return to tradition\n" + string(84, ' ') + "(b) Focus on individualism and alienation\n" + string(84, ' ') + "(c) Religious themes\n" + string(84, ' ') + "(d) Romanticism\n" + string(84, ' '),
    string(84, ' ') + "Which modernist writer wrote 'Ulysses'?\n" + string(84, ' ') + "(a) Ernest Hemingway\n" + string(84, ' ') + "(b) T.S. Eliot\n" + string(84, ' ') + "(c) James Joyce\n" + string(84, ' ') + "(d) F. Scott Fitzgerald\n" + string(84, ' '),
    string(84, ' ') + "What did Modernism in art reject?\n" + string(84, ' ') + "(a) Realism and Romanticism\n" + string(84, ' ') + "(b) Modern technology\n" + string(84, ' ') + "(c) Abstract forms\n" + string(84, ' ') + "(d) New political systems\n" + string(84, ' '),
    string(84, ' ') + "Which movement preceded Modernism?\n" + string(84, ' ') + "(a) Renaissance\n" + string(84, ' ') + "(b) Romanticism\n" + string(84, ' ') + "(c) Realism\n" + string(84, ' ') + "(d) Baroque\n" + string(84, ' '),
    string(84, ' ') + "Which of these is an example of Modernist architecture?\n" + string(84, ' ') + "(a) Gothic cathedral\n" + string(84, ' ') + "(b) The Guggenheim Museum\n" + string(84, ' ') + "(c) The Parthenon\n" + string(84, ' ') + "(d) The Eiffel Tower\n" + string(84, ' '),
    string(84, ' ') + "What literary technique is often used by Modernist writers?\n" + string(84, ' ') + "(a) Flashbacks\n" + string(84, ' ') + "(b) Stream of consciousness\n" + string(84, ' ') + "(c) Allegory\n" + string(84, ' ') + "(d) Satire\n" + string(84, ' '),
    string(84, ' ') + "Which composer is associated with Modernist music?\n" + string(84, ' ') + "(a) Beethoven\n" + string(84, ' ') + "(b) Igor Stravinsky\n" + string(84, ' ') + "(c) Wolfgang Amadeus Mozart\n" + string(84, ' ') + "(d) Franz Schubert\n" + string(84, ' '),
    string(84, ' ') + "Which artistic technique is linked to Cubism?\n" + string(84, ' ') + "(a) Surrealism\n" + string(84, ' ') + "(b) Abstract expressionism\n" + string(84, ' ') + "(c) Fragmentation of objects\n" + string(84, ' ') + "(d) Hyperrealism\n" + string(84, ' '),
    string(84, ' ') + "What is the Modernist view of reality?\n" + string(84, ' ') + "(a) It is stable and unchanging\n" + string(84, ' ') + "(b) It is subjective and fragmented\n" + string(84, ' ') + "(c) It is an illusion\n" + string(84, ' ') + "(d) It is divinely ordered\n" + string(84, ' '),
    string(84, ' ') + "Which movement was a response to the horrors of World War I?\n" + string(84, ' ') + "(a) Realism\n" + string(84, ' ') + "(b) Modernism\n" + string(84, ' ') + "(c) Romanticism\n" + string(84, ' ') + "(d) Surrealism\n" + string(84, ' '),
    string(84, ' ') + "Which literary work is considered a key Modernist text?\n" + string(84, ' ') + "(a) 'Pride and Prejudice'\n" + string(84, ' ') + "(b) 'Moby-Dick'\n" + string(84, ' ') + "(c) 'The Waste Land'\n" + string(84, ' ') + "(d) 'The Great Gatsby'\n" + string(84, ' '),
    string(84, ' ') + "What is one of the characteristics of Modernist literature?\n" + string(84, ' ') + "(a) Linear narrative structure\n" + string(84, ' ') + "(b) Focus on the external world\n" + string(84, ' ') + "(c) Experimental narrative techniques\n" + string(84, ' ') + "(d) Simple, clear language\n" + string(84, ' '),
    string(84, ' ') + "Which of these was a key aspect of Modernism in visual arts?\n" + string(84, ' ') + "(a) Detailed representation of nature\n" + string(84, ' ') + "(b) Focus on the subconscious mind\n" + string(84, ' ') + "(c) Abstraction and simplification of form\n" + string(84, ' ') + "(d) Emphasis on historical accuracy\n" + string(84, ' '),
    string(84, ' ') + "Which Modernist writer is known for 'The Waste Land'?\n" + string(84, ' ') + "(a) James Joyce\n" + string(84, ' ') + "(b) Virginia Woolf\n" + string(84, ' ') + "(c) T.S. Eliot\n" + string(84, ' ') + "(d) Ernest Hemingway\n" + string(84, ' ')
    };


    string questionsMedium[20] = {
    string(84, ' ') + "What was a key characteristic of Modernist art ? \n" + string(84, ' ') + "(a)Focus on realism\n" + string(84, ' ') + "(b)Rejection of traditional forms\n" + string(84, ' ') + "(c)Emphasis on religious themes\n" + string(84, ' ') + "(d)Detailed natural landscapes\n" + string(84, ' '),
    string(84, ' ') + "Which artist is most associated with Surrealism?\n" + string(84, ' ') + "(a) Marc Chagall\n" + string(84, ' ') + "(b) Pablo Picasso\n" + string(84, ' ') + "(c) Salvador Dal?\n" + string(84, ' ') + "(d) Henri Matisse\n" + string(84, ' '),
    string(84, ' ') + "How did Modernism in literature differ from previous periods?\n" + string(84, ' ') + "(a) It emphasized conventional plot structures\n" + string(84, ' ') + "(b) It focused on the individual experience and inner consciousness\n" + string(84, ' ') + "(c) It promoted storytelling through linear narratives\n" + string(84, ' ') + "(d) It followed traditional forms and structures\n" + string(84, ' '),
    string(84, ' ') + "What did the Modernist movement emphasize in its works?\n" + string(84, ' ') + "(a) Scientific accuracy\n" + string(84, ' ') + "(b) Emotional expression and subjectivity\n" + string(84, ' ') + "(c) Religious values and symbolism\n" + string(84, ' ') + "(d) Social realism\n" + string(84, ' '),
    string(84, ' ') + "Which of these authors is considered a key figure in Modernist literature?\n" + string(84, ' ') + "(a) Emily Dickinson\n" + string(84, ' ') + "(b) F. Scott Fitzgerald\n" + string(84, ' ') + "(c) William Wordsworth\n" + string(84, ' ') + "(d) Virginia Woolf\n" + string(84, ' '),
    string(84, ' ') + "Which art style is directly linked to Modernism?\n" + string(84, ' ') + "(a) Realism\n" + string(84, ' ') + "(b) Abstract expressionism\n" + string(84, ' ') + "(c) Neoclassicism\n" + string(84, ' ') + "(d) Rococo\n" + string(84, ' '),
    string(84, ' ') + "Who is the author of 'The Waste Land', a seminal Modernist text?\n" + string(84, ' ') + "(a) Ernest Hemingway\n" + string(84, ' ') + "(b) James Joyce\n" + string(84, ' ') + "(c) F. Scott Fitzgerald\n" + string(84, ' ') + "(d) T.S. Eliot\n" + string(84, ' '),
    string(84, ' ') + "Which Modernist movement sought to portray a fragmented, subjective experience of reality?\n" + string(84, ' ') + "(a) Surrealism\n" + string(84, ' ') + "(b) Dadaism\n" + string(84, ' ') + "(c) Cubism\n" + string(84, ' ') + "(d) Expressionism\n" + string(84, ' '),
    string(84, ' ') + "What influence did World War I have on Modernist literature?\n" + string(84, ' ') + "(a) It inspired optimism and traditional values\n" + string(84, ' ') + "(b) It led to a rejection of technology in art\n" + string(84, ' ') + "(c) It influenced a sense of disillusionment and fragmentation\n" + string(84, ' ') + "(d) It encouraged a return to classical forms\n" + string(84, ' '),
    string(84, ' ') + "Who is known for pioneering stream-of-consciousness writing in Modernist literature?\n" + string(84, ' ') + "(a) James Joyce\n" + string(84, ' ') + "(b) Charles Dickens\n" + string(84, ' ') + "(c) John Milton\n" + string(84, ' ') + "(d) Leo Tolstoy\n" + string(84, ' '),
    string(84, ' ') + "What did Modernist artists reject in their depictions of the human experience?\n" + string(84, ' ') + "(a) Color\n" + string(84, ' ') + "(b) Objectivity\n" + string(84, ' ') + "(c) Traditional forms and realism\n" + string(84, ' ') + "(d) Symbolism\n" + string(84, ' '),
    string(84, ' ') + "How did Modernism in music challenge traditional forms?\n" + string(84, ' ') + "(a) By using classical orchestration\n" + string(84, ' ') + "(b) By emphasizing melody over harmony\n" + string(84, ' ') + "(c) By breaking from traditional structures and experimenting with dissonance\n" + string(84, ' ') + "(d) By focusing on folk music\n" + string(84, ' '),
    string(84, ' ') + "What is one of the central themes in Modernist literature?\n" + string(84, ' ') + "(a) The pursuit of truth through religion\n" + string(84, ' ') + "(b) The quest for national identity\n" + string(84, ' ') + "(c) The alienation of the individual in modern society\n" + string(84, ' ') + "(d) The glorification of nature\n" + string(84, ' '),
    string(84, ' ') + "Which of the following is an example of Modernist architecture?\n" + string(84, ' ') + "(a) The Parthenon\n" + string(84, ' ') + "(b) The Sydney Opera House\n" + string(84, ' ') + "(c) The Guggenheim Museum\n" + string(84, ' ') + "(d) The Notre Dame Cathedral\n" + string(84, ' '),
    string(84, ' ') + "Which concept is associated with Modernist writers?\n" + string(84, ' ') + "(a) Allegory\n" + string(84, ' ') + "(b) Realism\n" + string(84, ' ') + "(c) Disillusionment and fragmentation\n" + string(84, ' ') + "(d) Romantic heroism\n" + string(84, ' '),
    string(84, ' ') + "What was the goal of the Modernist movement in literature?\n" + string(84, ' ') + "(a) To create straightforward, accessible narratives\n" + string(84, ' ') + "(b) To experiment with form and structure to reflect the complexity of the modern experience\n" + string(84, ' ') + "(c) To promote traditional moral values\n" + string(84, ' ') + "(d) To focus on historical events\n" + string(84, ' '),
    string(84, ' ') + "Who is known for creating 'Les Demoiselles d'Avignon', a key Modernist painting?\n" + string(84, ' ') + "(a) Vincent van Gogh\n" + string(84, ' ') + "(b) Pablo Picasso\n" + string(84, ' ') + "(c) Claude Monet\n" + string(84, ' ') + "(d) Georges Braque\n" + string(84, ' '),
    string(84, ' ') + "How did Modernism challenge the concept of objective reality?\n" + string(84, ' ') + "(a) By emphasizing nature as the true reality\n" + string(84, ' ') + "(b) By suggesting that reality is fragmented and subjective\n" + string(84, ' ') + "(c) By focusing solely on historical truth\n" + string(84, ' ') + "(d) By rejecting all forms of human expression\n" + string(84, ' '),
    string(84, ' ') + "Which movement within Modernism aimed to express the unconscious mind?\n" + string(84, ' ') + "(a) Surrealism\n" + string(84, ' ') + "(b) Realism\n" + string(84, ' ') + "(c) Expressionism\n" + string(84, ' ') + "(d) Dadaism\n" + string(84, ' '),
    string(84, ' ') + "Which of the following is a characteristic of Modernist theater?\n" + string(84, ' ') + "(a) Use of elaborate costumes\n" + string(84, ' ') + "(b) Realistic portrayals of daily life\n" + string(84, ' ') + "(c) Breaking of the fourth wall and non-linear narratives\n" + string(84, ' ') + "(d) Focus on historical events\n" + string(84, ' ')
    };


    string questionsHard[10] = {
    string(84, ' ') + "Which philosophy influenced the development of Modernist literature?\n" + string(84, ' ') + "(a) Existentialism\n" + string(84, ' ') + "(b) Utilitarianism\n" + string(84, ' ') + "(c) Pragmatism\n" + string(84, ' ') + "(d) Rationalism\n" + string(84, ' '),
    string(84, ' ') + "What was a key theme in Modernist literature regarding time?\n" + string(84, ' ') + "(a) Linear and structured narrative\n" + string(84, ' ') + "(b) The fluidity and subjectivity of time\n" + string(84, ' ') + "(c) A return to chronological order\n" + string(84, ' ') + "(d) A focus on the past\n" + string(84, ' '),
    string(84, ' ') + "Which philosophical movement most influenced the stream-of-consciousness technique?\n" + string(84, ' ') + "(a) Phenomenology\n" + string(84, ' ') + "(b) Structuralism\n" + string(84, ' ') + "(c) Idealism\n" + string(84, ' ') + "(d) Empiricism\n" + string(84, ' '),
    string(84, ' ') + "What impact did World War II have on Modernist movements in art?\n" + string(84, ' ') + "(a) It encouraged a return to traditional styles\n" + string(84, ' ') + "(b) It deepened the fragmentation and alienation themes\n" + string(84, ' ') + "(c) It inspired new forms of realism\n" + string(84, ' ') + "(d) It led to a decline in artistic production\n" + string(84, ' '),
    string(84, ' ') + "Which Modernist writer explored the concept of the 'unreliable narrator'?\n" + string(84, ' ') + "(a) T.S. Eliot\n" + string(84, ' ') + "(b) James Joyce\n" + string(84, ' ') + "(c) William Faulkner\n" + string(84, ' ') + "(d) Franz Kafka\n" + string(84, ' '),
    string(84, ' ') + "Which art movement in Modernism rejected both realism and the constraints of formal structure?\n" + string(84, ' ') + "(a) Impressionism\n" + string(84, ' ') + "(b) Cubism\n" + string(84, ' ') + "(c) Dadaism\n" + string(84, ' ') + "(d) Surrealism\n" + string(84, ' '),
    string(84, ' ') + "Which of these authors is considered a Modernist but is also known for his involvement in the development of the Southern Gothic style?\n" + string(84, ' ') + "(a) William Faulkner\n" + string(84, ' ') + "(b) Ernest Hemingway\n" + string(84, ' ') + "(c) Virginia Woolf\n" + string(84, ' ') + "(d) F. Scott Fitzgerald\n" + string(84, ' '),
    string(84, ' ') + "What did Modernist writers and artists think about tradition?\n" + string(84, ' ') + "(a) They fully embraced tradition as a guiding force\n" + string(84, ' ') + "(b) They believed in rejecting and breaking away from tradition\n" + string(84, ' ') + "(c) They only critiqued tradition in minor ways\n" + string(84, ' ') + "(d) They focused on preserving traditional forms\n" + string(84, ' '),
    string(84, ' ') + "What is the significance of the concept of 'stream of consciousness' in Modernist literature?\n" + string(84, ' ') + "(a) It was a method to clearly describe thoughts in chronological order\n" + string(84, ' ') + "(b) It was used to depict the fragmented and disjointed nature of human consciousness\n" + string(84, ' ') + "(c) It was a technique to narrate long and detailed descriptions of nature\n" + string(84, ' ') + "(d) It represented a return to classical rhetoric and structured dialogue\n" + string(84, ' '),
    string(84, ' ') + "Which of the following was a response to the disillusionment after World War I and became integral to Modernism?\n" + string(84, ' ') + "(a) The rejection of industrialism\n" + string(84, ' ') + "(b) The rise of surrealist imagery\n" + string(84, ' ') + "(c) A focus on nihilism and the absurd\n" + string(84, ' ') + "(d) A return to moral certainty and realism\n" + string(84, ' ')
    };


    string answersEasy[20] = {
    "a", "c", "a", "c", "b", "b", "b", "c", "a", "b", "b", "b", "c", "b", "b", "c", "c", "b", "c", "c"
    };


    string answersMedium[20] = {
     "b", "c", "b", "b", "d", "b", "d", "c", "c", "a", "c", "c", "c", "b", "b", "b", "b", "c", "c", "c"
    };

    string answersHard[10] = {
    "a", "b", "a", "b", "c", "c", "a", "b", "b", "c"
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

    float OverallModernism = 0; // these are the points from the test

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
            OverallModernism += 1;
        }
        else {
            OverallModernism = OverallModernism;
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
            OverallModernism += 2;
        }
        else {
            OverallModernism = OverallModernism;
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
            OverallModernism += 3;
        }
        else {
            OverallModernism = OverallModernism;
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

    float GradeModernism = (OverallModernism / 34) * 100;

    int FinalGrade;

    if (GradeModernism >= 0 && GradeModernism <= 55) {

        FinalGrade = 2;

    }

    if (GradeModernism >= 56 && GradeModernism <= 65) {

        FinalGrade = 3;

    }

    if (GradeModernism >= 66 && GradeModernism <= 79) {

        FinalGrade = 4;

    }

    if (GradeModernism >= 80 && GradeModernism <= 90) {

        FinalGrade = 5;

    }
    if (GradeModernism >= 91) {

        FinalGrade = 6;

    }

    cout << setw(100) << " " << endl;
    cout << setw(116) << "Your final grade is: " << FinalGrade << endl;
    cout << setw(100) << " " << endl;
    cout << setw(110) << "Your score is: " << fixed << setprecision(2) << GradeModernism << "%" << endl;


    ofstream leaderboard("leaderboardModernism.txt", ios::app);
    if (leaderboard.is_open()) {
        leaderboard << userName << ", " << userGrade << ", " << GradeModernism << "%, " << FinalGrade << endl;
        leaderboard.close();
    }
    else {
        cout << setw(120) << "Error: Unable to open leaderboard file." << endl;
    }


    char choice;
    cout << "                                                        Enter 'y/Y' if you wish to see the leaderboards for this test, or 'n/N' if you wish to return to the main menu: " << endl;
   
    cout << setw(80) << " " << endl;
    cout << setw(100) << " " << endl;
    cout << "\033[94m" << setw(160) << "--------------------------------------------------------------------------------------------------------" << "\033[0m" << endl;
    cout << setw(100) << " " << endl;
    cout << "\033[94m" << setw(155) << "----------------------------------------------------------------------------------------------" << "\033[0m" << endl;
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        leaderboardModernism();
    }
    else if (choice == 'n' || choice == 'N') {
        testmenu();
    }
    else {
        cout << setw(120) << "Invalid input, returning to main menu." << endl;
        testmenu();
    }


}