//
// Created by Aaliyah Ortiz on 2/14/20.
//

#include "die.h"
#include <random>

Die(int startingNumberOfSides, int startingIncrement = 1, int startingStaringValue = 1,
        std::string color = "White", bool isSymbols = false , std::string material = "Bone"){

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

}
bool Die :: isSymbol(){

}
void Die :: setMaterial(std::string newMaterial){
    material = newMaterial;
}
std::string Die :: getMaterial(){
    return material;
}