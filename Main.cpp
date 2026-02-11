#include "RPSGame.hpp"
#include <random>
#include <iostream>
using namespace std;

int main() {
    RPSGame game;
    game.WelcomeMessage();
    
    int userChoice;
    do {
        game.Menu();
        cout<< "Enter your choice: ";
        cin >> userChoice;
        cout << endl;

        if (userChoice >= 1 && userChoice <= 3) {
            game.Menu();
        } else if (userChoice == 4) {
            break; // Exit the loop to end the game
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (userChoice != 4);
    
    game.EndGameMessage();
    return 0;
}