#include <iostream>

int main() {
    int i = 1;
    int &i_ref = i;
    const int &i_cref = i;
    std::cout << "before: " << i_cref << std::endl;
    i_ref = 2;
    std::cout << "after: " << i_cref << std::endl;
    return 0;
}