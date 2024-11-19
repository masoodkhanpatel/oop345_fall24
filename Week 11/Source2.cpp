//// Macros A Potential Error
//// macrosPotError.cpp
//
//#include <iostream>
//#define PI 3.14
//#define SQUARE(x)  ((x) * (x))   /* OK */
//
//int main()
//{
//	std::cout << "PI(2.35)^2 is " << PI * SQUARE(2.35) << std::endl;
//	// PI * x * x
//	// 3.14 * 2.35 * 2.35
//
//	std::cout << "PI(2.35)^2 is " << PI * SQUARE(1.35+1) << std::endl;
//	// PI * x * x
//	// 3.14 * 1.35 + 1 * 1.35 + 1
//	// (3.14 * 1.35) + (1 * 1.35) + 1
//
//	// After adding the parentheses
//	// 3.14 * (1.35 + 1) * (1.35 + 1)
//}
