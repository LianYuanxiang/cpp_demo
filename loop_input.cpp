#include <iostream>

/*
* 循环输入数字，累加后输出和
*/
int main() {
    int value = 0;
    int sum = 0;
    std::cout << "Please input numbers to calculate: " << std::endl;
    while (std::cin >> value) {  // end with EOF(macOS: 回车，Ctrl+D)
        sum += value;
    }
    std::cout << "sum = " << sum << std::endl;
    return 0;
}