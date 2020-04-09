#include <iostream>
#include "die.h"

std::tuple<bool, float> playFirstRoll(int rollValue, float currentBank, float currentBet);
std::tuple<bool, float> playSecondRoll(int rollValue, int previousRoll, float currentBank, float currentBet);

float playGame(float currentBank, float currentBet);
void displayResults(float currentBank, float currentBet);
bool isInteger(const std::string & s);
float processWin(int rollValue, int rollNumber, float currentBank, float currentBet);
float processLoss(int rollValue, int rollNumber, float currentBank, float currentBet);
float calculateCurrentBank(int rollValue, int rollNumber, float currentBank, float currentBet, bool wonBet);
float processBet(float currentBank);

void endGame();

int main() {
    srand((unsigned int) time(NULL));
    float currentBank = 1000.0;
    float currentBet = 0.0;

    std::string userInput;
    std::cout << "Roll (r), Bet(b), Quit(e): ";
    std::getline(std::cin, userInput);

    while(userInput != "e") {
        if(userInput == "r") {
            currentBank = playGame(currentBank, currentBet);
            displayResults(currentBank, currentBet);
            if (currentBank <= 0) {
                std::cout << "You don't have enough money!" << "\n";
                break;
            }
        } else if (userInput == "b") {
            currentBet = processBet(currentBank);
        } else {
            std::cout << "Invalid input";
        }
        std::cout << "Roll (r), Bet(b), Quit(e): ";
        std::getline(std::cin, userInput);
    }
    if(userInput == "e"){
        endGame();
    }

    return 0;
}

float playGame(float currentBank, float currentBet) {
    int firstRoll = 1;
    int rollValue = 0;
    Die die1, die2;
    int previousRoll = 0;
    bool rollCompleted = false;
    float localBank = currentBank;


    while (firstRoll >= 0) {
        rollValue = die1.roll() + die2.roll();
        std::cout << "You rolled a " << rollValue << "\n";
        if(firstRoll == 1) {
            std::tie(rollCompleted, localBank) = playFirstRoll(rollValue, currentBank, currentBet);
            if (rollCompleted) {
                firstRoll = 0;
                rollCompleted = false;
            } else {
                previousRoll = rollValue;
                firstRoll = 2;
                rollCompleted = true;
                continue;
            }
        } else if (firstRoll == 2){
            std::tie(rollCompleted, localBank) = playFirstRoll(rollValue, currentBank, currentBet);
            if(rollCompleted){
                previousRoll = rollValue;
                firstRoll = 0;
                rollCompleted = false;
            }
        }
        firstRoll = 0;
        return localBank;
    }
}

float processBet(float currentBank) {
    float attemptedBet;
    bool betAccepted = false;

    std::string userInput;

    while (!betAccepted) {
        std::cout << "How much would you like to bet? ";
        std::getline(std::cin, userInput);

        if (isInteger(userInput)) {
            attemptedBet = stof(userInput);
            if (attemptedBet <= currentBank) {
                betAccepted = true;
                return attemptedBet;
            } else {
                std::cout << "You don't have that much money!" << "\n";
                betAccepted = false;
            }
        } else
            return 0;
    }
}

inline bool isInteger(const std::string & s) {
    if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) return false;
    char * p;
    strtol(s.c_str(), &p, 10);
    return (*p == 0);
}

std::tuple<bool, float>  playFirstRoll(int rollValue, float currentBank, float currentBet){
    std::cout << rollValue << "\n";
    switch (rollValue) {
        case 7:
        case 11: {
            currentBank = processWin(rollValue, 1, currentBank, currentBet);
            return std::make_tuple(true, currentBank);
        }
        case 2:
        case 3:
        case 12: {
            currentBank = processLoss(rollValue, 1, currentBank, currentBet);
            return std::make_tuple(true, currentBank);
        }
        default: {
            return std::make_tuple(false, currentBank);
        }
    }
};

std::tuple<bool, float>  playSecondRoll(int rollValue, int previousRoll,  float currentBank, float currentBet){
    if (rollValue == previousRoll) {
        return std::make_tuple(true, processWin(rollValue, 2, currentBank, currentBet));
    } else {
        return std::make_tuple(true, processLoss(rollValue, 2, currentBank, currentBet));
    }
};


float processWin(int rollValue, int rollNumber, float currentBank, float currentBet) {
    std::cout << "You won! Great job! :)" << "\n";
    return calculateCurrentBank(rollValue, rollNumber, currentBank, currentBet, true);
}

float processLoss(int rollValue, int rollNumber, float currentBank, float currentBet) {
    std::cout << "You lost. Sorry. :(" << "\n";
    return calculateCurrentBank(rollValue, rollNumber, currentBank, currentBet, false);
};

float calculateCurrentBank(int rollValue, int rollNumber, float currentBank, float currentBet, bool wonBet) {
    if (rollNumber == 1) {
        if(wonBet)
            return currentBank + currentBet;
        else
            return currentBank - currentBet;
    }
    else {
        if(wonBet)
            return currentBank + currentBet * payouts[rollValue];
        else
            return currentBank - currentBet * payouts[rollValue];
    }
};


void displayResults(float currentBank, float currentBet){

    std::cout << "Bank: " << currentBank << "\n";
    std::cout << "Bet: " << currentBet << "\n";
}

void endGame(){
    std::cout << "Thanks for playing! Goodbye!\n";
}

