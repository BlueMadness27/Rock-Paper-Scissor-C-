#ifndef RPSGAME_HPP
#define RPSGAME_HPP

#include <string>

class RPSGame{
    private:
        std::string choiceToString(int choice);
        int getUserChoice();
        int getComputerChoice();
        std::string determineWinner(int user, int comp);
        
    public: 
        RPSGame(); // Constructor
        void PlayGame(int userChoice); // one round of RPS
        void WelcomeMessage() const;
        void EndGameMessage() const;
        void Menu() const; // Display menu options
    
};

#endif // RPSGAME_HPP