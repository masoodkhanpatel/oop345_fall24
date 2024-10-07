//// No Exceptions - compile on GCC
//// noexceptions.cpp
//
//#include <iostream>
//
//void d() { throw "d() throws\n"; }
//void e()
//{
//    try
//    {
//        d(); // throws
//    }
//    catch (const char* msg) // caught here
//    {
//        std::cout << msg;
//    }
//}
//
//void f() { throw "f() throws\n"; }
//
//void g() noexcept { e(); } // all good
//
//void h() noexcept { f(); } // I am lying to the compiler
//
//int main()
//{
//    std::cout << "Calling g:";
//    g(); // all good
//
//    std::cout << "Calling h:";
//    h(); // terminate
//
//    std::cout << "Normal exit\n";
//}