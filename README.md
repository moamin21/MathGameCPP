# Math Quiz Game

The **Math Quiz Game** is an interactive console-based program that challenges players with math questions of varying difficulty levels. Players can choose their difficulty, specify the number of questions, and test their arithmetic skills.

---

## Features

- **Three Difficulty Levels**: 
  - **Easy**: Numbers between 1 and 10.
  - **Medium**: Numbers between 10 and 50.
  - **Hard**: Numbers between 50 and 100.
  
- **Randomized Questions**:
  - Includes addition, subtraction, multiplication, and division.
  - Prevents division by zero.
  
- **Score Tracking**:
  - Tracks the number of correct answers.
  - Displays a final performance summary.
  
- **Replayable**: Option to play multiple rounds.

---

## How to Run the Game

### Prerequisites
- A C++ compiler (e.g., GCC).
- Basic knowledge of compiling and running C++ code.

### Steps
1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/math-quiz-game.git
   ```
2. Navigate to the project directory:
   ```bash
   cd math-quiz-game
   ```
3. Compile the program:
   ```bash
   g++ -o math_quiz main.cpp
   ```
4. Run the compiled program:
   ```bash
   ./math_quiz
   ```

---

## Gameplay Instructions

1. Choose your preferred difficulty:
   - Enter `1` for Easy.
   - Enter `2` for Medium.
   - Enter `3` for Hard.
   
2. Specify the number of questions you'd like to answer.
   
3. Answer the questions displayed on the screen.

4. At the end of the quiz, review your score and choose to play again or exit.

---

## Code Overview

The program has three primary components:
1. **Random Number Generator**: Generates random numbers based on the selected difficulty.
2. **Question Generator**: Randomly selects an arithmetic operation and forms a question.
3. **Game Logic**: Manages the gameplay flow, tracks the score, and provides feedback.

---

## Example Gameplay

```plaintext
Welcome to the Math Quiz Game!
Choose difficulty level:
1. Easy
2. Medium
3. Hard
2
How many questions would you like to answer? 3

Question 1/3:
What is 42 - 19? 
23
Correct! Great job!

Question 2/3:
What is 12 * 3?
36
Correct! Great job!

Question 3/3:
What is 37 / 5?
7
Incorrect. The correct answer was 7.

You answered 2 out of 3 questions correctly.
Congratulations! You passed the quiz!

Would you like to play again? (y/n): n
Thank you for playing the Math Quiz Game! Goodbye!
```

---

## Contributing

If you'd like to contribute:
1. Fork the repository.
2. Create a feature branch:
   ```bash
   git checkout -b feature-name
   ```
3. Commit your changes:
   ```bash
   git commit -m "Description of changes"
   ```
4. Push to your branch:
   ```bash
   git push origin feature-name
   ```
5. Create a pull request.
