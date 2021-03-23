#include <iostream>

int main()
{
    // Naive way
    unsigned value = 1234;
    unsigned bits = 0; // Accumulates the total number of bits set in `n`
    for (bits = 0; value; value >>= 1)
        bits += value & 1;
    std::cout << bits << std::endl;

    // Based on remove rightmost set bit
    value = 1234;
    bits = 0; // Accumulates the total number of bits set in `n`
    for (; value; ++bits)
        value &= value - 1;
    std::cout << bits << std::endl;

    // Using builtin function
    std::cout << __builtin_popcount(1234) << std::endl;

    return 0;
}