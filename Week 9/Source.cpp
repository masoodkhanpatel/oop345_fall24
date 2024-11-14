//// Element Addresses
//// addresses.cpp
//
//#include <iostream>
//
//int main()
//{
//    const char s[] = "A C string";
//
//  
//
//    std::cout << s << std::endl;
//    std::cout << &s << std::endl;
//    std::cout << &s[0] << std::endl;
//    std::cout << &s[2] << std::endl;
//
//    std::cout << (int*) & s[0] << " " << s[0] << std::endl;
//    std::cout << (int*)&s[1] << " " << s[1] <<  std::endl;
//    std::cout << (int*) & s[2] << " " << s[2] << std::endl;
//
//    for (int i = 0; s[i]; i++)
//        std::cout << (int*)&s[i] << " : " << s[i] << std::endl;
//}