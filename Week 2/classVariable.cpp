// Class Variables - Implementation
// classVariable.cpp

#include <iostream>
#include "classVariable.h"

unsigned Horse::noHorses = 0; // this is how class variables are initialized
unsigned Horse::deleted = 0;
// the constructor increments the class variable, but is not initialize it
Horse::Horse(unsigned a) : age{ a }, id{ ++Horse::noHorses } {}

// the destructor decrements the class variable
Horse::~Horse() { 
    --Horse::noHorses;
    Horse::deleted++;
}

unsigned Horse::howMany()
{
    return Horse::noHorses;
}

void Horse::display() const
{
    std::cout << "Horse " << id << " is " << age << " years old\n";
}