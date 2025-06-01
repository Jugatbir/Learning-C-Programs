// Do while loop in C
//  A do-while loop is similar to a while loop, but the condition is checked after the loop body has executed.
//  This means that the loop body will always execute at least once, even if the condition is false initially.

#include <stdio.h>

int main()
{

    int x = 0;
    do
    {
        printf("The value of x is: %d\n", x);
        x++; // Increment x by 1
    } while (x < 10); // The condition is checked after the loop body

    return 0;
}