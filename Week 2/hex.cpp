// Hexadecimal Representation at an Address
// hexDump.cpp

#include <iostream>
#include <iomanip>

void hexDump(void*, int);

int main()
{
    int i;
    double x;

    std::cout << "Integer value: ";
    std::cin >> i;
    std::cout << "is : ";
    hexDump(&i, 4);
    std::cout << std::endl;

    std::cout << "Floating-point value: ";
    std::cin >> x;
    std::cout << "is : ";
    hexDump(&x, 8);
    std::cout << std::endl;
}

// Dump the first "n" bytes starting from the address stored in "a"
void hexDump(void* a, int n) // void* a (generic) allows me to pass address to any type
{
    unsigned char* c = static_cast<unsigned char*>(a);

    auto oldFill = std::cout.fill('0'); // zero fill
    std::cout << std::hex;              // hexadecimal output

    for (int i = 0; i < n; i++)
        std::cout << std::setw(2) << static_cast<int>(c[i]) << ' ';
    // 38 00 00 00
    // stored: 0 0 0 0 0 0 3 8 - 32 bits - 4 bytes - int
    // 0000000000111000 - human format
    // 0001110000000000 - machine format
    // 2^0 + 2^1 + ......
    // Little Endian - 
    //  42 01 00 00
    // 00000142
    std::cout.fill(oldFill);  // restore the filling character
}