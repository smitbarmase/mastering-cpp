#include <iostream>

int main()
{
    int a = 4;
    int c = a++ / 2;             // equal to: (a==4) 4 / 2 result: 2 ('a' incremented postfix)
    std::cout << a << std::endl; // prints 5!
    int d = ++a / 2;             // equal to: (a+1) == 6 / 2 result: 3

    int arr[4] = {1, 2, 3, 4};
    int *ptr1 = &arr[0];               // points to arr[0] which is 1
    int *ptr2 = ptr1++;                // ptr2 points to arr[0] which is still 1; ptr1 incremented
    std::cout << *ptr1++ << std::endl; // prints 2
    int e = arr[0]++;                  // receives the value of arr[0] before it is incremented
    std::cout << e << std::endl;       // prints 1
    std::cout << *ptr2 << std::endl;   // prints arr[0] which is now 2

    return 0;
}