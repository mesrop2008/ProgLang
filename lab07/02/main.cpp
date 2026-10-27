#include <iostream>

int main() {
    {
        int x=2, y=3, z=0;
        x=x+1;
        z=z+2*x+3*y;
        y=y+1;
        std::cout << "Original: x=" << x << " y=" << y << " z=" << z << std::endl;
    }

    {
        int x=2, y=3, z=0;
        x=x+1, z=z+2*x+3*y, y=y+1;
        std::cout << "Method 1 (comma): x=" << x << " y=" << y << " z=" << z << std::endl;
    }

    {
        int x=2, y=3, z=0;
        z += 2*(++x) + 3*y, y++;
        std::cout << "Method 2 (prefix ++x): x=" << x << " y=" << y << " z=" << z << std::endl;
    }

    {
        int x=2, y=3, z=0;
        z += 2*(++x) + 3*y, ++y;
        std::cout << "Method 3 (prefix both): x=" << x << " y=" << y << " z=" << z << std::endl;
    }

    {
        int x=2, y=3, z=0;
        z += 2*(++x) + 3*y++;
        std::cout << "Method 4 (mixed): x=" << x << " y=" << y << " z=" << z << std::endl;
    }

    return 0;
}
