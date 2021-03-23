#include <iostream>

template <typename T>

T rightmostSetBitRemoved(T n)
{
    return n & (n - 1);
}

int main()
{
    int n = rightmostSetBitRemoved<int>(0b11);
    std::cout << n << std::endl; // Output = 2, as removing rightmost set bit will result in 0b10.
    return 0;
}