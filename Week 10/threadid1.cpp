//// Thread Class - Function with Arguments
//// thread_id_arg.cpp
//
//#include <iostream>
//#include <thread>
//#include <vector>
//
//constexpr int NT = 10;
//
//void task(int i)
//{
//    std::cout << i << " Thread id = "
//        << std::this_thread::get_id() << std::endl;
//}
//
//int main()
//{
//    // create a vector of not-joinable threads
//    std::vector<std::thread> threads;
//
//    // launch execution of each thread
//    for (int i = 0; i < NT; i++)
//        threads.push_back(std::thread(task, i));
//
//    // synchronize their execution here
//    for (auto& thread : threads)
//        thread.join();
//}