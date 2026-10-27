#include <iostream>
#include <vector>

int main() {
    {
        std::vector<int> x(10);
        for (int i = 0; i < 10;)
            x[i++] = 1;
        std::cout << "Postfix: ";
        for (int v : x) std::cout << v << " ";
        std::cout << std::endl;
    }

    {
        std::vector<int> x(10);
        for (int i = -1; i < 9;)
            x[++i] = 1;
        std::cout << "Prefix:  ";
        for (int v : x) std::cout << v << " ";
        std::cout << std::endl;
    }

    return 0;
}
