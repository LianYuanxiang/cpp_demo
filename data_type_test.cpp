#include <iostream>

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

    std::cout << "size of char: " << sizeof(ch) << std::endl;
    std::cout << "size of bool: " << sizeof(b) << std::endl;
    std::cout << "size of wchar_t: " << sizeof(wch) << std::endl;
    std::cout << "size of ch16: " << sizeof(ch16) << std::endl;
    std::cout << "size of char32_t: " << sizeof(ch32) << std::endl;
    std::cout << "size of short: " << sizeof(s) << std::endl;
    std::cout << "size of int: " << sizeof(i) << std::endl;
    std::cout << "size of long: " << sizeof(l) << std::endl;
    std::cout << "size of long long: " << sizeof(ll) << std::endl;
    std::cout << "size of int32_t: " << sizeof(i32) << std::endl;
    std::cout << "size of int64_t: " << sizeof(i64) << std::endl;
    std::cout << "size of float: " << sizeof(f) << std::endl;
    std::cout << "size of double: " << sizeof(d) << std::endl;
    std::cout << "size of long double: " << sizeof(ld) << std::endl;
    std::cout << "size of int *: " << sizeof(ptr_i) << std::endl;

    return 0;
}