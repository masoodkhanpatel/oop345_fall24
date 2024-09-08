#include <iostream>
#include <cstdint>

static_assert(sizeof(int) == 4, "Int must be 4 bytes on this system");

int main() {
    std::cout << "Example 1: Int size is " << sizeof(int) << " bytes\n";
    return 0;
}