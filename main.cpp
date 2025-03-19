// main.cpp - Contains the main game loop
#include <iostream>
#include "game_logic.h"
#include "utils.h"

int main() {
    int playerWins = 0, computerWins = 0;
    
    std::cout << "Welcome to Rock-Paper-Scissors! Best of 3 rounds.\n";
    
    for (int round = 1; round <= 3; ++round) {
        std::cout << "\nRound " << round << "\n";
        std::string playerMove = getPlayerMove();
        std::string computerMove = getComputerMove();
        
        std::cout << "Computer chose: " << computerMove << "\n";
        
        std::string winner = determineWinner(playerMove, computerMove);
        if (winner == "Player") playerWins++;
        else if (winner == "Computer") computerWins++;
        
        std::cout << "Winner: " << (winner == "Tie" ? "It's a tie!" : winner) << "\n";
    }
    
    determineFinalWinner(playerWins, computerWins);
    return 0;
}
