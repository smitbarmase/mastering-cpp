#include <iostream>
#include <bitset>

int main()
{
    // By setting it to -1
    int x = -1; // -1 == 1111 1111 ... 1111b
    std::cout << std::bitset<10>(x) << std::endl;

    // Using std::bitset
    std::bitset<10> y;
    y.set(); // Sets all bits to '1'
    std::cout << y << std::endl;

    return 0;
}