// Logical Expressions
// logical.cpp

#include <iostream>

int main()
{
    int i = 1, j = 1;

    std::cout << (i < 2 || j++ == 1) << ' ' << j << std::endl;
    std::cout << (j == 2 && i++ == 1) << ' ' << i << std::endl;

    // i+=j; i=i+j;
}