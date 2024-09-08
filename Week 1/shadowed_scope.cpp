//// Shadowed Scope
//// shadowed_scope.cpp
//
//#include <iostream>
//
//int main()
//{
//    int i;
//    std::cout << "Enter i: ";
//    std::cin >> i;
//    if (i < 0)
//    {
//        int i = 4;  // shadows the outer i
//        std::cout << i << std::endl;
//    }
//    else
//    {
//        int i = -4; // shadows the outer i
//        std::cout << i << std::endl;
//    }
//    std::cout << i << std::endl;
//}