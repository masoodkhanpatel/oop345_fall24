//// Macro Efficiency
//// effMacro.cpp
//
//#include <iostream>
//#include <ctime>
//#define PRODUCT(X, Y) (X)*(Y)
//#define NITER 1000000000
//
//double product(double x, double y)
//{
//    return x * y;
//}
//
//int main()
//{
//    double x;
//    int i;
//    std::clock_t c0, c1;
//
//    x = 1;
//    c0 = std::clock();
//    for (i = 0; i < NITER; i++)
//        x = PRODUCT(x, 1.0000000001); // macro version
//    c1 = std::clock();
//
//    std::cout << "Process time is "
//        << (double)(c1 - c0) / CLOCKS_PER_SEC << " secs\n";
//    std::cout << "Value of x is " << x << std::endl;
//
//    x = 1;
//    c0 = std::clock();
//    for (i = 0; i < NITER; i++)
//		x = product(x, 1.0000000001); // function version
//    c1 = clock();
//
//    std::cout << "Process time is "
//        << (double)(c1 - c0) / CLOCKS_PER_SEC << " secs\n";
//    std::cout << "Value of x is " << x << std::endl;
//}