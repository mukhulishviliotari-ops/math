#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#endif

int generateEquation(int &expectedResult);
int getUserAnswer();
void checkAnswer(int playerAnswer, int expectedResult);

#ifdef __EMSCRIPTEN__
static int expectedResultGlobal = 0;
static bool seededForWasm = false;
extern "C" {
EMSCRIPTEN_KEEPALIVE
void generate_equation() {
    if (!seededForWasm) {
        srand(static_cast<unsigned int>(time(0)));
        seededForWasm = true;
    }
    generateEquation(expectedResultGlobal);
}

EMSCRIPTEN_KEEPALIVE
void check_answer(int playerAnswer) {
    checkAnswer(playerAnswer, expectedResultGlobal);
}
}
#endif

#ifndef __EMSCRIPTEN__
int main() {
    srand(static_cast<unsigned int>(time(0)));

    int expectedResult = 0;

    std::cout << "*********************************\n";
    std::cout << "   RANDOM EQUATION GENERATOR     \n";
    std::cout << "*********************************\n\n";

    generateEquation(expectedResult);

    int playerAnswer = getUserAnswer();

    checkAnswer(playerAnswer, expectedResult);

    return 0;
}
#endif

int generateEquation(int &expectedResult) {
    int num1 = (rand() % 300) + 1;
    int num2 = (rand() % 300) + 1;
    

    int opChoice = (rand() % 2) + 1; 
    char opSymbol;

    switch (opChoice) {
        case 1:
            opSymbol = '+';
            expectedResult = num1 + num2;
            break;

        case 2:
            opSymbol = '-';
            expectedResult = num1 - num2;
            break;
    }

    std::cout << "Solve: " << num1 << " " << opSymbol << " " << num2 << " = ?\n";
    return expectedResult;
}

int getUserAnswer() {
    int answer;
    std::cout << "Your answer: ";
    std::cin >> answer;
    return answer;
}

void checkAnswer(int playerAnswer, int expectedResult) {
    if (playerAnswer == expectedResult) {
        std::cout << "\nCorrect! Great job!\n";
    } else {
        std::cout << "\nIncorrect! The correct answer was: " << expectedResult << "\n";
    }
}