//
// Created by Aaliyah Ortiz on 2/14/20.
//

#ifndef CRAPS_DIE_H
#define CRAPS_DIE_H

#include <string>

class Die{
private:
    int numberOfSides;
    int increment;
    int value;
    int startingValue;
    std::string color;
    std::string material;

public:
    Die(int startingNumberOfSides, int startingIncrement, int startingStaringValue,
    std::string color, bool isSymbols , std::string startingMaterial);
    std::string stringRep();
    int roll();
    void setNumberOfSides (int newNumberOfSides);
    int getNumberOfSides();
    void setIncrement (int newIncrement);
    int getIncrement();
    void setStartingValue(int newStartingValue);
    int getStartingValue();
    void setValue (int newValue);
    int getValue();
    void setColor (std::string newColor);
    std::string getColor();
    void setMaterial(std::string newMaterial);
    std::string getMaterial();
};

struct BadDieValueException : public std::exception{
    const char * what() const throw(){
        return "Can't set die value; value out of range.";
    }
};

#endif //CRAPS_DIE_H
