#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    const int secretNumber = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    cout << "\n====================================\n";
    cout << "       NUMBER GUESSING GAME\n";
    cout << "====================================\n";
    cout << "I have selected a number from 1 to 100.\n";
    cout << "Can you guess it?\n";

    while (guess != secretNumber) {
        cout << "\nEnter your guess: ";
        if (!(cin >> guess)) {
            cout << "Invalid input. Please enter a whole number.\n";
            return 1;
        }

        if (guess < 1 || guess > 100) {
            cout << "Please enter a number between 1 and 100.\n";
            continue;
        }

        attempts++;

        if (guess < secretNumber) {
            cout << "Too Low! Try a higher number.\n";
        } else if (guess > secretNumber) {
            cout << "Too High! Try a lower number.\n";
        } else {
            cout << "\nCorrect! You guessed the number.\n";
            cout << "Secret number: " << secretNumber << '\n';
            cout << "Total attempts: " << attempts << '\n';
        }
    }

    cout << "Thanks for playing!\n";
    return 0;
}
