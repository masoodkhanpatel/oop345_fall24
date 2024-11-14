//// Race condition threads example
////
//
//#include <iostream>
//#include <thread>
//#include <vector>
//#include <numeric>
//#include <chrono>
//
//void accumulate(std::vector<double>& x, double& sum, int start, int end) {
//	for (int i = start; i < end; i++) {
//		sum += x[i];
//	}
//}
//
//
//int main() {
//	// 1 << 27 = 2^27, all elements are 0.5
//	for (int i = 1; i < 28; i++) {
//
//		std::vector<double> x(1 << i, 0.5); // 1 << i = 2^i
//
//		auto start = std::chrono::steady_clock::now();
//		double sum = 0.0;
//
//		int num_threads = 2;
//		std::vector<std::thread> threads;
//
//
//		std::vector<double> partial_sums(num_threads, 0.0);
//		// {0,1,2,3,4,5,6,7}
//
//		int chunk_size = x.size() / num_threads;
//
//		for (int i = 0; i < num_threads; i++) {
//			threads.push_back(std::thread(accumulate, std::ref(x), std::ref(partial_sums[i]), i * chunk_size, (i + 1) * chunk_size));
//		}
//
//		for (int i = 0; i < num_threads; i++) {
//			threads[i].join();
//			sum += partial_sums[i];
//		}
//		auto end = std::chrono::steady_clock::now();
//
//		std::chrono::duration<double> elapsed_time = end - start;
//
//		std::cout << "2^" << i << ": Sum = " << sum << "\t";
//		// Sum = 6.71089e+07, 6.71089 * 10^7
//		std::cout << "Elapsed time = " << elapsed_time.count() << "\n";
//	}
//	return 0;
//}