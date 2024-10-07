//// Exception Handling
//// exceptions.cpp
//
//#include <iostream>
//#include <exception>
//
//void divide(double a[], int i, int n, double divisor)
//{
//    if (i < 0 || i >= n)
//        throw "Outside bounds";// char* - c style, c++ style: std::string
//    else if (divisor == 0)
//        throw divisor;
//    else
//        throw std::invalid_argument::invalid_argument("xasasa");
//        //a[i] = i / divisor;
//}
//
//int main()
//{
//    bool keepdividing = true;
//    double a[] = { 1.1,2.2,3.3,4.4,5.5,6.6 }, divisor;
//    int i, n = sizeof a / sizeof a[0];
//
//    do
//    {
//        try
//        {
//            std::cout << "Index: ";
//            std::cin >> i;
//            std::cout << "Divisor: ";
//            std::cin >> divisor;
//            divide(a, i, n, divisor); // can throw exceptions
//            std::cout << "a[i] = " << a[i] << std::endl;
//            std::cout << "Continuing ..." << std::endl;
//        }
//        //catch (const char* msg)
//        //{
//        //    std::cout << msg << std::endl;
//        //    keepdividing = false;
//        //}
//        //catch (std::out_of_range& e) {
//        //    std::cout << "Out of range.\n";
//        //}
//        //catch (...)
//        //{
//        //    std::cout << "Zero Division!" << std::endl;
//        //    std::cout << "a[i] = " << a[i] << std::endl;
//        //    std::cout << "Continuing ..." << std::endl;
//        //    // keepdividing = false
//        //}
//        catch (std::exception& e) {
//            std::cout << e.what(); // .what() - prints the message given
//
//        }
//
//    } while (keepdividing);
//}