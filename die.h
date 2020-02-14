//
// Created by Aaliyah Ortiz on 2/14/20.
//

#ifndef CRAPS_DIE_H
#define CRAPS_DIE_H

class Die{
private:
    int numberOfSides;
    int increment;
    int value;
    string color;
    bool isSymbols;
    string material;
    int startingValue;

public:
    Die(int startingNumberofSides, int startingIncrement, int startingStaringValue);
};

#endif //CRAPS_DIE_H
