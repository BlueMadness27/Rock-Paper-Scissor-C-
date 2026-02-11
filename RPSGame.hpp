#ifndef RPSGAME_HPP
#define RPSGAME_HPP

#include <string>

class RPSGame {
    private:
        std::string choiceToString(int choice);
        int getComputerChoice();
        int determineWinner(int user, int comp); // ✅ int now

    public:
        RPSGame();
        void WelcomeMessage() const;
        void ReadytoPlayMessage() const;
        void Menu() const;
        void EndGameMessage() const;

        int getUserChoice();       // implemented in .cpp
        void PlayGame(int userChoice);
        void PlayBestOfThree();
};

#endif
