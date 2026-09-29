#include <iostream>
int main() {
    { int a=1, b=2; int c=a+++b;  std::cout << "a+++b   -> a=" << a << " b=" << b << " c=" << c << "\n"; }
    { int a=1, b=2; int c=a++ +b; std::cout << "a++ +b  -> a=" << a << " b=" << b << " c=" << c << "\n"; }
    { int a=1, b=2; int c=a+ ++b; std::cout << "a+ ++b  -> a=" << a << " b=" << b << " c=" << c << "\n"; }
    { int a=1, b=2; int c=a + b;  std::cout << "a + b   -> a=" << a << " b=" << b << " c=" << c << "\n"; }
    return 0;
}
