#include <stdio.h>
#include <ctype.h>

int main(void) {

    // ---------- QUIZ QUESTIONS ----------
    char questions[10][100] = {
        "Which operator assigns a value in C?",
        "What is the result of 10 + 5 * 2 (int arithmetic)?",
        "Which is a logical operator?",
        "What does '==' do?",
        "What is 5 % 2?",
        "Which operator dereferences a pointer?",
        "Arrays in C start at index:",
        "Which has higher precedence?",
        "Which is the ternary operator?",
        "Associativity of assignment '=' is:"
    };

    // ---------- OPTIONS ----------
    char options[10][4][30] = {
        {"=", "==", ":=", "<-"},
        {"30", "20", "25", "15"},
        {"&", "&&", "|", "/"},
        {"Assignment", "Equality check", "Inequality check", "Logical AND"},
        {"2", "2.5", "1", "0"},
        {"&", "*", "->", "."},
        {"1", "0", "-1", "Depends"},
        {"*", "=", "&&", "++"},
        {"?:", "::", "??", "if-else"},
        {"Left to Right", "Right to Left", "None", "Depends"}
    };

    // ---------- ANSWER KEY (0=A, 1=B, 2=C, 3=D) ----------
    int answerKey[10] = {0, 1, 1, 1, 2, 1, 1, 0, 0, 1};

    int score = 0;
    char guess;

    printf("\n*** QUIZ GAME ***\n");

    for (int i = 0; i < 10; i++) {
        printf("\nQ%d. %s\n", i + 1, questions[i]);

        printf("A. %s\n", options[i][0]);
        printf("B. %s\n", options[i][1]);
        printf("C. %s\n", options[i][2]);
        printf("D. %s\n", options[i][3]);

        printf("Enter your choice (A/B/C/D): ");
        scanf(" %c", &guess); // Note the space before %c to skip whitespace/newlines

        guess = toupper(guess);

        if (guess < 'A' || guess > 'D') {
            printf("Invalid choice. Question skipped.\n");
            continue;
        }

        if ((guess - 'A') == answerKey[i]) {
            printf("CORRECT!\n");
            score++;
        } else {
            printf("WRONG!\n");
        }
    }

    printf("\nFinal Score: %d / 10\n", score);

    return 0;
}
