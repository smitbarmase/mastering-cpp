#include <iostream>
#include <bitset>

int main()
{
    int num = 0b1000;
    num |= 1LL << 2; // Should output 1100
    std::cout << std::bitset<4>(num) << std::endl;

    // Using bitset
    std::bitset<5> n(std::string("01100"));
    n.set(0);       // n is now 01101
    n.set(2);       // n is still 01101
    n.set(4, true); // n is now 11101
    return 0;
}