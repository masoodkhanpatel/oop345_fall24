//// Dynamic Allocations of an Array
//// dynamic.cpp
//
//#include <iostream>
//#include <iomanip>
//
//int main()
//{
//    int c;
//    int* a;  // pointer to array a
//
//    std::cout << "Number of elements : ";
//    std::cin >> c;
//
//    a = new int[c]; // allocate memory
//
//	int i;
//
//    for (i = 0; i < c; i++)
//        a[i] = (i + 1) * (i + 1);
//
//    for (i = 0; i < c; i++)
//        std::cout << std::setw(3) << i + 1
//        << std::setw(6) << a[i] << std::endl;
//
//    delete[] a; // de-allocate memory
//}