#include <iostream>
#include <bitset>

int main()
{
    int num = 0b0100;
    bool result = (num >> 2) & 1LL; // 1 if the 'x'th bit of 'number' is set, 0 otherwise
    std::cout << result << std::endl;

    // Using bitset
    std::bitset<4> new_num(0b0100);
    bool bit_result = new_num.test(2); // bit_val value is set to true;
    std::cout << bit_result << std::endl;
    return 0;
}