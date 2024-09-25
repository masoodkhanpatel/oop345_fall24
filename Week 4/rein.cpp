//// Cast to an Unrelated Type
//// reinterpret_cast.cpp
//
//#include <iostream>
//
//int main() {
//    int* a = new int();
//    *a = 3;
//    void* b = reinterpret_cast<void*>(a);
//    int* c = reinterpret_cast<int*>(b);
//
//    std::cout << *(reinterpret_cast<double*>(b)) << std::endl;
//    std::cout << *c;
//}