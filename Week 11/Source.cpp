//// Function-Like Macros
//// fnMacros.cpp
//
//#include <iostream>
//#include <chrono>
//#define PI 3.14
//#define AREA(R) PI * R * R // function-like macro
//
//
//// saving time from creating a new stack for a function call 
//// and time spent in returning the value
//
//double area(int r)
//{
//	return PI * r * r;
//}
//
//int main()
//{
//	// call the macro for various input, increasing input
//	auto start = std::chrono::high_resolution_clock::now();
//	for (int i = 0; i < 1000; i++)
//	{
//
//		int num = 2 ^ i;
//		double area = AREA(num); // ->  3.14 * i * i
//	}
//	auto end = std::chrono::high_resolution_clock::now();
//	std::chrono::duration<double> elapsed = end - start;
//	std::cout << "Time taken by function-like macro: " << elapsed.count() << "s\n";
//
//	start = std::chrono::high_resolution_clock::now();
//	for (int i = 0; i < 1000; i++)
//	{
//
//		int num = 2 ^ i;
//		double a = area(num); 
//	}
//	end = std::chrono::high_resolution_clock::now();
//	elapsed = end - start;
//	std::cout << "Time taken by function: " << elapsed.count() << "s\n";
//
//
//}