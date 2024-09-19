//#include <iostream>
//#include <vector>
//#include <utility>
//#include "template.h"
//
//template <typename T> // template header
//void foo()
//{
//    T value;
//    value = 1.5;
//    std::cout << value << '\n';
//}
//
//template<typename T, typename S,typename R>
//S add(T a, R b) {
//    return a + b;
//}
//
////specialization
//template <>
//int add<const char*>(const char* a, const char* b) {
//    return std::strcmp(a, b) > 0 ? 1 : 0;
//}
//
//template <>
//int add<const char*>(const char* a, int b) {
//    return 1;
//}
//
//class Student {
//
//};
//
//// specialization
//template <>
//Student add<Student&>(Student& a, Student& b) {
//
//}
//
//template<typename T>
//void swap(T a, T b) {
//
//}
//
//
//int main()
//{
//    std::vector<int> a;
//    std::vector<int> b;
//    int x = 5, y = 3;
// 
//    swap(x, y);
//    swap<int>(x, y);
//
//    add<int, float, float>(x, y);
//
//    std::swap(x, y);
//    std::swap(a, b);
//    foo<int>();    // template instantiation
//    foo<double>(); // template instantiation
//}