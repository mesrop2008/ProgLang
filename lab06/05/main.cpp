#include <iostream>
#include <string>

namespace geometry {
    const double pi = 3.14159265358979;

    double area(double r) {
        return pi * r * r;
    }

    namespace square {
        double area(double a) {
            return a * a;
        }
    }
}

namespace shop {
    double discount = 0.1;

    double area(double width, double length) {
        return width * length;
    }

    double price(double base) {
        return base * (1 - discount);
    }
}

namespace sq = geometry::square;

int main() {
    std::cout << "circle r=2: " << geometry::area(2) << "\n";
    std::cout << "square a=3: " << sq::area(3) << "\n";
    std::cout << "shop 4x5:   " << shop::area(4, 5) << "\n";

    shop::discount = 0.25;
    std::cout << "price 1000: " << shop::price(1000) << "\n";

    using geometry::pi;
    std::cout << "pi:         " << pi << "\n";

    using namespace shop;
    std::cout << "price 200:  " << price(200) << "\n";
    return 0;
}
