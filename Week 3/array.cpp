// Array
// array.h
#include <iostream>

class Array
{
    int a[50];
    unsigned n;
    int dummy;
public:
    Array() : n{ 0u }, dummy{ 0 } {}
    int& operator[](unsigned i)
    {
        return i < 50u ? a[i] : dummy;
    }
};

int main() {
    Array a;
    std::cout << a[49];
}