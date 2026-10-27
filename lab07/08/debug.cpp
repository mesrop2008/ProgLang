#include <iostream>

int main() {
    int s = 0;
    int iteration = 0;
    for (int i = 0, j = 5; i+j <= 16; ) {
        iteration++;
        std::cout << "Iteration " << iteration << ": i=" << i << " j=" << j << " i+j=" << i+j << " s=" << s << std::endl;
        (s += i) += j;
        std::cout << "  After (s+=i)+=j: s=" << s << std::endl;
        std::cout << "  i<j? " << (i<j?"yes":"no") << " -> increment " << (i<j?"i":"j") << std::endl;
        (i<j ? i : j)++;
        std::cout << "  After increment: i=" << i << " j=" << j << std::endl;
    }
    std::cout << "Final: s=" << s << std::endl;
    return 0;
}
