#include <iostream>

int main()
{
    int a = 5; // 0101b (0x05)
    int b = 9; // 1001b (0x09)

    int c = a ^ b; // 1100b (0x0C)

    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
    // Output will be c = 12

    return 0;
}