//// Bitwise Expressions - Left Shift
//// left.cpp
//
//#include <iostream>
//
//int main()
//{
//	unsigned u = 27u;  // 0...00011011
//	// 27 - 0000000000000000000000011011
//
//	//  << left shift
//	std::cout << u << " << " << 2 << " = " << (u << 2) << std::endl;
//	// (27 << 2)
//	// 0000000000000000000000011011 - 27
//	// 0000000000000000000000110110 - 27 << 1
//	// 0000000000000000000001101100 - 27 << 2
//
//	// (n << a ) = n * 2^a
//	// (27 << 2) = 27 * 2^2 = 27 * 4 = 108
//
//}