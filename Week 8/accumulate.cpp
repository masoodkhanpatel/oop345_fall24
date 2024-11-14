//// Algorithms - Accumulate
//// accumulate.cpp
//
//#include <iostream>
//#include <numeric>
//#include <numeric>
//#include <numeric>
//#include <numeric>
//
//int main()
//{
//    int a[] = { 3, 2, 4, 1,3,3,4,4, }; // a[4], [f,l), a[3]
//    int s;
//    int n = sizeof(a) / sizeof(int); 
//
//    s = std::accumulate(a, &a[n], (int)0); // stop at a[n-1];
//
//    std::cout << "sum = " << s << std::endl;
//
//    for (auto each : a) {
//        std::cout << each << " ";
//    }
//    std::cout << std::endl;
//    s = std::accumulate(a, &a[n], (int)0, [](int x, int y)
//        {
//            std::cout << x << " " << y << std::endl;
//            int temp = x + 2 * y;
//            std::cout << temp << "\n";
//            return temp;
//        });
//
//    std::cout << "2 * sum = " << s << std::endl;
//}