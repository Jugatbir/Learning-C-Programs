// VERY IMPORTANT TOPIC: Increment and Decrement Operators
#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value of i is %d\n", i);

    i = i + 5; // 10
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", ++i); // 10
    printf("The value of i is %d\n", i++); // 10
    printf("The value of i is %d\n", i);   // 11

    i += 2; // Same as i = i + 2;
    // this is same as i++ but increments i by 2 instead of 1

    printf("The value of i is %d\n", i); // 13

    // i++ prints i first and then increments i (Post increment Operator)
    // ++i increments i first and then prints i (Post increment Operator)

    return 0;
}