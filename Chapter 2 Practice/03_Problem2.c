//Write a program to check whether a number is divisible by 97 or not
#include <stdio.h>

int main(){
    // To check divisibility by 97, we can use the modulus operator where the remainder of the number when divided by 97 should be zero.
    int n, m;
    printf("Enter a number to check divisibility by 97 \n");
    scanf("%d", &n);

    // Check if the number is divisible by 97
    m = n % 97;

    printf("The remainder by dividing %d by 97 is %d \n", n, m);
    return 0;
}