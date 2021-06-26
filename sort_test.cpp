#include <iostream>
#include <algorithm>
#include <vector>

void print(std::vector<int> &vec) {
    for (const auto &i : vec) std::cout << i << ", ";
}

int main() {
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(2);
    std::cout << "original:" << std::endl;
    print(vec);
    std::cout << std::endl;
    std::sort(vec.begin(), vec.end());
    std::cout << "default sort:" << std::endl;
    print(vec);
    std::cout << std::endl;
    std::cout << "sort by greater:" << std::endl;
    std::sort(vec.begin(), vec.end(), std::greater<int>());
    print(vec);
    std::cout << std::endl;
    return 0;
}