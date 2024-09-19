//// Class Variables - Application
//// classVariableMain.cpp
//
//#include <iostream>
//#include "classVariable.h"
//
//
//class ABC {
//public:
//    static void doSomething() {};
//};
//
//int main()
//{
//    ABC::doSomething();
//
//    // no need for an instance to access the class variable
//    std::cout << Horse::howMany() << " horses\n";
//    Horse abc(99);
//    std::cout << abc.howMany() << " horses\n";
//
//    {
//        // create a local scope
//        Horse silver(3), northernDancer(4);
//
//        silver.display();
//        northernDancer.display();
//
//        std::cout << Horse::howMany() << " horses" << std::endl;
//        std::cout << silver.howMany() << " horses" << std::endl;
//        std::cout << northernDancer.howMany() << " horses" << std::endl;
//
//        // local scope ends: variables created in this scope will be destroyed
//    }
//
//    std::cout << Horse::howMany() << " horses" << std::endl;
//    std::cout << Horse::deleted << " horses deleted." << std::endl;
//}