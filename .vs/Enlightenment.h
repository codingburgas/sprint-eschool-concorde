#ifndef Enlightenment
#define Enlightenment


//questions and their respective answers ("qeustion 1, 2 ..." is to be replaced with the question, as well as their answers)
string questionsEasy[20] = { "What was the Age of Enlightenment?", "In which century did the Enlightenment occur?", "Who wrote 'The Social Contract'?", "Who wrote 'Two Treatises of Government'?", "Which country was the center of the Enlightenment?", "Who is known as the father of modern philosophy?", "Which Enlightenment thinker proposed separation of powers?", "Who wrote 'Candide'?", "What was the main goal of the Enlightenment?", "What did the Enlightenment emphasize over tradition?", "Who developed the idea of the general will?", "What is 'tabula rasa'?", "Who wrote 'The Spirit of the Laws'?", "Which Enlightenment thinker advocated for free speech?", "What did Voltaire criticize in his writings?", "What form of government did Enlightenment thinkers favor?", "Who is known for advocating women’s rights during the Enlightenment?", "What is Deism?", "Who wrote 'A Vindication of the Rights of Woman'?", "What revolution was inspired by Enlightenment ideas?" };

string questionsMedium[20] = { "What role did coffeehouses play in the Enlightenment?", "Which Enlightenment thinker influenced the U.S. Constitution?", "What is 'natural rights' according to John Locke?", "Which Enlightenment thinker argued for religious tolerance?", "Who coined the phrase 'I think, therefore I am'?", "What economic system was influenced by Adam Smith?", "What is the 'invisible hand' theory?", "Which Enlightenment thinker developed the concept of checks and balances?", "What is an 'Enlightened Despot'?", "Which ruler was considered an Enlightened Despot?", "What book did John Locke write about government?", "Who wrote 'The Wealth of Nations'?", "What was the purpose of Diderot’s Encyclopedia?", "What is 'social contract theory'?", "Which Enlightenment thinker inspired the French Revolution?", "What role did reason play in the Enlightenment?", "What did Enlightenment thinkers believe about education?", "Who was a major opponent of mercantilism?", "What is the connection between the Enlightenment and secularism?", "How did Enlightenment ideas spread?" };

string questionsHard[10] = { "What was the role of the Enlightenment in the American Revolution?", "How did the Enlightenment challenge traditional monarchy?", "What is the difference between rationalism and empiricism?", "Which Enlightenment ideas influenced modern democracy?", "What was the impact of Rousseau’s concept of the general will?", "How did Kant define Enlightenment?", "What was the role of skepticism in the Enlightenment?", "What did David Hume argue about human understanding?", "How did the Enlightenment affect religious institutions?", "What was the impact of the Enlightenment on scientific progress?" };


string answersEasy[20] = { "An intellectual movement emphasizing reason and individualism.", "18th century.", "Jean-Jacques Rousseau.", "John Locke.", "France.", "Ren? Descartes.", "Montesquieu.", "Voltaire.", "To promote reason and progress.", "Reason.", "Rousseau.", "The mind is a blank slate.", "Montesquieu.", "Voltaire.", "The church and monarchy.", "Democracy or constitutional monarchy.", "Mary Wollstonecraft.", "Belief in a non-intervening God.", "Mary Wollstonecraft.", "The American Revolution." };

string answersMedium[20] = { "Places for intellectual discussion.", "Montesquieu.", "Life, liberty, and property.", "Voltaire.", "Ren? Descartes.", "Capitalism.", "Free-market regulation.", "Montesquieu.", "A ruler who embraced Enlightenment ideas.", "Frederick the Great.", "Two Treatises of Government.", "Adam Smith.", "To spread knowledge and reason.", "Government based on consent.", "Rousseau.", "It was the foundation of knowledge.", "It was essential for progress.", "Adam Smith.", "It promoted secular thinking.", "Through books and salons." };

string answersHard[10] = { "Inspired ideas of liberty and governance.", "It questioned divine right and absolutism.", "Rationalism is reason-based, empiricism is experience-based.", "Freedom, equality, and government accountability.", "It led to ideas of direct democracy.", "Dare to know.", "It led to questioning authority.", "That knowledge comes from experience.", "It weakened their power.", "It encouraged scientific discovery." };

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









float OverallAgeOfEnlightenment = 0; // these are the points from the test

string EnteredAnswerEasy[10];
string EnteredAnswerMedium[6];
string EnteredAnswerHard[4];

for (int i = 0; i < 10; i++) {

    cout << "||||" << PickedQuestionEasy[i] << "||||" << endl;

    cout << endl;

    cin >> EnteredAnswerEasy[i];

    if (EnteredAnswerEasy[i] == PickedEasyAnswers[i]) {
        OverallAgeOfEnlightenment++;
    }
    else {
        OverallAgeOfEnlightenment = OverallAgeOfEnlightenment;
    }

    system("cls");

}

for (int i = 0; i < 6; i++) {

    cout << "||||" << PickedQuestionMedium[i] << "||||" << endl;

    cout << endl;

    cin >> EnteredAnswerMedium[i];

    if (EnteredAnswerMedium[i] == PickedMediumAnswers[i]) {
        OverallAgeOfEnlightenment += 2;
    }
    else {
        OverallAgeOfEnlightenment = OverallAgeOfEnlightenment;
    }

    system("cls");

}

for (int i = 0; i < 4; i++) {

    cout << "||||" << PickedQuestionHard[i] << "||||" << endl;

    cin >> EnteredAnswerHard[i];

    if (EnteredAnswerHard[i] == PickedHardAnswers[i]) {
        OverallAgeOfEnlightenment += 3;
    }
    else {
        OverallAgeOfEnlightenment = OverallAgeOfEnlightenment;
    }

    system("cls");

}



#endif