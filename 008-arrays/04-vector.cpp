#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int int_from(std::istream &in)
{
    int x = 0;
    in >> x;
    return x;
}

int main()
{
    cout << "Sorting integers provided by you.\n";
    cout << "You can indicate EOF via F6 in Windows or Ctrl+D in Unix-land.\n";
    vector<int> a;
    while (cin)
    {
        cout << "One number, please, or indicate EOF: ";
        int const x = int_from(cin);
        if (!cin.fail())
        {
            a.push_back(x);
        } // Expands as necessary.
    }
    sort(a.begin(), a.end());

    int const n = a.size();
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
}
