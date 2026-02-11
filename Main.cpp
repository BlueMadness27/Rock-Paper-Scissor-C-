#include "RPSGame.hpp"
#include <iostream>
using namespace std;

int main() {
    RPSGame game;
    game.WelcomeMessage();
    
    int userChoice;
    do {
        game.Menu();
        cin >> userChoice;

        if (userChoice >= 1 && userChoice <= 3) {
            game.PlayGame();
        } else if (userChoice == 4) {
            break; // Exit the loop to end the game
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (userChoice != 4);
    
    game.EndGameMessage();
    return 0;
}