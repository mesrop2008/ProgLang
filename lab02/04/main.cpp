#include <iostream>

struct Table {
    int data[5] = {10, 20, 30, 40, 50};

    int operator()(int i, int j) { return data[i] + data[j]; }
    int& operator[](int i)       { return data[i]; }
};

int add(int x, int y) { return x + y; }

int main() {
    Table t;

    std::cout << "t(1,2)   = " << t(1, 2) << "\n";
    std::cout << "t[3]     = " << t[3]    << "\n";
    t[3] = 99;
    std::cout << "t[3]     = " << t[3]    << "\n";

    std::cout << "add(2,3) = " << add(2, 3) << "\n";

    int arr[3] = {1, 2, 3};
    std::cout << "arr[1]   = " << arr[1] << "\n";

    int a = 2, b = 3, c = 4;
    std::cout << "(a+b)*c  = " << (a + b) * c << "\n";
    if ((a < b)) std::cout << "if (...)  - NE operator\n";

    return 0;
}
