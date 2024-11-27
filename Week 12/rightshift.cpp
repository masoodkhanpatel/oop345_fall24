//// Bitwise Expressions - Right Shift
//// right.cpp
//
//#include <iostream>
//#include <climits>
//
//int main()
//{
//	unsigned u, v;
//	int w;
//
//	u = 27u;                                   // 0...0011011
//	v = 1u << sizeof(unsigned) * CHAR_BIT - 1; // 10..0000000
//	w = -1;                                    // 1...1111111
//
//	std::cout << u << " >> " << 2 << " = " << (u >> 2) << std::endl;
//	// 27 - 0000000000000000000000011011
//	// 27 >> 1
//	// 0000000000000000000000011011
//	// 0000000000000000000000001101 
//	// 0000000000000000000000000110 - 6
//	std::cout << v << " >> " << 8 << " = " << (v >> 8) << std::endl;
//	std::cout << w << " >> " << 2 << " = " << (w >> 2) << std::endl;
//}