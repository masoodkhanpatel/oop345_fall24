//// Smart Pointers - Unsafe Exception
//// unsafe_exception.cpp
//
//#include <iostream>
//#include "Title.h"
//
//void display(const char* s)
//{
//    Title* t = new Title(s);
//    try
//    {
//        t->display();
//    }
//    catch (...)
//    {
//        delete t; // if invalid and throws exception
//        throw; // continue throwing
//    }
//    delete t; // if valid
//}
//
//int main()
//{
//    const char* s[] = { "Mr.", "Ms.", "", "Dr." };
//
//    for (auto x : s)
//    {
//        try
//        {
//            display(x);
//        }
//        catch (const char* msg)
//        {
//            std::cerr << msg << std::endl;
//        }
//    }
//}