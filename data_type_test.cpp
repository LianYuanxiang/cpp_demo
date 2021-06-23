#include <iostream>

class A {};

class B {
public:
    void print() {
        std::cout << "B print" << std::endl;
    }
};

class C {
public:
    virtual void print() {
        std::cout << "C print" << std::endl;
    }
};

int main() {
    char ch;
    bool b;
    wchar_t wch;
    char16_t ch16;
    char32_t ch32;
    short s;
    int i;
    long l;
    long long ll;
    int32_t i32;
    int64_t i64;
    float f;
    double d;
    long double ld;
    int *ptr_i;
    A aa;
    B bb;
    C cc;

    std::cout << "size of char: " << sizeof(ch) << std::endl;
    std::cout << "size of bool: " << sizeof(b) << std::endl;
    std::cout << "size of wchar_t: " << sizeof(wch) << std::endl;
    std::cout << "size of ch16: " << sizeof(ch16) << std::endl;
    std::cout << "size of char32_t: " << sizeof(ch32) << std::endl;
    std::cout << "size of short: " << sizeof(s) << std::endl;
    std::cout << "size of int: " << sizeof(i) << std::endl;  // 由机器与编译器决定
    std::cout << "size of long: " << sizeof(l) << std::endl;
    std::cout << "size of long long: " << sizeof(ll) << std::endl;
    std::cout << "size of int32_t: " << sizeof(i32) << std::endl;
    std::cout << "size of int64_t: " << sizeof(i64) << std::endl;
    std::cout << "size of float: " << sizeof(f) << std::endl;
    std::cout << "size of double: " << sizeof(d) << std::endl;
    std::cout << "size of long double: " << sizeof(ld) << std::endl;
    std::cout << "size of int *: " << sizeof(ptr_i) << std::endl;

    std::cout << "size of class A: " << sizeof(aa) << std::endl;
    std::cout << "size of class B: " << sizeof(bb) << std::endl;
    std::cout << "size of class C: " << sizeof(cc) << std::endl;

    /* 64位macOS系统
    size of char: 1
    size of bool: 1
    size of wchar_t: 4
    size of ch16: 2
    size of char32_t: 4
    size of short: 2
    size of int: 4
    size of long: 8
    size of long long: 8
    size of int32_t: 4
    size of int64_t: 8
    size of float: 4
    size of double: 8
    size of long double: 16
    size of int *: 8
    size of class A: 1
    size of class B: 1
    size of class C: 8
    */

    return 0;
}