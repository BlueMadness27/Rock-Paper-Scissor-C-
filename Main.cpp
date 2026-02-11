#include "RPSGame.hpp"
#include <iostream>
using namespace std;

int main() {
    RPSGame game;
    game.WelcomeMessage();

    int userChoice;

    while (true) {
        game.ReadytoPlayMessage();
        cout << "Enter your choice: ";
        cin >> userChoice;
        cout << endl;

        if (userChoice == 1) {
            game.PlayBestOfThree();   // Start match
        }
        else if (userChoice == 4) {
            break;
        }
        else {
            cout << "Invalid choice. Please try again.\n\n";
        }
    }

    game.EndGameMessage();
    return 0;
}
