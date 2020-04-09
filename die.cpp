//
// Created by Aaliyah Ortiz on 2/14/20.
//

#include "die.h"
#include <stdlib.h>

Die :: Die(int startingNumberOfSides, int startingIncrement , int startingStartingValue ,
        std::string startingColor, bool isSymbols = false, std::string startingMaterial = "Bone"){
    numberOfSides = startingNumberOfSides;
    increment = startingIncrement;
    value = startingStartingValue;
    color = startingColor;
    material = startingMaterial;
    srand((unsigned int) time(NULL));
}
Die :: Die() {}

int Die :: roll(){
    value = ((rand() % numberOfSides) * increment + startingValue);
    return value;
}
void Die :: setNumberOfSides (int newNumberOfSides){
    numberOfSides = newNumberOfSides;
}
int Die :: getNumberOfSides(){
    return numberOfSides;
}
void Die :: setIncrement (int newIncrement){
    if (newIncrement > 0 && newIncrement == 1) //increment must be at least 1
        increment = newIncrement;
    else
        increment = newIncrement;
        startingValue = newIncrement;
}
int Die :: getIncrement(){
    return increment;
}

void Die :: setStartingValue(int newStartingValue){
    startingValue = newStartingValue;
}
int Die :: getStartingValue(){
    return startingValue;
}
void Die :: setValue (int newValue){
    if (startingValue * increment <= newValue <= numberOfSides * increment and not newValue % increment)
        value = newValue;
    else
        throw BadDieValueException();
}
int Die :: getValue(){
    return value;
}
void Die :: setColor (std::string newColor){
    color = newColor;
}
std::string Die :: getColor(){
    return color;
}
void Die :: setMaterial(std::string newMaterial){
    material = newMaterial;
}
std::string Die :: getMaterial(){
    return material;
}