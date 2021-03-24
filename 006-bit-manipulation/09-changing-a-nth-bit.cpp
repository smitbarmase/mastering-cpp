#include <iostream>
#include <bitset>

int main()
{
    int num = 0b1100;
    // Bit n will be set if x is 1 and cleared if x is 0.
    int x = 0;
    int n = 2;
    num ^= (-x ^ num) & (1LL << n); // 1000

    std::cout << std::bitset<4>(num) << std::endl;

    // Using bitset
    std::bitset<5> num2(std::string("1100"));
    num2.set(2, false); // 1000
    return 0;
}