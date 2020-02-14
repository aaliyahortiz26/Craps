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
    std::string color = "White", bool isSymbols = false , std::string material = "Bone");
    int roll();
    void setNumberOfSides (int newNumberOfSides);
    int getNumberOfSides();
    void setIncrement (int newIncrement);
    int getIncrement();
    void setValue (int newValue);
    int getValue();
    void setColor (int newColor);
    int getColor();
};

#endif //CRAPS_DIE_H
