#include <iostream>
#include <typeinfo>

template <typename T>
void show(const char* text, T value) {
    std::cout << text << "\t= " << value << "\t" << typeid(value).name() << "\n";
}

int main() {
    show("42", 42);
    show("052", 052);
    show("0x2A", 0x2A);
    show("0X2a", 0X2a);
    show("0b101010", 0b101010);
    show("0B101010", 0B101010);
    show("1'000'000", 1'000'000);
    show("0b1010'1010", 0b1010'1010);
    show("0xFF'FF", 0xFF'FF);

    show("42u", 42u);
    show("42U", 42U);
    show("42l", 42l);
    show("42L", 42L);
    show("42ul", 42ul);
    show("42UL", 42UL);
    show("42LU", 42LU);
    show("42ll", 42ll);
    show("42LL", 42LL);
    show("42ull", 42ull);
    show("42ULL", 42ULL);
    show("42LLU", 42LLU);
    show("0x2Aull", 0x2Aull);
    show("052LL", 052LL);
    show("0b1u", 0b1u);

    show("2147483647", 2147483647);
    show("2147483648", 2147483648);
    show("0x7FFFFFFF", 0x7FFFFFFF);
    show("0x80000000", 0x80000000);
    show("0xFFFFFFFF", 0xFFFFFFFF);
    show("0x100000000", 0x100000000);
    show("9223372036854775807", 9223372036854775807);
    show("0xFFFFFFFFFFFFFFFF", 0xFFFFFFFFFFFFFFFF);

    show("-42", -42);
    show("-42u", -42u);
    show("'A'", 'A');
    return 0;
}
