#include <iostream>

int main() {
    unsigned short x = 40000;
    unsigned short y = x + x;
    unsigned short z = x * 2;
    std::cout << "y = " << y << ", z = " << z << std::endl;
    y = y - x;
    z = z / 2;
    std::cout << y << " " << z << std::endl;
    return 0;
}
