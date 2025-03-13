#ifndef Realism
#define Realism


//questions and their respective answers ("qeustion 1, 2 ..." is to be replaced with the question, as well as their answers)
string questionsEasy[20] = { "What is social realism?", "In which century did social realism emerge?", "Who is the author of Father Goriot?", "Who is the author of Madame Bovary?", "In which country does Father Goriot take place?", "In which country does Madame Bovary take place?", "What is the name of the young student in Father Goriot?", "What is the name of Emma Bovary’s husband?", "What is the main theme of Father Goriot?", "What is the main theme of Madame Bovary?", "What does Madame Vauquer’s boarding house symbolize?", "What leads to Emma Bovary’s downfall?", "What was Father Goriot’s social status at the beginning of the novel?", "What genre is Madame Bovary?", "What genre is Father Goriot?", "Which literary movement came before social realism?", "What is the nature of Vautrin in Father Goriot?", "What is the name of the town where the Bovarys live?", "What is Charles Bovary’s profession?", "What happens to Father Goriot’s daughters?" };

string questionsMedium[20] = { "What genre is Father Goriot?", "What genre is Madame Bovary?", "What is the main theme of Father Goriot?", "What is the main theme of Madame Bovary?", "What is Rastignac’s social status at the beginning? ", "How did Father Goriot make his fortune?", "What happens to Father Goriot’s daughters?", "Which character in Father Goriot is a criminal?", "What is Emma Bovary’s husband’s profession?", "How does Emma Bovary die?", "What does Rastignac dream of achieving?", "What is Emma Bovary’s main flaw?", "Who wrote The Human Comedy?", "In which century did Balzac live?", "In which century did Flaubert live? ", "How does Flaubert present reality?", "What literary technique does Balzac use?", "What is Emma Bovary’s marriage like?", "How does Father Goriot end? ", "What does Rastignac say at the end of the novel?" };

string questionsHard[10] = { "Which literary movement came before social realism?", "What main issue does Balzac reveal?", "What main issue does Flaubert reveal?", "What does Madame Vauquer’s boarding house symbolize?", "Which character in Father Goriot represents the criminal world?", "What literary method does Flaubert use?", "What is Emma Bovary’s goal?", "What happens to Emma Bovary’s husband?", "What does Madame Bovary criticize?", "What style does Balzac use?" };

string answersEasy[20] = { "A literary movement depicting social issues.", "19th century.", "Honore de Balzac.", "Gustave Flaubert.", "France.", "France.", "Eugene de Rastignac.", "Charles Bovary.", "Money and society.", "Illusions and reality.", "Social hierarchy.", "Debt and affairs.", "Wealthy merchant.", "Realist novel.", "Realist novel.", "Romanticism.", "Criminal mastermind.", "Yonville.", "Doctor.", "They abandon him." };

string answersMedium[20] = { "Realist novel.", "Realist novel.", "Money and society.", "Illusions and reality.", "Poor student.", "Through trade.", "They reject him.", "Vautrin.", "Doctor.", "Poisoning herself.", "Wealth and success.", "Naive", "Balzac.", "19th century.", "19th century.", "Objectively.", "Detailed description.", "Unhappy.", "Goriot dies poor.", "It’s between us now, Paris and me!" };
string answersHard[10] = { "Romanticism.", "The power of money.", "Illusory dreams.", "Social hierarchy.", "Vautrin.", "Objectivity.", "To live like in a novel.", "He dies of grief.", "Bourgeois values.", "Realism." };


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









float OverallModernizum = 0; // these are the points from the test

string EnteredAnswerEasy[10];
string EnteredAnswerMedium[6];
string EnteredAnswerHard[4];

for (int i = 0; i < 10; i++) {

    cout << "||||" << PickedQuestionEasy[i] << "||||" << endl;

    cout << endl;

    cin >> EnteredAnswerEasy[i];

    if (EnteredAnswerEasy[i] == PickedEasyAnswers[i]) {
        OverallModernizum++;
    }
    else {
        OverallModernizum = OverallModernizum;
    }

    system("cls");

}

for (int i = 0; i < 6; i++) {

    cout << "||||" << PickedQuestionMedium[i] << "||||" << endl;

    cout << endl;

    cin >> EnteredAnswerMedium[i];

    if (EnteredAnswerMedium[i] == PickedMediumAnswers[i]) {
        OverallModernizum += 2;
    }
    else {
        OverallModernizum = OverallModernizum;
    }

    system("cls");

}

for (int i = 0; i < 4; i++) {

    cout << "||||" << PickedQuestionHard[i] << "||||" << endl;

    cin >> EnteredAnswerHard[i];

    if (EnteredAnswerHard[i] == PickedHardAnswers[i]) {
        OverallModernizum += 3;
    }
    else {
        OverallModernizum = OverallModernizum;
    }

    system("cls");

}

#endif