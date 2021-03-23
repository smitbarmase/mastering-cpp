#include <iostream>
#include <bitset>

int main()
{
    int x = 0b0100;
    x ^= 1LL << 1; // This is toggle 2nd last digit. Resulting 0b0110 = int(6)
    std::cout << x << std::endl;

    // Using std::bit
    std::bitset<4> num(std::string("0100"));
    num.flip(1); // num is now 0110 = int(6)
    std::cout << (int)(num.to_ulong()) << std::endl;

    // num.flip() this flips all bits

    return 0;
}