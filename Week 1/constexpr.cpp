// // Compiler-Evaluated Expressions
// // constexpr.cpp
//#define _CRT_SECURE_NO_WARNINGS 
//#include <iostream>
//#include <chrono>
//#include <ctime>
//
//int N = 20; 
//
//int factorial(int i) 
//{
//    return i > 1 ? i * factorial(i - 1) : 1;
//}
//
//
//int main()
//{
//    auto start = std::chrono::system_clock::now();
//
//    std::cout << N << "! = " << factorial(N) << std::endl;
//
//    auto end = std::chrono::system_clock::now();
//
//    //std::chrono::duration<double> elapsed_seconds = end - start;
//    auto elapsed_seconds = end - start;
//    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
//
//    std::cout << "finished computation at " << std::ctime(&end_time)
//            << "elapsed time: " << elapsed_seconds.count() << "s\n";
//}