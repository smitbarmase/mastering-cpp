#include <iostream>

int main()
{
    // This creates an array with 5 values.const int array[] = {1, 2, 3, 4, 5};
    const int array[] = {1, 2, 3, 4, 5};

#ifdef BEFORE_CPP11
    // You can use `sizeof` to determine how many elements are in an array.
    const int *first = array;
    const int *afterLast = first + sizeof(array) / sizeof(array[0]);
    // Then you can iterate over the array by incrementing a pointer until
    // it reaches past the end of our array.
    for (const int *i = first; i < afterLast; ++i)
    {
        std::cout << *i << std::endl;
    }
#else
    // With C++11, you can let the STL compute the start and end iterators:
    for (auto i = std::begin(array); i != std::end(array); ++i)
    {
        std::cout << *i << std::endl;
    }
#endif

    return 0;
}