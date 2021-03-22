#include <iostream>

int main()
{
    int a = 2; // 0010b

    int b = a >> 1; // 0001b

    std::cout << "a = " << a << ", b = " << b << std::endl;

    return 0;
}