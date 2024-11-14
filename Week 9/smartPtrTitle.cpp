//// Smart Pointer for title
//// SmartPtr.cpp
//
//#include <iostream>
//#include <memory>
//#include "Title.h"
//#include "SmartPointer.h"
//
//void display(const char* s)
//{
//    // SmartPtr<Title> t(new Title(s));
//    std::unique_ptr<Title> t(new Title(s));
//
//    t->display(); // throws exception fori invalid ""
//
//    t.release();// skipping when exception is thrown
//
//}// goes out of scope
//
//int main()
//{
//    const char* s[] = { "Mr.", "Ms.", "", "Dr." };
//
//    for (auto x : s)
//    {
//        try
//        {
//            display(x); // throws exception for invalid
//        }
//        catch (const char* msg)
//        {
//            std::cerr << msg << std::endl;
//        }
//    }
//}