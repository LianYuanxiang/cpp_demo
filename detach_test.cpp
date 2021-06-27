#include <iostream>
#include <thread>
#include <chrono>

void independant_func() {
    std::cout << "independant_func..."  << std::endl;
    return;
}

void function1() {
    std::thread t1(independant_func);
    std::cout << "function1..." << std::endl;
    // t1.join();
    t1.detach();  // join/detach区别在于两者是否阻塞主调线程
    return;
}

int main() {
    function1();
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    return 0;  // 当进程结束的时候，即便detach没有完毕任务也会被强制杀死
}