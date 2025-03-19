// game_logic.cpp - Handles game mechanics
#include "game_logic.h"
#include <iostream>

std::string determineWinner(const std::string& playerMove, const std::string& computerMove) {
    if (playerMove == computerMove) return "Tie";
    if ((playerMove == "Rock" && computerMove == "Scissors") ||
        (playerMove == "Paper" && computerMove == "Rock") ||
        (playerMove == "Scissors" && computerMove == "Paper")) {
        return "Player";
    }
    return "Computer";
}

void determineFinalWinner(int playerWins, int computerWins) {
    if (playerWins > computerWins)
        std::cout << "\nPlayer wins the best of three!\n";
    else if (computerWins > playerWins)
        std::cout << "\nComputer wins the best of three!\n";
    else
        std::cout << "\nIt's a tie!\n";
}
