#include <cmath>
#include <iostream>

int main() {
    int n;
    std::cin >> n;
    long double s = pow(2, n);
    long double t = powl(2, n);
    std::cout << std::scientific << s << std::endl;
    std::cout << std::scientific << t << std::endl;
    return 0;
}
