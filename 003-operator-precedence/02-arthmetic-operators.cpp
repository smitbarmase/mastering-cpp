#include <iostream>

int main()
{
    // Volume of a spherical shell = 4 pi R ^ 3 - 4 pi r ^ 3
    int R = 4, r = 3;
    double pi = 3.14;
    double vol = 4.0 * pi * R * R * R / 3.0 - 4.0 * pi * r * r * r / 3.0;

    // Addition
    int a = 2 + 4 / 2;   // Equal to: 2+(4/2) result: 4
    int b = (3 + 3) / 2; // Equal to: (3+3)/2 result: 3

    // With Multiplication
    int c = 3 + 4 / 2 * 6;   // Equal to: 3+((4/2)*6) result: 15
    int d = 3 * (3 + 6) / 9; // Equal to: (3*(3+6))/9 result: 3

    // Division and Modulo
    int g = 3 - 3 % 1;         // Equal to: 3 % 1 = 0 3 - 0 = 3
    int h = 3 - (3 % 1);       // Equal to: 3 % 1 = 0 3 - 0 = 3
    int i = 3 - 3 / 1 % 3;     // Equal to: 3 / 1 = 3 3 % 3 = 0 3 - 0 = 3
    int l = 3 - (3 / 1) % 3;   // Equal to: 3 / 1 = 3 3 % 3 = 0 3 - 0 = 3
    int m = 3 - (3 / (1 % 3)); // Equal to: 1 % 3 = 1 3 / 1 = 3 3 - 3 = 0

    return 0;
}