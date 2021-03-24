#include <iostream>
#include <bitset>

int main()
{
    char op1 = 'a';  // 01100001 = a
    int mask = 0xDF; // 11011111
    printf("a (AND) mask = A\n");
    printf("%c & 0xDF = %c\n", op1, op1 & mask); // 01000001 = A
    return 0;
}