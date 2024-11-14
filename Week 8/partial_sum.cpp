//// Algorithms - Partial Sum
//// partial_sum.cpp
//
//#include <iostream>
//#include <vector>
//#include <functional>
//#include <numeric>
//
//int main()
//{
//    std::vector<int> v = { 1, 2, 3, 4 }, p(4);
//
//    std::partial_sum(v.begin(), v.end(), p.begin());
//
//    for (auto i : v)
//        std::cout << i << " ";
//    std::cout << std::endl;
//    for (auto i : p)
//        std::cout << i << " ";
//    std::cout << std::endl;
//
//    std::partial_sum(v.begin(), v.end(), p.begin(),
//        std::minus<int>());
//
//    for (auto i : p)
//        std::cout << i << " ";
//    std::cout << std::endl;
//}