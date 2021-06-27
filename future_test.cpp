#include <iostream>
#include <thread>
#include <future>

// future提供获取异步调用结果的途径
int main() {
    std::packaged_task<int()> task([](){return 7;});
    std::future<int> result = task.get_future();
    std::thread(std::move(task)).detach();
    std::cout << "waiting..." << std::endl;
    result.wait();  // 设置barrier，阻塞future的完成
    std::cout << "done!" << std::endl << "get result from future: " << result.get() << std::endl;
    return 0;
}