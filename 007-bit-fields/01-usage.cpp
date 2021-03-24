#include <iostream>

struct Date
{
    unsigned int Year : 13; // 2^13 = 8192, enough for "year" representation for long time
    unsigned int Month : 4; // 2^4 = 16, enough to represent 1-12 month values.
    unsigned int Day : 5;   // 2^5 = 32
};

int main()
{
    Date d;
    d.Year = 2016;
    d.Month = 7;
    d.Day = 22;
    std::cout << "Year:" << d.Year << std::endl;
    std::cout << "Month:" << d.Month << std::endl;
    std::cout << "Day:" << d.Day << std::endl;
    return 0;
}