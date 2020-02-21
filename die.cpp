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
}
int Die :: roll(){
    value = rand() % numberOfSides;
}
void Die :: setNumberOfSides (int newNumberOfSides){
    numberOfSides = newNumberOfSides;
}
int Die :: getNumberOfSides(){
    return numberOfSides;
}
void Die :: setIncrement (int newIncrement){
    increment = newIncrement;
}
int Die :: getIncrement(){
    return increment;
}

//there is a lot of value parts
void Die :: setStartingValue(int newStartingValue){
    startingValue = newStartingValue;
}
int Die :: getStartingValue(){
    return startingValue;
}
//figure what these two values are meant to be for
void Die :: setValue (int newValue){
    value = newValue;
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
/*void Die :: setColor(bool newIsSymbol){
    //need to add a value here
}
bool Die :: isSymbol(){
    //need to add a value here
}*/
void Die :: setMaterial(std::string newMaterial){
    material = newMaterial;
}
std::string Die :: getMaterial(){
    return material;
}