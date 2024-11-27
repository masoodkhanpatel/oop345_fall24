//// Bitwise shift efficiency
//
//#include <iostream>
//#include <iomanip>
//#include <chrono>
//
//int pow(int a,int b){
//	int result = 1;
//	for (int i = 0; i < b; i++) {
//		result *= a;
//	}
//	return result;
//}
//
//int main() {
//	// 27 * 2^2 = 27 * 4 = 108
//	unsigned u = 27u;  // 0...00011011
//	auto start = std::chrono::high_resolution_clock::now();
//	std::cout << u << " *2^ " << 2 << " = " << u*pow(2,2) << std::endl;
//	auto end = std::chrono::high_resolution_clock::now();
//	std::chrono::duration<double> elapsed = end - start;
//	std::cout << "Elapsed time: " << elapsed.count() << " s\n";
//
//	start = std::chrono::high_resolution_clock::now();
//	std::cout << u << " << " << 2 << " = " << (u << 2) << std::endl;
//	end = std::chrono::high_resolution_clock::now();
//	elapsed = end - start;
//	std::cout << "Elapsed time: " << elapsed.count() << " s\n";
//}