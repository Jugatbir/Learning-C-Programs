//Explain evaluation of the following expression: 3*x / y - z + k
#include <stdio.h>

int main(){
    
    // The expression 3*x / y - z + k is evaluated based on operator precedence and associativity rules in C.
    int x = 2, y = 3, z = 3, k = 1;

    // First, the multiplication and division operations are performed from left to right.
    int result = 3 * x / y - z + k;
    
    printf("The result of expression 3*x / y - z + k is: %d\n", result);
    return 0;
}