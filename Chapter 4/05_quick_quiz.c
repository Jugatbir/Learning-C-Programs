// initial loop counter is 0, but we need to print numbers from 10 to 20.

#include <stdio.h>

int main()
{
    int x = 0; // Initialize x to 10
    // while loop to print numbers from 10 to 20
    if (x < 10)
    {
        x = 10; // Set x to 10 if it is less than 10
    }
    while (x <= 20)
    {
        printf("The value of x is: %d\n", x);
        x++; // Increment x by 1
    }

    return 0;
}