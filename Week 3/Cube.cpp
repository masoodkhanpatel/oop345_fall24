// A Cube
// Cube.cpp

#include "Cube.h"

Cube::Cube(double l) : len{ l } {}

double Cube::volume() const
{
    return len * len * len;
}

Shape* Cube::clone() const
{
    return new Cube(*this);
}
