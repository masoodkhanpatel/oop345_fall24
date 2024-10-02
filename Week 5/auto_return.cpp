//// decltype with templates
//// decltype.cpp
//
//#include <iostream>
//#include "MyLib.h"
//
//template<typename t, typename u>
//auto add(const t& t, const u& u) -> decltype(t)
//{
//    return t + u;
//}
//class Student {
//
//};
//
//class Person {
//
//};
//
//int main()
//{
//    Student a;
//    Person b;
//    std::cout <<  typeid(add<Student, Person>(a,b)).name();
//
//}