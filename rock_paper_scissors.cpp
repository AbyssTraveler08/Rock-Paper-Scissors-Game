#include <iostream>
#include <random>
#include <ctime>

using namespace std;

// Function to get user choice
int getUserChoice() {
    int choice;
    cout << "Enter your choice: \n1. Rock\n2. Paper\n3. Scissors\n";
    cin >> choice;

    // Validate input
    while (choice < 1 || choice > 3) {
        cout << "Invalid choice! Please enter 1, 2, or 3: ";
        cin >> choice;
    }
    return choice;
}

// Function to get computer choice using C++11 random number generator
int getComputerChoice() {
    random_device rd;
    mt19937 gen(rd());  // Seed with a random device
    uniform_int_distribution<int> distrib(1, 3); // Generates 1, 2, or 3
    return distrib(gen);
}

// Function to determine the winner of a round
int determineWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        return 0; // Tie
    } else if ((userChoice == 1 && computerChoice == 3) ||  // Rock beats Scissors
               (userChoice == 2 && computerChoice == 1) ||  // Paper beats Rock
               (userChoice == 3 && computerChoice == 2)) {  // Scissors beats Paper
        return 1; // User wins
    } else {
        return -1; // Computer wins
    }
}

// Function to display choices
void displayChoices(int userChoice, int computerChoice) {
    string choices[] = {"Rock", "Paper", "Scissors"};
    cout << "You chose: " << choices[userChoice - 1] << endl;
    cout << "Computer chose: " << choices[computerChoice - 1] << endl;
}

// Function to play the game (best of three)
void playGame() {
    int userScore = 0, computerScore = 0;

    for (int round = 1; round <= 3; round++) {
        cout << "\nRound " << round << ":\n";

        int userChoice = getUserChoice();
        int computerChoice = getComputerChoice();

        displayChoices(userChoice, computerChoice);

        int result = determineWinner(userChoice, computerChoice);
        if (result == 0) {
            cout << "It's a Tie!" << endl;
        } else if (result == 1) {
            cout << "You Win this Round!" << endl;
            userScore++;
        } else {
            cout << "Computer Wins this Round!" << endl;
            computerScore++;
        }
    }

    // Display Final Result
    cout << "\nFinal Score - You: " << userScore << " | Computer: " << computerScore << endl;
    if (userScore > computerScore) {
        cout << "Congratulations! You are the Best-of-Three Winner! 🎉\n";
    } else if (computerScore > userScore) {
        cout << "Computer wins the Best-of-Three! Better luck next time! 🤖\n";
    } else {
        cout << "It's a Tie! No one wins the Best-of-Three.\n";
    }
}

// Main function
int main() {
    cout << "Welcome to Rock, Paper, Scissors - Best of Three!\n";
    playGame();
    return 0;
}
