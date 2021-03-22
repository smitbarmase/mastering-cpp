#include <iostream>

void foo(int); // Prototype declaration of foo, seen by main.
               // Must specify return type, name, and argument list types.

int main()
{
    foo(2); // OK: foo is known, called even though its body is not yet defined.
}

void foo(int x) // Must match the prototype.
{
    // Define body of foo here.
}