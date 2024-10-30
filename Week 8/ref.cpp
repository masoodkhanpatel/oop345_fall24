//// Functional - create a reference wrapper
//// ref.cpp
//
//#include <iostream>
//#include <functional>
//
//void increment(int& x, int& y) { ++x, ++y; }
//
//void swap(int& a, int& b) {
//    int temp;
//    temp = a;
//    a = b;
//    b = temp;
//}
//
//int main()
//{
//    int a = 10, b = 20;
//    auto inc = bind(increment, std::ref(a), b);
//
//    auto sw = bind(std::plus<int>(), std::ref(a), std::ref(b));
//
//    std::cout << &a << "\n";
//
//    auto x = std::ref(a);
//    std::cout << std::addressof(a) << "\n";
//    std::cout << std::addressof(x) << "\n";
//    std::cout << std::addressof(x.get()) << "\n";
//    std::cout << &x << "\n";
//
//    //inc();
//    std::cout << sw() << "\n";
//
//    std::cout << "a = " << a << std::endl;
//    std::cout << "b = " << b << std::endl;
//
//    // [f, l) -> [0,99)
//}