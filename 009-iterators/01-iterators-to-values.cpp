#include <iostream>
#include <vector>

int main()
{
    std::vector<int> my_vector(3, 1);
    auto my_iterator = my_vector.begin(); // position
    auto my_value = *my_iterator;         // value
    std::cout << my_value << std::endl;
    ++my_iterator;
    std::advance(my_iterator, 1);         // advance the iterator 1 position
    my_iterator = std::next(my_iterator); // returns iterator to the next element
    std::advance(my_iterator, -1);        // advance the iterator 1 position backwards
    auto dist = std::distance(my_vector.begin(), my_iterator);
    return 0;
}