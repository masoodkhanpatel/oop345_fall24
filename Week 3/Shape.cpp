//// Shape Hierarchy
//// Shape.cpp
//
//#include <iostream>
//#include "Cube.h"
//#include "Sphere.h"
//#include <typeinfo>
//
//void displayVolume(const Shape* shape)
//{
//    if (shape)
//        std::cout << shape->volume() << std::endl;
//    else
//        std::cout << "ERROR!" << std::endl;
//}
//
//// Copy a Shape Object
//// copy_shape.cpp
//
//#include "Shape.h"
//
//
//
//Shape* select()
//{
//    Shape* shape;
//    double x;
//    char c;
//    std::cout << "s (sphere), c (cube) : ";
//    std::cin >> c;
//    if (c == 's')
//    {
//        std::cout << "dimension : ";
//        std::cin >> x;
//        shape = new Sphere(x);
//    }
//    else if (c == 'c')
//    {
//        std::cout << "dimension : ";
//        std::cin >> x;
//        shape = new Cube(x);
//    }
//    else
//        shape = nullptr;
//    return shape;
//}
//
//int main()
//{
//    Shape* shape = select();
//    Shape* clone = shape->clone();
//    Cube c(9);
//    displayVolume(shape);
//    displayVolume(clone);
//    std::cout << &shape << "\n";
//    std::cout << &clone << "\n";
//    std::cout << typeid(c).name() << "\n";
//    if (typeid(c).name() == "class Cube") {
//
//    }
//    delete clone;
//    delete shape;
//}