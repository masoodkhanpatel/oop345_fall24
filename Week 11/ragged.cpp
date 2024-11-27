//// Ragged Arrays
//// raggedArray.cpp
//
//#include <iostream>
//#include <iomanip>
//
//int main()
//{
//    const char* name[] = { "Marg", "Jeremy", "Christopher", "Homer" };
//
//    // Notice the hex values and calculate the differences
//    for (int i = 0; i < 4; i++)
//        std::cout << std::setw(7) << &name[i] << std::setw(7) << std::hex
//        << "\t" << (int)&name[i][0] << std::dec << ' ' << name[i] << '\n';
//    std::cout << std::endl;
//}