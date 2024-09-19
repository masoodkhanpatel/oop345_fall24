// A Shape
// Shape.h
#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
public:
    virtual double volume() const = 0;
    virtual Shape* clone()  const = 0;

};
#endif