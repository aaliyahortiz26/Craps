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
    std::string color;
    bool isSymbols;
    std::string material;
    int startingValue;

public:
    Die(int startingNumberOfSides, int startingIncrement = 1, int startingStaringValue = 1,
    std::string color = "White", bool isNewSymbols = false , std::string startingMaterial = "Bone");
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
    void setColor(bool newIsSymbol);
    bool isSymbol();
    void setMaterial(std::string newMaterial;
    std::string getMaterial();
};

#endif //CRAPS_DIE_H
