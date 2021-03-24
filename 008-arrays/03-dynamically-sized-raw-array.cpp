#include <algorithm>
#include <iostream>

using namespace std;

auto int_from(istream &in) -> int
{
    int x;
    in >> x;
    return x;
}

auto main() -> int
{
    cout << "Sorting n integers provided by you.\\n";
    cout << "n? ";
    int const n = int_from(cin);
    int *a = new int[n]; // ← Allocation of array of n items.

    for (int i = 1; i <= n; ++i)
    {
        cout << "The #" << i << " number, please: ";
        a[i - 1] = int_from(cin);
    }
    sort(a, a + n);
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << ' ';
    }
    cout << '\\n';

    delete[] a;
}