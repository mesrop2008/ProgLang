#include <iostream>

int main() {
    int t[][3] = {{1, 1, 1}, {2, 2, 2}, {1, 2, 0}, {2, 2, 1}, {0, 1, 0}};
    std::cout << std::boolalpha;
    for (auto& r : t) {
        int x = r[0], y = r[1], z = r[2];
        std::cout << "x=" << x << " y=" << y << " z=" << z
                  << "   x==y==z -> " << (x == y == z) << "\n";
    }
    return 0;
}
