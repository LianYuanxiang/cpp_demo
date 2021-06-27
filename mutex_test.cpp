#include <iostream>
#include <thread>
#include <unistd.h>

int value;

void function(int v) {
    std::mutex mtx;
    std::lock_guard<std::mutex> lock(mtx);  // RAII，退出时自动调用unlock保证异常安全
    sleep(v);
    value = v;
}

void function2(int v) {
    std::mutex mtx;
    std::unique_lock<std::mutex> lock(mtx);
    value = v;
    lock.unlock();  // 可主动lock、unlock，缩小锁范围，提高并发度
    std::cout << "aaa" << std::endl;
    lock.lock();
    value++;
}

int main() {
    std::thread t1(function, 1), t2(function, 2);
    t1.join();
    t2.join();
    std::cout << "value: " << value << std::endl;

    std::thread t3(function2, 3), t4(function2, 4);
    t3.join();
    t4.join();
    std::cout << "value = " << value << std::endl;

    return 0;
}