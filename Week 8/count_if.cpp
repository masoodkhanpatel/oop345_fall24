//// Algorithms - Count If
//// count_if.cpp
//
//#include <algorithm>
//#include <iostream>
//
//int main()
//{
//    int a[] = { 1, 2, 4, 5, 8, 9, 12, 13, 16, 18, 22 };
//
//    int n = std::count_if(a, a + 11, [](int i)
//        {
//            return !(i & 1);
//        });
//
//    std::cout << "Even numbers = " << n << std::endl;
//    //    101 - 5
//    //    001 - 1
//    //    001 - true for odd, false for even  
//    //    421
//}