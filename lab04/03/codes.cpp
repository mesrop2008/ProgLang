#include <iostream>

int main() {
    char a = 'a';
    std::cout << "'a' = " << (int)a << "\n";
    std::cout << "a + 10 = " << a + 10 << "\n";
    a = a + 10;
    std::cout << "a = '" << a << "' = " << (int)a << "\n";
    std::cout << "a + 250 = " << a + 250 << "\n";
    a = a + 250;
    std::cout << "a = '" << a << "' = " << (int)a << "\n";
    return 0;
}
