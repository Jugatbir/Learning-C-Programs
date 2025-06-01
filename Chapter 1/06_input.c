#include<stdio.h>

int main() {
    int a;

    //&a is the address of variable a
    
    printf("Enter an integer: "); // Prompt user for input
    scanf("%d", &a); // Read an integer from user input
    printf("The value of a is %d", a); // Print the value of a
    return 0;
}