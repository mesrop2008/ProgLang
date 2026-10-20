#include <iostream>
#include <cmath>
int main() {
   double x = 0;
   constexpr auto Pi = std::acos(x) * 2;
   static_assert(Pi > 3.14 && Pi < 3.15, "Pi");
   std::cout << Pi << std::endl;
   return 0;
}
