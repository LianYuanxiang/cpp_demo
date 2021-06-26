#include <iostream>
#include <algorithm>
#include <vector>

template <typename Iter>
void print(Iter begin, Iter end) {
    while (begin != end) {
        std::cout << *begin << ", ";
        begin++;
    }
}

struct A {
    int value;
    A(int v) : value(v) {}
    bool operator>(const A &b) {
        return value > b.value;
    }
    bool operator<(const A &b) {
        return value < b.value;
    }
};

bool compareAsc(const A &a, const A &b) {
    return a.value < b.value;
}

bool compareDesc(const A &a, const A &b) {
    return a.value > b.value;
}

std::ostream &operator<<(std::ostream &os, const A &a) {
    std::cout << a.value;
    return os;
}

int main() {
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(2);
    std::cout << "original:" << std::endl;
    print(vec.begin(), vec.end());
    std::cout << std::endl;
    std::sort(vec.begin(), vec.end());
    std::cout << "default sort:" << std::endl;
    print(vec.begin(), vec.end());
    std::cout << std::endl;
    std::cout << "sort by greater:" << std::endl;
    std::sort(vec.begin(), vec.end(), std::greater<int>());
    print(vec.begin(), vec.end());
    std::cout << std::endl;

    std::vector<A> vec1;
    vec1.push_back(A(1));
    vec1.push_back(A(3));
    vec1.push_back(A(2));
    std::cout << "original:" << std::endl;
    print(vec1.begin(), vec1.end());
    std::cout << std::endl;
    std::sort(vec1.begin(), vec1.end(), compareAsc);
    std::cout << "sort by compareAsc:" << std::endl;
    print(vec1.begin(), vec1.end());
    std::cout << std::endl;
    std::cout << "sort by compareDesc:" << std::endl;
    std::sort(vec1.begin(), vec1.end(), compareDesc);
    print(vec1.begin(), vec1.end());
    std::cout << std::endl;

    return 0;
}