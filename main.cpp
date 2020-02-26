#include <iostream>
#include "die.h"

int main() {
    Die rollingThing(6, 4, 6, "White" , false, "Bone");

    std::cout << "Number of sides: " << rollingThing.getNumberOfSides() << std::endl;
    std::cout << "Increment: " << rollingThing.getIncrement() << std::endl;
    std::cout << "Starting Value: " << rollingThing.getValue() << std::endl;
    std::cout << "Color: " << rollingThing.getColor() << std::endl;
    std::cout << "Die Material: " << rollingThing.getMaterial() << "\n" << std::endl;

    std::cout << "Roll: " << rollingThing.roll() << std::endl;

    rollingThing.setNumberOfSides(12);
    rollingThing.setColor("Green");
    rollingThing.setStartingValue(4);
    rollingThing.setIncrement(3);
    rollingThing.setMaterial("Plastic");
    rollingThing.setValue(2); //what is this value meant for

    std::cout << "New Round!!" << std::endl;
    std::cout << "Number of sides: " << rollingThing.getNumberOfSides() << std::endl;
    std::cout << "Increment: " << rollingThing.getIncrement() << std::endl;
    std::cout << "Starting Value: " << rollingThing.getStartingValue() << std::endl;
    std::cout << "Color: " << rollingThing.getColor() << std::endl;
    std::cout << "Material: " << rollingThing.getMaterial() << "\n" << std::endl;

    rollingThing.roll();

    return 0;
}
