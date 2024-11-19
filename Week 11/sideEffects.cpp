//// Macros Side-Effects
//// macrosSideEffects.cpp
//
//#include <iostream>
//#define PI 3.14
//#define SQUARE(X)  ((X) * (X))
//
//int main()
//{
//	double r = 2.35;
//	std::cout << "PI(r++)^2 is " << PI * SQUARE(r) << std::endl;
//	std::cout << "r is now " << r << std::endl;
//
//	r = 2.35;
//	std::cout << "PI(r++)^2 is " << PI * SQUARE(r++) << std::endl;
//	// PI * x * x
//	// 3.14 * r++ * r++
//	// 3.14 * 2.35 * 2.35
//	std::cout << "r is now " << r << std::endl;
//}