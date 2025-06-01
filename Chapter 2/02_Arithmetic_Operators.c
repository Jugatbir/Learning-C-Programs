#include <stdio.h>

int main(){
    int a, b, c;
    float d; // Declare 'd' as float to handle modulus operation
    printf("Enter two integers:\n");
    scanf("%d \n", &a);
    scanf("%d", &b);

    c = a + b; // Addition allowed
    //a + b = c;  This is not a valid operation in C

    printf("The sum of %d and %d is %d \n", a, b, c);

    //modylus is the remainder of a division operation represented by the % operator
    d = a % b; // Modulus operation

    printf("The remainder of %d and %d is %f \n", a, b, d);

//Note: Exponentiation is not directly supported in C, but you can use the pow function from the math library. More later on.
// a = b^c does not work in C, as C does not support exponentiation with the ^ operator.  

    return 0;
}