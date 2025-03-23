#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include"Modernism.h"

using namespace std;

void ModernismTest()
{
    //questions and their respective answers ("qeustion 1, 2 ..." is to be replaced with the question, as well as their answers)
    string questionsEasy[20] = {
    "What is Modernism?\n(a) A cultural movement that rejected traditional forms\n(b) A revival of classical art\n(c) A political revolution\n(d) A new religious movement",
    "When did Modernism begin?\n(a) 17th century\n(b) 19th century\n(c) Early 20th century\n(d) 15th century",
    "Which event is often associated with the rise of Modernism?\n(a) World War I\n(b) The Industrial Revolution\n(c) The Renaissance\n(d) The French Revolution",
    "Which art movement is most associated with Modernism?\n(a) Baroque\n(b) Impressionism\n(c) Cubism\n(d) Rococo",
    "Who is known for pioneering Cubism?\n(a) Claude Monet\n(b) Pablo Picasso\n(c) Salvador Dal?\n(d) Andy Warhol",
    "Which of these authors is considered a Modernist writer?\n(a) Charles Dickens\n(b) James Joyce\n(c) William Shakespeare\n(d) Edgar Allan Poe",
    "What is the main theme of Modernism in literature?\n(a) Return to tradition\n(b) Focus on individualism and alienation\n(c) Religious themes\n(d) Romanticism",
    "Which modernist writer wrote 'Ulysses'?\n(a) Ernest Hemingway\n(b) T.S. Eliot\n(c) James Joyce\n(d) F. Scott Fitzgerald",
    "What did Modernism in art reject?\n(a) Realism and Romanticism\n(b) Modern technology\n(c) Abstract forms\n(d) New political systems",
    "Which movement preceded Modernism?\n(a) Renaissance\n(b) Romanticism\n(c) Realism\n(d) Baroque",
    "Which of these is an example of Modernist architecture?\n(a) Gothic cathedral\n(b) The Guggenheim Museum\n(c) The Parthenon\n(d) The Eiffel Tower",
    "What literary technique is often used by Modernist writers?\n(a) Flashbacks\n(b) Stream of consciousness\n(c) Allegory\n(d) Satire",
    "Which composer is associated with Modernist music?\n(a) Beethoven\n(b) Igor Stravinsky\n(c) Wolfgang Amadeus Mozart\n(d) Franz Schubert",
    "Which artistic technique is linked to Cubism?\n(a) Surrealism\n(b) Abstract expressionism\n(c) Fragmentation of objects\n(d) Hyperrealism",
    "What is the Modernist view of reality?\n(a) It is stable and unchanging\n(b) It is subjective and fragmented\n(c) It is an illusion\n(d) It is divinely ordered",
    "Which movement was a response to the horrors of World War I?\n(a) Realism\n(b) Modernism\n(c) Romanticism\n(d) Surrealism",
    "Which literary work is considered a key Modernist text?\n(a) 'Pride and Prejudice'\n(b) 'Moby-Dick'\n(c) 'The Waste Land'\n(d) 'The Great Gatsby'",
    "What is one of the characteristics of Modernist literature?\n(a) Linear narrative structure\n(b) Focus on the external world\n(c) Experimental narrative techniques\n(d) Simple, clear language",
    "Which of these was a key aspect of Modernism in visual arts?\n(a) Detailed representation of nature\n(b) Focus on the subconscious mind\n(c) Abstraction and simplification of form\n(d) Emphasis on historical accuracy",
    "Which Modernist writer is known for 'The Waste Land'?\n(a) James Joyce\n(b) Virginia Woolf\n(c) T.S. Eliot\n(d) Ernest Hemingway"
    };


    string questionsMedium[20] = {
    "What was a key characteristic of Modernist art?\n(a) Focus on realism\n(b) Rejection of traditional forms\n(c) Emphasis on religious themes\n(d) Detailed natural landscapes",
    "Which artist is most associated with Surrealism?\n(a) Marc Chagall\n(b) Pablo Picasso\n(c) Salvador Dal?\n(d) Henri Matisse",
    "How did Modernism in literature differ from previous periods?\n(a) It emphasized conventional plot structures\n(b) It focused on the individual experience and inner consciousness\n(c) It promoted storytelling through linear narratives\n(d) It followed traditional forms and structures",
    "What did the Modernist movement emphasize in its works?\n(a) Scientific accuracy\n(b) Emotional expression and subjectivity\n(c) Religious values and symbolism\n(d) Social realism",
    "Which of these authors is considered a key figure in Modernist literature?\n(a) Emily Dickinson\n(b) F. Scott Fitzgerald\n(c) William Wordsworth\n(d) Virginia Woolf",
    "Which art style is directly linked to Modernism?\n(a) Realism\n(b) Abstract expressionism\n(c) Neoclassicism\n(d) Rococo",
    "Who is the author of 'The Waste Land', a seminal Modernist text?\n(a) Ernest Hemingway\n(b) James Joyce\n(c) F. Scott Fitzgerald\n(d) T.S. Eliot",
    "Which Modernist movement sought to portray a fragmented, subjective experience of reality?\n(a) Surrealism\n(b) Dadaism\n(c) Cubism\n(d) Expressionism",
    "What influence did World War I have on Modernist literature?\n(a) It inspired optimism and traditional values\n(b) It led to a rejection of technology in art\n(c) It influenced a sense of disillusionment and fragmentation\n(d) It encouraged a return to classical forms",
    "Who is known for pioneering stream-of-consciousness writing in Modernist literature?\n(a) James Joyce\n(b) Charles Dickens\n(c) John Milton\n(d) Leo Tolstoy",
    "What did Modernist artists reject in their depictions of the human experience?\n(a) Color\n(b) Objectivity\n(c) Traditional forms and realism\n(d) Symbolism",
    "How did Modernism in music challenge traditional forms?\n(a) By using classical orchestration\n(b) By emphasizing melody over harmony\n(c) By breaking from traditional structures and experimenting with dissonance\n(d) By focusing on folk music",
    "What is one of the central themes in Modernist literature?\n(a) The pursuit of truth through religion\n(b) The quest for national identity\n(c) The alienation of the individual in modern society\n(d) The glorification of nature",
    "Which of the following is an example of Modernist architecture?\n(a) The Parthenon\n(b) The Sydney Opera House\n(c) The Guggenheim Museum\n(d) The Notre Dame Cathedral",
    "Which concept is associated with Modernist writers?\n(a) Allegory\n(b) Realism\n(c) Disillusionment and fragmentation\n(d) Romantic heroism",
    "What was the goal of the Modernist movement in literature?\n(a) To create straightforward, accessible narratives\n(b) To experiment with form and structure to reflect the complexity of the modern experience\n(c) To promote traditional moral values\n(d) To focus on historical events",
    "Who is known for creating 'Les Demoiselles d'Avignon', a key Modernist painting?\n(a) Vincent van Gogh\n(b) Pablo Picasso\n(c) Claude Monet\n(d) Georges Braque",
    "How did Modernism challenge the concept of objective reality?\n(a) By emphasizing nature as the true reality\n(b) By suggesting that reality is fragmented and subjective\n(c) By focusing solely on historical truth\n(d) By rejecting all forms of human expression",
    "Which movement within Modernism aimed to express the unconscious mind?\n(a) Surrealism\n(b) Realism\n(c) Expressionism\n(d) Dadaism",
    "Which of the following is a characteristic of Modernist theater?\n(a) Use of elaborate costumes\n(b) Realistic portrayals of daily life\n(c) Breaking of the fourth wall and non-linear narratives\n(d) Focus on historical events"
    };


    string questionsHard[10] = {
     "Which philosophy influenced the development of Modernist literature?\n(a) Existentialism\n(b) Utilitarianism\n(c) Pragmatism\n(d) Rationalism",
     "What was a key theme in Modernist literature regarding time?\n(a) Linear and structured narrative\n(b) The fluidity and subjectivity of time\n(c) A return to chronological order\n(d) A focus on the past",
     "Which philosophical movement most influenced the stream-of-consciousness technique?\n(a) Phenomenology\n(b) Structuralism\n(c) Idealism\n(d) Empiricism",
     "What impact did World War II have on Modernist movements in art?\n(a) It encouraged a return to traditional styles\n(b) It deepened the fragmentation and alienation themes\n(c) It inspired new forms of realism\n(d) It led to a decline in artistic production",
     "Which Modernist writer explored the concept of the 'unreliable narrator'?\n(a) T.S. Eliot\n(b) James Joyce\n(c) William Faulkner\n(d) Franz Kafka",
     "Which art movement in Modernism rejected both realism and the constraints of formal structure?\n(a) Impressionism\n(b) Cubism\n(c) Dadaism\n(d) Surrealism",
     "Which of these authors is considered a Modernist but is also known for his involvement in the development of the Southern Gothic style?\n(a) William Faulkner\n(b) Ernest Hemingway\n(c) Virginia Woolf\n(d) F. Scott Fitzgerald",
     "What did Modernist writers and artists think about tradition?\n(a) They fully embraced tradition as a guiding force\n(b) They believed in rejecting and breaking away from tradition\n(c) They only critiqued tradition in minor ways\n(d) They focused on preserving traditional forms",
     "What is the significance of the concept of 'stream of consciousness' in Modernist literature?\n(a) It was a method to clearly describe thoughts in chronological order\n(b) It was used to depict the fragmented and disjointed nature of human consciousness\n(c) It was a technique to narrate long and detailed descriptions of nature\n(d) It represented a return to classical rhetoric and structured dialogue",
     "Which of the following was a response to the disillusionment after World War I and became integral to Modernism?\n(a) The rejection of industrialism\n(b) The rise of surrealist imagery\n(c) A focus on nihilism and the absurd\n(d) A return to moral certainty and realism"
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

        cout << "||||" << PickedQuestionEasy[i] << "||||" << endl;



        cout << endl;

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

        cout << "||||" << PickedQuestionMedium[i] << "||||" << endl;


        cout << endl;

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

        cout << "||||" << PickedQuestionHard[i] << "||||" << endl;


        cout << endl;

        getline(cin, EnteredAnswerHard[i]);



        if (EnteredAnswerHard[i] == PickedHardAnswers[i]) {
            OverallModernism += 3;
        }
        else {
            OverallModernism = OverallModernism;
        }

        system("cls");

    }

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

    cout << "Your final grade is: " << FinalGrade << endl;
    cout << "Your score is: " << GradeModernism << "%" << endl;


}