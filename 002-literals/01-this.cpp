#include <iostream>

struct S
{
    int x;
    S &operator=(const S &other)
    {
        x = other.x;
        // return a reference to the object being assigned to
        return *this;
    }
};

int main()
{
    struct S s1 = {1};
    struct S s2 = {4};
    struct S s3 = {6};
    s1 = s2 = s3; // To make s1 = (s2 = s3) work, we need to return reference.
    std::cout << s1.x << " " << s2.x << " " << s3.x << std::endl;
    return 0;
}
