#include <iostream>

/*
* 简单main函数
* 读取两个数，计算它们之和
*/
int main() {
    int v1, v2;
    std::cout << "Please input two numbers: " << std::endl;
    std::cin >> v1 >> v2;  // 读取两个整数
    int sum = v1 + v2;
    std::cout << "The sum of input: " << sum << std::endl;
    return 0;
}