//#include <iostream>
//#include <numeric>
//#include <chrono>
//#include <vector>
//
//int main() {
//    // 1 << 27 = 2^27, all elements are 0.5
//    for (int i = 1; i < 28; i++) {
//
//        std::vector<double> x(1 << i, 0.5); // 1 << i = 2^i
//
//        auto start = std::chrono::steady_clock::now();
//        double sum = std::accumulate(x.begin(), x.end(), 0.0);
//        auto end = std::chrono::steady_clock::now();
//
//        std::chrono::duration<double> elapsed_time = end - start;
//
//        std::cout << "2^" << i << ": Sum = " << sum << "\t";
//        // Sum = 6.71089e+07, 6.71089 * 10^7
//        std::cout << "Elapsed time = " << elapsed_time.count() << "\n";
//    }
//    return 0;
//}
//// (2^26)*2 = 2^27
//// 0.5 second -> 1 second
//
//
//// 8 threads
//// read some commmon variable
//// shared memory
//
