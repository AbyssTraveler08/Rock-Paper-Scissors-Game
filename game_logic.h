// game_logic.h - Header file for game logic
#ifndef GAME_LOGIC_H
#define GAME_LOGIC_H
#include <string>

std::string determineWinner(const std::string& playerMove, const std::string& computerMove);
void determineFinalWinner(int playerWins, int computerWins);

#endif
