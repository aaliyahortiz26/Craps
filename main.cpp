#include <iostream>
#include "die.h"

int main() {
    Die rollingThing(6, 1, 1, "White" , false, "Bone");

    std::cout << "Number of sides: " << rollingThing.getNumberOfSides() << std::endl;
    std::cout << "Increment: " << rollingThing.getIncrement() << std::endl;
    std::cout << "Starting Value: " << rollingThing.getValue() << std::endl;
    std::cout << "Color: " << rollingThing.getColor() << std::endl;
    std::cout << "Die Material: " << rollingThing.getMaterial() << std::endl;

    std::cout << "Rolled a: " << rollingThing.roll() << std::endl;

    return 0;
}
