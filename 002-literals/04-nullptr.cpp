#include <iostream>

class Widget
{
    int i;
};

int main()
{
    Widget *p = new Widget();
    delete p;
    p = nullptr; // Set the pointer to null after deletion.
    return 0;
}
