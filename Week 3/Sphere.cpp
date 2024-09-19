// A Sphere
// Sphere.cpp

#include "Sphere.h"

Sphere::Sphere(double r) : rad{ r } {}

double Sphere::volume() const
{
    return 4.18879 * rad * rad * rad;
}

Shape* Sphere::clone() const
{
    return new Sphere(*this);
}