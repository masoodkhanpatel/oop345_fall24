// Templates and Inheritance
// templates_inheritance.h
#include <iostream>

template<typename T>
class Base
{
    T value;
public:
    void set(const T& v) { value = v; }
    void display() const { std::cout << value << std::endl; }
};

template<typename T>
class Derived : public Base<T>
{
public:
    void set(const T& v) { 
        Base<T>::set(v); 
    }
};