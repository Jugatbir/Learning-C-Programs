#include <stdio.h>

int main(){
    float a = 9.0;
    int b = 2;
    float c = a/b;

    // Note: The division of two integers in C results in an integer, so we need to ensure at least one operand is a float.
    // If both a and b were integers, the result would be truncated to an integer.
    // Here, 'c' will be a float because 'a' is a float and 'b' is an int.
    int d = 6.7;
    printf("The value of a/b is %f\n", c);
    printf("The value of d is %d", d);

    // Note: The value of 'd' will be truncated to an integer because it is assigned from a float.
    // In this case, 6.7 will be truncated to 6 when assigned to 'd'. 
    
    /*Quick Quiz: int k = 3.0 /9; value of k? and why? 
Ans: 3.0/9 = 0.333. But since k is an int, it cannot store floats & value 0.33 is demoted to 
0. */
    int k = 3.0 / 9; // This will result in k being 0 because the division results in a float, which is truncated to 0 when assigned to an int.

    return 0;
}