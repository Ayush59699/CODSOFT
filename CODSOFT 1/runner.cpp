#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    
    std::srand(std::time(0));

    
    int randomNumber = std::rand() % 100 + 1;
    int guess = 0;

    std::cout << "Welcome to the Guessing Game!\n";
    std::cout << "Can you guess the number between 1 to 100 ?\n";

    
    while (guess != randomNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess < randomNumber) {
            if(randomNumber-guess <10){
                std::cout << "A bit low! Try again.\n";
            }
            std::cout << "Too low! Try again.\n";
        } else if (guess > randomNumber) {
            if(guess-randomNumber <10){
                std::cout << "A bit high! Try again.\n";
            }
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the correct number.\n";
        }
    }

    return 0;
}
