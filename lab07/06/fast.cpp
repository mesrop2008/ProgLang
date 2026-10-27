#include <iostream>
#include <string>
#include <chrono>
int main() {
    std::string s;
    auto start = std::chrono::high_resolution_clock::now();
    for (int i=0; i<1000000; i++)
        s += 'a';
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << s.size() << std::endl;
    std::cout << "Time: " << std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count() << " ms" << std::endl;
    return 0;
}
