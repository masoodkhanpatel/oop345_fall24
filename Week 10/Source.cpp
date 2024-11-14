//#include <iostream>
//#include <chrono>
//
//int main() {
//	// Time complexity demonstration
//	int n = 1000;
//	int sum = 0;
//	auto start = std::chrono::high_resolution_clock::now();
//	for (int i = 0; i < n; i++) {
//		sum += i;
//	}
//	auto end = std::chrono::high_resolution_clock::now();
//	std::chrono::duration<double> duration = end - start;
//	// Duration in milliseconds
//	std::cout << "Duration: " << duration.count() * 1000 << "ms" << std::endl;
//	std::cout << "Sum: " << sum << std::endl;
//
//	n = 10000000;
//	sum = 0;
//	start = std::chrono::high_resolution_clock::now();
//	for (int i = 0; i < n; i++) {
//		sum += i;
//	}
//	end = std::chrono::high_resolution_clock::now();
//	duration = end - start;
//	// Duration in milliseconds
//	std::cout << "Duration: " << duration.count() * 1000 << "ms" << std::endl;
//	std::cout << "Sum: " << sum << std::endl;
//	return 0;
//}


// int x;
// 8 threads, t1, t2, t3, t4, t5, t6, t7, t8
// t1: x = 1
// mutex


// int s1;
// t1 -> s1? --> t1 creates shared memory s1 and puts in a calculation in it
// 
// t2 -> s2 = s1 + 1
// t1 is the owner of s1
// t1 is setter of s1 - provider
// 
// t2 as getter - future of s1