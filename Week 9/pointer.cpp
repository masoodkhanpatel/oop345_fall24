//// Pointer Addition
//// pointerAddition.cpp
//
//#include <iostream>
//
//int main()
//{
//    double a[] = { 1.1, 2.2, 3.3, 4.4 , 5.5 };
//    int i = 2;
//    double* p;
//
//    p = &a[2];
//
//    //std::cout << std::hex;
//
//    std::cout << a[0] << " : " << a << std::endl;
//    std::cout << p[0] << " : " << p << std::endl;
//
//    std::cout << *(p) << " : " << (p) << std::endl;
//    std::cout << *(p+1) << " : " << (p+1) << std::endl;
//    std::cout << *(p + 2) << " : " << (p + 2) << std::endl;
//    std::cout << *(p + 3) << " : " << (p + 3) << std::endl;
//
//    std::cout << *(p + i) << " : " << p + i << std::endl;
//    std::cout << p[i] << " : " << &p[i] << std::endl;
//}