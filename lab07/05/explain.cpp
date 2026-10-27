#include <iostream>
#include <algorithm>

int main() {
    int a = 1, b = 2;
    std::cout << "Before: a=" << a << " b=" << b << std::endl;
    a,b = b,a;
    std::cout << "After:  a=" << a << " b=" << b << std::endl;

    a = 1; b = 2;
    std::swap(a, b);
    std::cout << "Swap:   a=" << a << " b=" << b << std::endl;

    return 0;
}
