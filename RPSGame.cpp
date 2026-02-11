#include "RPSGame.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



RPSGame::RPSGame() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

string RPSGame::choiceToString(int choice) {
    switch (choice) {
        case 1: return "Rock";
        case 2: return "Paper";
        case 3: return "Scissors";
        default: return "Unknown";
    }
}

int RPSGame::getComputerChoice() {
    return (std::rand() % 3) + 1; // 1: Rock, 2: Paper, 3: Scissors
}


void RPSGame::WelcomeMessage() const {
    cout << " Welcome to Rock-Paper-Scissors!" << endl;
   
}

void RPSGame::EndGameMessage() const {
    cout << " Thanks for playing! Goodbye!" << endl;
}

void RPSGame::Menu() const {
    cout << "----------------------------------" << endl;
    cout<< "Pease make a choice: " << endl;
    cout<< "1. Rock" << endl;
    cout<< "2. Paper" << endl;
    cout<< "3. Scissors" << endl;
    cout<< "4. Exit" << endl;
}

 void RPSGame::PlayGame(int userChoice) {
    int computerChoice = getComputerChoice();

    cout << "You chose: " << choiceToString(userChoice) << endl;
    cout << "Computer chose: " << choiceToString(computerChoice) << endl;

    if (userChoice == computerChoice) {
        cout << "Result: Tie!" << endl;
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        cout << "Result: You win!" << endl;
    } else {
        cout << "Result: Computer wins!" << endl;
    }

    cout << endl;
}
