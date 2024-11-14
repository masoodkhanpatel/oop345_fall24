//// Promise - Future
//// promise_future.cpp
//
//#include <iostream>
//#include <thread>
//#include <future>
//#include <chrono>
//
//void task(std::promise<double>& p)
//{
//    // pause this thread for 5 seconds
//	std::this_thread::sleep_for(std::chrono::seconds(10));
//    p.set_value(12.34);
//}
//
//int main()
//{
//    std::promise<double> p; // double p promised
//
//	std::future<double> f = p.get_future(); // future f
//
//    std::thread t(task, std::ref(p));
//
//    std::cout << "Value = " << f.get() << std::endl;
//
//    t.join();
//
//    // promise is setter
//	// future is getter
//
//    // create a promise
//	// create a future -> connected to that promise
//
//	// pass the promise to the thread
//	// the thread will set the value of the promise
//
//	// get the promise value from the future
//}