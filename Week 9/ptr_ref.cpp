//// Reference to a Pointer
//// ref_to_ptr.cpp
//
//#include <iostream>
//
//void swap(int*& a, int*& b)
//{
//    int* t = a;
//    a = b;
//    b = t;
//}
//
//int main()
//{
//    int x, y; // & = abcdef (x), & = zdaskgdask (y)
//
//    int* p = &x; // p = abcdef
//    int* q = &y; // q = zdaskgdask 
//
//
//    // p = 000000DBDA1BFA24
//    // q = 000000DBDA1BFA44
//
//    std::cout << "p = " << p << std::endl;
//    std::cout << "q = " << q << std::endl;
//    std::cout << std::endl;
//    std::cout << "&p = " << &p << std::endl;
//    std::cout << "&q = " << &q << std::endl;
//    std::cout << std::endl;
//    std::cout << "x = " << &(*p) << std::endl;
//    std::cout << "y = " << &(*q) << std::endl;
//
//    swap(p, q);
//    std::cout << std::endl;
//    std::cout << "p = " << p << std::endl;
//    std::cout << "q = " << q << std::endl;
//    std::cout << std::endl;
//    std::cout << "&p = " << &p << std::endl;
//    std::cout << "&q = " << &q << std::endl;
//
//    // *p -> y
//    // *q -> x
//}
//
//
//
