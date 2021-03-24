#include <iostream>
#include <vector>

int main()
{
    std::vector<int> my_vector(3, 1);
    auto my_iterator = my_vector.begin(); // position
    auto my_value = *my_iterator;         // value
    std::cout << my_value << std::endl;
    return 0;
}