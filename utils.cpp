// utils.cpp - Manages input handling and randomization
#include "utils.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

std::string getPlayerMove() {
    std::string move;
    while (true) {
        std::cout << "Enter Rock, Paper, or Scissors: ";
        std::cin >> move;
        if (move == "Rock" || move == "Paper" || move == "Scissors") break;
        std::cout << "Invalid input. Try again.\n";
    }
    return move;
}

std::string getComputerMove() {
    srand(time(0));
    int randNum = rand() % 3;
    if (randNum == 0) return "Rock";
    if (randNum == 1) return "Paper";
    return "Scissors";
}
