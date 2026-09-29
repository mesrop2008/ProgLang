#include <iostream>

int main() {
    int i = 3.7;
    std::cout << "int i = 3.7;        i = " << i << "\n";

    bool flag = 10;
    std::cout << "bool flag = 10;     flag = " << flag << "\n";

    int k = true;
    std::cout << "int k = true;       k = " << k << "\n";

    int n = 3;
    if (n) std::cout << "if (n)              n != 0\n";

    int s = true + true;
    std::cout << "true + true         s = " << s << "\n";

    long long big = 5000000000LL;
    int cut = big;
    std::cout << "int cut = 5000000000LL; cut = " << cut << "\n";

    char ch = 'A' + 2;
    std::cout << "char ch = 'A' + 2;  ch = " << ch << "\n";

    while (n--) std::cout << "while (n--)         n = " << n << "\n";
    return 0;
}
