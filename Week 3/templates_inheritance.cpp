// Templates and Inheritance
// templates_inheritance.cpp

#include "templates_inheritance.h"

int main()
{
    Derived<double> d;
    d.set(12);
    d.display();

    Derived<int> b;
    b.set(12);
    b.display();
}