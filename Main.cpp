#include "RPSGame.hpp"
#include <iostream>
using namespace std;

int main() {
    RPSGame game;
    game.WelcomeMessage();

    int userChoice;

    do {
        game.Menu();
        cout << "Enter your choice: ";
        cin >> userChoice;
        cout << endl;

        if (userChoice >= 1 && userChoice <= 3) {
            game.PlayBestOfThree();   // Start 3-round match
        }
        else if (userChoice == 4) {
            break;
        }
        else {
            cout << "Invalid choice. Please try again.\n\n";
        }

    } while (true);

    game.EndGameMessage();
    return 0;
}
