//// Binary Access - Reading
//// readBinary.cpp
//
//#include <iostream>
//#include <fstream>
//
//int main(int argc, char* argv[])
//{
//    char str[1025];
//    char* p = str;
//
//    std::ifstream f(argv[1], std::ios::in | std::ios::binary);
//
//    while (f)
//        f.read(p++, 1);
//
//    *--p = '\0'; // adds the null terminator
//
//    std::cout << str << std::endl;
//}