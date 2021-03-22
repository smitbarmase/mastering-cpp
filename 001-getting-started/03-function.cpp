#include <iostream>

int add_one(int i)
{
    return i + 1;
}

int add_one(int i, int j) // Function overloading.
{
    return i + j + 1;
}

int main()
{
    std::cout << add_one(1) << std::endl;    // Calls first function.
    std::cout << add_one(2, 3) << std::endl; // Calls second function.
    return 0;
}