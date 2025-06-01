#include <stdio.h>
int main()
{
    // int a = 10; is same as the one below // This is a valid declaration and initialization
    int a;
    a = 10;

    // float b = 5.5; is same as below // This is a valid declaration and initialization
    float b;
    b = 5.5; 

    char c = 'A'; // This is a valid declaration and initialization
    
    // if u wanna write a multi line comment we use /* comment */ syntax

    printf("The value of a is %d\n", a); // Print the value of a
    printf("The value of b is %f\n", b); // Print the value of b
    printf("The value of c is %c\n", c); // Print the value of c

    // We use %d for integers, %f for floats, and %c for characters
    // We use \n to print a new line
    return 0;
} 