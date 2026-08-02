#include <iostream>
using namespace std;

void startQuiz() {

    string questions[5] = {
        "If a computer drinks water, what happens?",
        "What is a programmer's favorite breakfast?",
        "When the code doesn't run, what do we usually do?",
        "What do you do if you are stuck in an infinite loop?",
        "What happens when you update a variable's value?"
    };

    string options[5][4] = {
        {"A) It refreshes", "B) Circuit short (Panic!)", "C) It downloads water", "D) It restarts"},
        {"A) Coffee", "B) Bugs", "C) Pizza", "D) All of the above"},
        {"A) Throw the laptop", "B) StackOverflow", "C) Pray", "D) B and C both"},
        {"A) Close the laptop", "B) Take a long break", "C) Ctrl+C", "D) System update"},
        {"A) Overwrite", "B) Memory leak", "C) Soul dead", "D) Error 404"}
    };

    char answers[5] = {'B', 'D', 'D', 'C', 'A'};

    char userAnswer;
    int score = 0;

    cout << "\n===== QUIZ STARTED =====\n";

    for (int i = 0; i < 5; i++) {

        cout << "\nQ" << i + 1 << ": " << questions[i] << endl;

        for (int j = 0; j < 4; j++) {
            cout << options[i][j] << endl;
        }

        cout << "Your answer (A/B/C/D): ";
        cin >> userAnswer;

        // Case handling (A or a both accepted)
        if (userAnswer >= 'a' && userAnswer <= 'z') {
            userAnswer = userAnswer - 32;
        }

        if (userAnswer == answers[i]) {
            score++;
        }
    }

    cout << "\n===== RESULT =====\n";
    cout << "Score: " << score << "/5\n";

    if (score == 5) {
        cout << "Pro Coder! You are the next Bill Gates!\n";
    }
    else if (score >= 3) {
        cout << "Not bad! You just need to debug your knowledge a bit.\n";
    }
    else {
        cout << "Syntax Error! Go back and study more!\n";
    }
}

int main() {
    int choice;
    do {
        cout << "\n===== QUIZ SYSTEM =====\n";
        cout << "1. Start Quiz\n";
        cout << "2. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                startQuiz();
                break;
            case 2:
                cout << "Exiting...!\n";
                break;
            default:
                cout << "Invalid choice! Error 404: Choice not found.\n";
        }
    } while (choice != 2);

    return 0;
}
