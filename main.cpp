#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum enQuestionsLevel { Easy = 1, Medium = 2, Hard = 3 };

int RandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}

int GenerateQuestion(enQuestionsLevel level) {
    int num1, num2, correctAnswer;
    char operation;

    switch (level) {
        case Easy:
            num1 = RandomNumber(1, 10);
            num2 = RandomNumber(1, 10);
            break;
        case Medium:
            num1 = RandomNumber(10, 50);
            num2 = RandomNumber(10, 50);
            break;
        case Hard:
            num1 = RandomNumber(50, 100);
            num2 = RandomNumber(50, 100);
            break;
    }

    int operationChoice = RandomNumber(1, 4);
    switch (operationChoice) {
        case 1:
            operation = '+';
            correctAnswer = num1 + num2;
            break;
        case 2:
            operation = '-';
            correctAnswer = num1 - num2;
            break;
        case 3:
            operation = '*';
            correctAnswer = num1 * num2;
            break;
        case 4:
            operation = '/';
            num2 = (num2 == 0) ? 1 : num2;
            correctAnswer = num1 / num2;
            break;
    }

    cout << "What is " << num1 << " " << operation << " " << num2 << "? ";
    return correctAnswer;
}

void PlayMathGame() {

    int score = 0;
    int numQuestions;
    enQuestionsLevel level;
    int levelChoice;

    cout << "Welcome to the Math Quiz Game!\n";

    cout << "Choose difficulty level:\n1. Easy\n2. Medium\n3. Hard\n";
    cin >> levelChoice;

    level = static_cast<enQuestionsLevel>(levelChoice);

    cout << "How many questions would you like to answer? ";
    cin >> numQuestions;

    for (int i = 1; i <= numQuestions; i++) {

        cout << "\nQuestion " << i << "/" << numQuestions << ":\n";
        int correctAnswer = GenerateQuestion(level);
        int playerAnswer;

        cin >> playerAnswer;

        if (playerAnswer == correctAnswer) {
            cout << "Correct! Great job!\n";
            score++;
        } else {
            cout << "Incorrect. The correct answer was " << correctAnswer << ".\n";
        }
    }

    cout << "\nYou answered " << score << " out of " << numQuestions << " questions correctly.\n";

    if (score >= numQuestions / 2) {
        cout << "Congratulations! You passed the quiz!\n";
    } else {
        cout << "Better luck next time!\n";
    }
}

int main() {

    srand(static_cast<unsigned>(time(0)));
    char playAgain;

    do {
        PlayMathGame();
        cout << "\nWould you like to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "Thank you for playing the Math Quiz Game! Goodbye!\n";
    return 0;
}
