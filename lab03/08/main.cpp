#include <iostream>

int main() {
    int v[] = {1, 2};
    for (int x : v)
        for (int y : v)
            for (int z : v)
                std::cout << "x=" << x << " y=" << y << " z=" << z << "   "
                          << (x == y) << " + " << (x == z) << " == 1  ->  "
                          << ((x == y) + (x == z) == true) << "\n";
    int x, y, z;
    std::cout << "x y z: ";
    std::cin >> x >> y >> z;
    std::cout << std::boolalpha << ((x == y) + (x == z) == true) << std::endl;
    return 0;
}
