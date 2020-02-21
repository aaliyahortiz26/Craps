//
// Created by Aaliyah Ortiz on 2/14/20.
//

#include "die.h"
#include <random>

Die :: Die(int startingNumberOfSides, int startingIncrement = 1, int startingStartingValue = 1,
        std::string startingColor = "White", bool isSymbols = false , std::string startingMaterial = "Bone"){
    numberOfSides = startingNumberOfSides;
    increment = startingIncrement;
    value = startingStartingValue;
    color = startingColor;
    material = startingMaterial;
}
int Die :: roll(){
    value = random() % numberOfSides;
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
void Die :: setStartingValue(int newStartingValue){
    startingValue = newStartingValue;
}
int Die :: getStartingValue(){
    return startingValue;
}
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
void Die :: setColor(bool newIsSymbol){
    //need to add a value here
}
bool Die :: isSymbol(){
    //need to add a value here
}
void Die :: setMaterial(std::string newMaterial){
    material = newMaterial;
}
std::string Die :: getMaterial(){
    return material;
}