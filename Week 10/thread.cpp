//// Thread Class
//// thread.cpp
//
//#include <iostream>
//#include <string>
//#include <thread>
//
//void task(const std::string& str)
//{
//    std::cout << str + " says Hi\n";
//}
//
//int main()
//{
//    // spawn child thread t1
//    std::thread t1(task, "Masood");
//
//    // spawn child thread t2
//    std::thread t2(task, "Dmitri");
//
//    // continue executing main thread
//    task("main function"); // main thread itself
//
//    // synchronize - IMPORTANT!
//    t2.join();
//    t1.join();
//}
//
//// thread.cpp -> main,t1,t2
//// end of main -> t1,t2