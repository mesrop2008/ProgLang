#include <iostream>
int main() {
    int x = 5, y = 10;
    (++x) = y;
    std::cout << "x=" << x << std::endl;
    return 0;
}
