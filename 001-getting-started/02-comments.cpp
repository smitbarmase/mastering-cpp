#include <iostream>

int func(int a /* Not using it */, int b)
{
    return b;
}

int main()
{
    int a; // This is a single-line comment.
    int i; // This is another single-line comment/

    /*
    This is a block comment.
    */

    int c = 1;

    return 0;
}