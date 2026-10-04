#include <bitset>
#include <climits>
#include <cstdint>
#include <iostream>

int main() {
    std::int8_t a = -99;
    std::int16_t b = -99;
    std::int32_t c = -99;
    std::cout << "1 byte:  " << std::bitset<8>(static_cast<std::uint8_t>(a)) << "\n";
    std::cout << "2 bytes: " << std::bitset<16>(static_cast<std::uint16_t>(b)) << "\n";
    std::cout << "4 bytes: " << std::bitset<32>(static_cast<std::uint32_t>(c)) << "\n";

    std::cout << std::hex << std::uppercase;
    std::cout << "-99 hex: " << static_cast<int>(static_cast<std::uint8_t>(a)) << " "
              << static_cast<std::uint16_t>(b) << " " << static_cast<std::uint32_t>(c) << "\n";
    std::cout << std::dec;

    int mx = 0x7FFFFFFF;
    int mn = -0x7FFFFFFF - 1;
    std::cout << "0x7FFFFFFF = " << mx << ", INT_MAX = " << INT_MAX << "\n";
    std::cout << "-0x7FFFFFFF - 1 = " << mn << ", INT_MIN = " << INT_MIN << "\n";
    std::cout << "(int)0x80000000 = " << static_cast<int>(0x80000000) << "\n";

    char h = '#';
    std::cout << "'#' = " << static_cast<int>(h) << " = " << std::bitset<8>(h) << "\n";
    return 0;
}
