// Takes all of something and inserts it in your file where the directive was.

#include <iostream> // This line adds the functions and objects that let you use the standard input and output.

#if !defined(COUNT)
#define COUNT 5
#endif

int main()
{
    std::cout << COUNT << std::endl;
    return 0;
}
