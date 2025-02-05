#include <iostream>
#include <cstdlib> // Required for rand() and srand()
#include <ctime>   // Required for time()

int main() {
    int num, guess, tries=0; // Initialize 'tries' to 0

    srand(time(NULL));
    num = rand() % 100 + 1; // Generate a random number between 1 and 100
    std::cout << "********** Guess My Number Game **********\n";

    do {
        std::cout << "Enter a guess between 1 and 100: ";
        std::cin >> guess;
        tries++;

        if (guess > num) {
            std::cout << "Too high!\n";
        } else if (guess < num) {
            std::cout << "Too low!\n";
        } else {
            std::cout << "CORRECT! You guessed in " << tries << " tries!\n";
        }

    } while (guess != num);

    std::cout << "********** Thank you for playing **********\n";

    return 0;
}
