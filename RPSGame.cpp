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

int RPSGame::determineWinner(int user, int comp) {
    if (user == comp) {
        return 0; // Tie
    } 

    if ((user == 1 && comp == 3) || (user == 2 && comp == 1) ||(user == 3 && comp == 2)) {
        return 1; // User wins
    } else {
        return -1; // Computer wins
    }
}

int RPSGame::getUserChoice() {
    int choice;

    while (true) {
        Menu();
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Try again.\n\n";
            continue;
        }

        if (choice >= 1 && choice <= 3) {
            cout << endl;
            return choice;
        }

        cout << "Invalid choice. Please enter 1, 2, or 3.\n\n";
    }
}


void RPSGame::PlayBestOfThree() {
    int userScore = 0;
    int computerScore = 0;
    int ties = 0;

    cout << "Starting a 3-round match!\n\n";

    for (int round = 1; round <= 3; round++) {
        cout << "===== Round " << round << " =====\n";

        int userChoice = getUserChoice();
        int computerChoice = getComputerChoice();

        cout << "You chose: " << choiceToString(userChoice) << endl;
        cout << "Computer chose: " << choiceToString(computerChoice) << endl;

        int result = determineWinner(userChoice, computerChoice);

        if (result == 1) {
            userScore++;
            cout << "Result: You win this round!\n";
        }
        else if (result == -1) {
            computerScore++;
            cout << "Result: Computer wins this round!\n";
        }
        else {
            ties++;
            cout << "Result: Tie round!\n";
        }

        cout << "Score -> You: " << userScore
             << " | Computer: " << computerScore
             << " | Ties: " << ties << "\n\n";
    }

    cout << "===== Final Result =====\n";
    if (userScore > computerScore)
        cout << "🎉 You are the winner!\n\n";
    else if (computerScore > userScore)
        cout << "💻 Computer is the winner!\n\n";
    else
        cout << "🤝 It's a tie overall!\n\n";
}


void RPSGame::PlayGame(int userChoice) {
    int computerChoice = getComputerChoice();

    cout << "You chose: " << choiceToString(userChoice) << endl;
    cout << "Computer chose: " << choiceToString(computerChoice) << endl;

    int result = determineWinner(userChoice, computerChoice);

    if (result == 1)
        cout << "Result: You win!\n";
    else if (result == -1)
        cout << "Result: Computer wins!\n";
    else
        cout << "Result: Tie!\n";

    cout << endl;
}


void RPSGame::WelcomeMessage() const {
    cout << " Welcome to Rock-Paper-Scissors!" << endl;
   
}

void RPSGame::EndGameMessage() const {
    cout << " Thanks for playing! Goodbye!" << endl;
}

void RPSGame::Menu() const {
    cout << "----------------------------------" << endl;
    cout<< "Please make a choice: " << endl;
    cout<< "1. Rock" << endl;
    cout<< "2. Paper" << endl;
    cout<< "3. Scissors" << endl;
    cout<< "4. Exit" << endl;
}

