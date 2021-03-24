#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int const n_rows = 3;
    int const n_cols = 7;
    int const m[n_rows][n_cols] = // A raw array matrix.
        {
            {1, 2, 3, 4, 5, 6, 7},
            {8, 9, 10, 11, 12, 13, 14},
            {15, 16, 17, 18, 19, 20, 21}};

    for (int y = 0; y < n_rows; ++y)
    {
        for (int x = 0; x < n_cols; ++x)
        {
            cout << setw(3) << m[y][x]; // Note: do NOT use m[y,x]!
        }
        cout << '\n';
    }
    return 0;
}