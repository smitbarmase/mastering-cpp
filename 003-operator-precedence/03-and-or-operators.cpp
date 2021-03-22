#include <iostream>

int main()
{
    bool has_domestic_license = true;
    bool has_foreign_license = true;
    int num_days = 54;

    // AND before OR

    // You can drive with a foreign license for up to 60 days.
    bool can_drive = has_domestic_license || has_foreign_license && num_days <= 60;

    // Same as adding parenthesis.
    bool can_drive = has_domestic_license || (has_foreign_license && num_days <= 60);

    return 0;
}