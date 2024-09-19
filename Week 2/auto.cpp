//// Type Inference
//// auto.cpp
//
//#include <iostream>
//
//int main()
//{
//    int a[]{ 1, 2, 3, 4, 5, 6 };
//    const auto n = 6;
//    auto x = 3.56;
//    auto name = "John Doe";
//
//    for (auto i = 0; i < n; i++)
//        std::cout << a[i] << ' ';
//    std::cout << std::endl;
//}
//
//
//// Type Inference
//// auto-compilation-error.cpp
//
//#include <iostream>
//
//int main()
//{
//    int a[]{ 1, 2, 3, 4, 5, 6 };      // ERROR
//    const auto n = 6;
//
//    for (auto i = 0; i < n; i++)
//        std::cout << a[i] << ' ';
//    std::cout << std::endl;
//}