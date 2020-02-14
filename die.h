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
    Die(int startingNumberofSides, int startingIncrement = 1, int startingStaringValue = 1,
    std::string color = "White", bool isSymbols = false , std::string material = "Bone");
};

#endif //CRAPS_DIE_H
