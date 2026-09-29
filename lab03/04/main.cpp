#include <iostream>
#include <typeinfo>

int main() {
    bool x = true, y = false;
    auto a = x & y;
    std::cout << typeid(a).name() << std::endl;
    auto b = x && y;
    std::cout << typeid(b).name() << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "typeid(int) = " << typeid(int).name()
              << ", typeid(bool) = " << typeid(bool).name() << std::endl;
    return 0;
}
