#include <iostream>

/*
* count the times of same number
*/
int main() {
    int cur_num = 0;
    int cur_times = 0;
    std::cout << "Please input numbers to count: " << std::endl;
    if (std::cin >> cur_num) {
        cur_times++;
        int value = 0;
        while (std::cin >> value) {
            if (value == cur_num) {
                cur_times++;
            } else {
                std::cout << cur_num << " occurs " << cur_times << " times" << std::endl;
                cur_num = value;
                cur_times = 1;
            }
        }
        std::cout << cur_num << " occurs " << cur_times << " times" << std::endl;
    } else {
        std::cout << "not a number, exit..." << std::endl;
    }
    return 0;
}