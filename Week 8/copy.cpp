//// algorithms - copy
//// copy_.cpp
//
//#include <vector>
//#include <algorithm>
//#include <iostream>
//
//int main()
//{
//    std::vector<double> v(4, 3);
//    std::vector<double> c(4, 20.68);
//
//    for (auto& each : v)
//        std::cout << each << " ";
//
//    std::cout << std::endl;
//
//    for (auto& each : c)
//        std::cout << each << " ";
//
//    std::cout << std::endl;
//
//    std::copy_if(v.begin(), v.begin() + 2, c.begin() + 1, [](int x) { return x % 2 != 0; });
//
//    for (auto& each : c)
//        std::cout << each << " ";
//    std::cout << std::endl;
//}