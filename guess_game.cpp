#include <iostream>
#include <cstdlib>  
#include <ctime>    

void playGame() {
    int randomNumber;
    int userGuess;
    int attempts = 0;

   
    srand(static_cast<unsigned int>(time(0)));
    randomNumber = rand() % 100 + 1;  

    std::cout << "Гра 'Вгадай число'!" << std::endl;
    std::cout << "Я загадав число від 1 до 100. Спробуй вгадати!" << std::endl;

    
    do {
        std::cout << "Введіть ваше число: ";
        std::cin >> userGuess;
        attempts++;

        if (userGuess > randomNumber) {
            std::cout << "Моє число менше!" << std::endl;
        } else if (userGuess < randomNumber) {
            std::cout << "Моє число більше!" << std::endl;
        } else {
            std::cout << "Вітаю! Ви вгадали число " << randomNumber << " за " << attempts << " спроб!" << std::endl;
        }

    } while (userGuess != randomNumber);
}

int main() {
    char playAgain;

    do {
        playGame();
        std::cout << "Хочете зіграти ще раз? (y/n): ";
        std::cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Дякую за гру! Бувайте!" << std::endl;

    return 0;
}
