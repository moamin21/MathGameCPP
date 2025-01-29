#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum en_questions_level { easy = 1, medium = 2, hard = 3 };

int rand_num(int From, int To) {
    return rand() % (To - From + 1) + From;
}

int gen_question(en_questions_level level) {
    int num1, num2, corr_ans;
    char operation;

    switch (level) {
        case easy:
            num1 = rand_num(1, 10);
            num2 = rand_num(1, 10);
            break;
        case medium:
            num1 = rand_num(10, 50);
            num2 = rand_num(10, 50);
            break;
        case hard:
            num1 = rand_num(50, 100);
            num2 = rand_num(50, 100);
            break;
    }

    int operation_choice = rand_num(1, 4);
    switch (operation_choice) {
        case 1:
            operation = '+';
            corr_ans = num1 + num2;
            break;
        case 2:
            operation = '-';
            corr_ans = num1 - num2;
            break;
        case 3:
            operation = '*';
            corr_ans = num1 * num2;
            break;
        case 4:
            operation = '/';
            num2 = (num2 == 0) ? 1 : num2;
            corr_ans = num1 / num2;
            break;
    }

    cout << "What is " << num1 << " " << operation << " " << num2 << "? ";
    return corr_ans;
}

void play_math_game() {

    int score = 0;
    int num_questions;
    en_questions_level level;
    int level_choice;

    cout << "Welcome to the Math Quiz Game!\n";

    cout << "Choose difficulty level:\n1. Easy\n2. Medium\n3. Hard\n";
    cin >> level_choice;

    level = static_cast<en_questions_level>(level_choice);

    cout << "How many questions would you like to answer? ";
    cin >> num_questions;

    for (int i = 1; i <= num_questions; i++) {

        cout << "\nQuestion " << i << "/" << num_questions << ":\n";
        int corr_ans = gen_question(level);

        int player_ans;
        cin >> player_ans;

        if (player_ans == corr_ans) {
            cout << "Correct! Great job!\n";
            score++;
        } else {
            cout << "Incorrect. The correct answer was " << corr_ans << ".\n";
        }
    }

    cout << "\nYou answered " << score << " out of " << num_questions << " questions correctly.\n";

    if (score >= num_questions / 2) {
        cout << "Congratulations! You passed the quiz!\n";
    } else {
        cout << "Better luck next time!\n";
    }
}

int main() {

    srand(static_cast<unsigned>(time(0)));
    char play_again;

    do {
        play_math_game();
        cout << "\nWould you like to play again? (y/n): ";
        cin >> play_again;
    } while (play_again == 'Y' || play_again == 'y');

    cout << "Thank you for playing the Math Quiz Game! Goodbye!\n";
    return 0;
}
