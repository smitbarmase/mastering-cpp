#include <vector>
#include <iterator>
#include <iostream>
#include <sstream>

int main()
{
    // Data stream. Any number of various whitespace characters will be OK.
    std::istringstream istr("1\t 2 3 4");
    std::vector<int> v;
    // Constructing stream iterators and copying data from stream into vector.
    std::copy(
        // Iterator which will read stream data as integers.
        std::istream_iterator<int>(istr),
        // Default constructor produces end-of-stream iterator.
        std::istream_iterator<int>(),
        std::back_inserter(v));

    // Print vector contents.
    std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " -- "));
    // Will print values to standard output as integers delimeted by " -- ".

    return 0;
}