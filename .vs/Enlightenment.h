#ifndef Enlightenment
#define Enlightenment


void Ageofenlightenmenttest() {
    // Initialize Raylib window
    InitWindow(800, 600, "Modernism Test");
    SetTargetFPS(60); // Set frames per second

    // Questions and Answers (Easy, Medium, and Hard)
    string questionsEasy[20] = { "What was the Age of Enlightenment?", "In which century did the Enlightenment occur?", "Who wrote 'The Social Contract'?", "Who wrote 'Two Treatises of Government'?", "Which country was the center of the Enlightenment?", "Who is known as the father of modern philosophy?", "Which Enlightenment thinker proposed separation of powers?", "Who wrote 'Candide'?", "What was the main goal of the Enlightenment?", "What did the Enlightenment emphasize over tradition?", "Who developed the idea of the general will?", "What is 'tabula rasa'?", "Who wrote 'The Spirit of the Laws'?", "Which Enlightenment thinker advocated for free speech?", "What did Voltaire criticize in his writings?", "What form of government did Enlightenment thinkers favor?", "Who is known for advocating women’s rights during the Enlightenment?", "What is Deism?", "Who wrote 'A Vindication of the Rights of Woman'?", "What revolution was inspired by Enlightenment ideas?" };

    string questionsMedium[20] = { "What role did coffeehouses play in the Enlightenment?", "Which Enlightenment thinker influenced the U.S. Constitution?", "What is 'natural rights' according to John Locke?", "Which Enlightenment thinker argued for religious tolerance?", "Who coined the phrase 'I think, therefore I am'?", "What economic system was influenced by Adam Smith?", "What is the 'invisible hand' theory?", "Which Enlightenment thinker developed the concept of checks and balances?", "What is an 'Enlightened Despot'?", "Which ruler was considered an Enlightened Despot?", "What book did John Locke write about government?", "Who wrote 'The Wealth of Nations'?", "What was the purpose of Diderot’s Encyclopedia?", "What is 'social contract theory'?", "Which Enlightenment thinker inspired the French Revolution?", "What role did reason play in the Enlightenment?", "What did Enlightenment thinkers believe about education?", "Who was a major opponent of mercantilism?", "What is the connection between the Enlightenment and secularism?", "How did Enlightenment ideas spread?" };

    string questionsHard[10] = { "What was the role of the Enlightenment in the American Revolution?", "How did the Enlightenment challenge traditional monarchy?", "What is the difference between rationalism and empiricism?", "Which Enlightenment ideas influenced modern democracy?", "What was the impact of Rousseau’s concept of the general will?", "How did Kant define Enlightenment?", "What was the role of skepticism in the Enlightenment?", "What did David Hume argue about human understanding?", "How did the Enlightenment affect religious institutions?", "What was the impact of the Enlightenment on scientific progress?" };


    string answersEasy[20] = { "An intellectual movement emphasizing reason and individualism.", "18th century.", "Jean-Jacques Rousseau.", "John Locke.", "France.", "Ren? Descartes.", "Montesquieu.", "Voltaire.", "To promote reason and progress.", "Reason.", "Rousseau.", "The mind is a blank slate.", "Montesquieu.", "Voltaire.", "The church and monarchy.", "Democracy or constitutional monarchy.", "Mary Wollstonecraft.", "Belief in a non-intervening God.", "Mary Wollstonecraft.", "The American Revolution." };

    string answersMedium[20] = { "Places for intellectual discussion.", "Montesquieu.", "Life, liberty, and property.", "Voltaire.", "Ren? Descartes.", "Capitalism.", "Free-market regulation.", "Montesquieu.", "A ruler who embraced Enlightenment ideas.", "Frederick the Great.", "Two Treatises of Government.", "Adam Smith.", "To spread knowledge and reason.", "Government based on consent.", "Rousseau.", "It was the foundation of knowledge.", "It was essential for progress.", "Adam Smith.", "It promoted secular thinking.", "Through books and salons." };

    string answersHard[10] = { "Inspired ideas of liberty and governance.", "It questioned divine right and absolutism.", "Rationalism is reason-based, empiricism is experience-based.", "Freedom, equality, and government accountability.", "It led to ideas of direct democracy.", "Dare to know.", "It led to questioning authority.", "That knowledge comes from experience.", "It weakened their power.", "It encouraged scientific discovery." };

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


#endif