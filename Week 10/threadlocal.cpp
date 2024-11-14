// Thread Local Storage Duration
// thread_local.cpp

#include <iostream>
#include <sstream>
#include <thread>

thread_local int k = 0;

void task(int i)
{
    k = i;
    std::stringstream s;
    s << k << " at " << &k << std::endl;
    std::cout << s.str();
}

int main()
{
    k = 10;
    std::thread t1(task, 15);
    std::thread t2(task, 20);
    t1.join();
    t2.join();
    task(k);
}