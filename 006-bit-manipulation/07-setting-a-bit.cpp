#include <iostream>
#include <bitset>

int main()
{
    int num = 0b1000;
    num |= 1LL << 2; // Should output 1100
    std::cout << std::bitset<4>(num) << std::endl;
    return 0;
}