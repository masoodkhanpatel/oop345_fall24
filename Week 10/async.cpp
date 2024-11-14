//// Asynchronous Launch
//// async.cpp
//
//#include <iostream>
//#include <thread>
//#include <future>
//
//double task(double x) { 
//	std::cout << std::this_thread::get_id() << std::endl;
//    return x * 2; }
//
//int main()
//{
//    std::cout << std::this_thread::get_id() << std::endl;
//    std::future<double> f = std::async(task, 10);
//    double r = f.get();
//
//    std::cout << "Result = " << r << std::endl;
//}