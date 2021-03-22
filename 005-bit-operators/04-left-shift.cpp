#include <iostream>

int main()
{
    int a = 1; // 0001b

    int b = a << 1; // 0010b

    std::cout << "a = " << a << ", b = " << b << std::endl;

    return 0;
}