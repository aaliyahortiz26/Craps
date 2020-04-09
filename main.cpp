#include <iostream>
#include "die.h"

void playGame(int currentBank, int currentBet);
void playFirstRoll(int rollValue);
void playSecondRoll(int rollValue);
void displayResults(int currentBank, int currentBet);

int main() {
    float currentBank = 1000.0;
    float currentBet = 10.0;

    playGame(currentBank, currentBet);

    return 0;
}


void playGame(int currentBank, int currentBet) {
    bool firstRoll = true;
    int rollValue = 0;
    Die die1, die2;
    bool rollCompleted = false;
    float localBank = currentBank;
    std::string userInput;

    while(userInput != "e") {
        std::cout << "Roll (r), Bet(b), Quit(e): ";
        std::getline(std::cin, userInput);

        if(userInput == "r"){
            //currentBank =
            displayResults(currentBank, currentBet);
            if(currentBank <= 0){
                std::cout << "You don't have enough money.";
            }
        }
    }


    while (firstRoll != 0) {
        rollValue = die1.roll() + die2.roll();
        std::cout << "You rolled a " << rollValue << "\n";

        if (firstRoll == 1) {
            std::tie(rollCompleted, localBank), playFirstRoll(rollValue);
            if (rollCompleted) {
                firstRoll = 0;
                rollCompleted = false;
            } else {
                playSecondRoll(rollValue);
                rollCompleted = true;
            }
        }
        // firstRoll = true;
    }
}


void playFirstRoll(int rollValue){
    std::cout << rollValue << "\n";
}
​
void playSecondRoll(int rollValue){
    std::cout << rollValue << "\n";
}
void displayResults(int currentBank, int currentBet){
    std::cout << "Bank: " << currentBank << "\n";
    std::cout << "Bet: " << currentBet << "\n";
}


