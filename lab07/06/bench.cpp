#include <iostream>
#include <string>
#include <chrono>

void test_fast(int n) {
    auto t0 = std::chrono::high_resolution_clock::now();
    std::string s;
    for (int i=0; i<n; i++) s += 'a';
    auto t1 = std::chrono::high_resolution_clock::now();
    std::cout << "fast (+=) N=" << n << ": " 
              << std::chrono::duration_cast<std::chrono::microseconds>(t1-t0).count() << " us" << std::endl;
}

void test_slow(int n) {
    auto t0 = std::chrono::high_resolution_clock::now();
    std::string s;
    for (int i=0; i<n; i++) s = s + 'a';
    auto t1 = std::chrono::high_resolution_clock::now();
    std::cout << "slow (=+) N=" << n << ": " 
              << std::chrono::duration_cast<std::chrono::milliseconds>(t1-t0).count() << " ms" << std::endl;
}

int main() {
    test_fast(10000);
    test_slow(10000);
    test_fast(20000);
    test_slow(20000);
    test_fast(50000);
    test_slow(50000);
    test_fast(100000);
    test_slow(100000);
    test_fast(1000000);
    return 0;
}
