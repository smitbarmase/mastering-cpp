#include <iostream>
#include <bitset>

int main()
{
    int num = 0b1100;
    num &= ~(1LL << 2); // Should output 1000

    std::cout << std::bitset<4>(num) << std::endl;

    // Using bitset
    std::bitset<5> n(std::string("1100"));
    n.reset(2);      // 1000
    n.set(2, false); // 1000
    return 0;
}