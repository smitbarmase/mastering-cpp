#include <iostream>

int main()
{
    int a = 5;  // 0101b (0x05)
    int b = 12; // 1100b (0x0C)

    int c = a | b; // 1101b (0x0D)

    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
    // It will output c = 13

    return 0;
}