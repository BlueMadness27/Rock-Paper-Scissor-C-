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
    return std::rand() % 3; // 0: Rock, 1: Paper, 2: Scissors
}

RPSGame::