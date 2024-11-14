//// Packaged Task
//// packaged_task.cpp
//
//#include <iostream>
//#include <thread>
//#include <future>
//
//double task(double x) { 
//    // sleep for 10 seconds
//	std::this_thread::sleep_for(std::chrono::seconds(10));
//    return x * 2; 
//}
//
//int main()
//{
//    std::packaged_task<double(double)> pt(task);
//
//	// f is a future object
//    auto f = pt.get_future();
//
//    // pt(10);
//	std::thread t(std::move(pt), 10);
//
//	t.join();
//	double r = f.get(); // get the result from the future
//
//    std::cout << "Result = " << r << std::endl;
//}