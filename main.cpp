#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int secretNumber = std::rand() % 100 + 1;
    int guess = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "Guess a number between 1 and 100: ";

    while (guess != secretNumber) {
        if (!(std::cin >> guess)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a valid number: ";
            continue;
        }

        if (guess < secretNumber) {
            std::cout << "Too low! Try again: ";
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again: ";
        } else {
            std::cout << "Congratulations! You guessed the correct number.\n";
        }
    }

    return 0;
}

