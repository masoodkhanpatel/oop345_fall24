//// Generic Pointer Type
//// void.cpp
//
//#include <iostream>
//
//class Student {
//    int a;
//};
//
//int main()
//{
//    int i;
//    void* v = &i;
//
//    int* j;
//    j = static_cast<int*>(v);  // OK - j now holds the address of i
//    
//
//    double s = 3.14;
//    v = &s;
//
//    double* r = static_cast<double*>(v);
//    //std::cout << &s << std::endl;
//    //std::cout << r << std::endl;
//    // r is an address
//    // &r -> address of the address(where it is stored)
//
//
//    //std::cout << &i << std::endl;
//    //std::cout << j << std::endl;
//
//
//    Student* a = new Student();
//    std::cout << &a << std::endl;
//    std::cout << a << std::endl;
//    v = a;
//    std::cout << v << std::endl;
//
//
//}