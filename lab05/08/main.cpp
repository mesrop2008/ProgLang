#include <iomanip>
#include <iostream>

int main() {
    long long start = 9007199254740990LL;
    std::cout << std::fixed << std::setprecision(0);
    for (long long n = start; n <= start + 6; n++) {
        double d = n;
        std::cout << n << " -> " << d << (static_cast<long long>(d) == n ? "" : "   <- error") << "\n";
    }
    return 0;
}
