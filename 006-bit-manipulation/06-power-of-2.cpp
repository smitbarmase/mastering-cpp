#include <iostream>

int main()
{
    int n = 64;
    bool power_of_2 = n && !(n & (n - 1));
    std::cout << power_of_2 << std::endl;
    return 0;
}