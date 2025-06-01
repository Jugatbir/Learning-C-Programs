//sum first 10 natural numbers using while loop

#include <stdio.h>

int main(){
    int i = 1, sum = 0;
    while (i<=10)
    {
        printf("Sum of first %d natural numbers is %d\n", i, sum);
        sum = sum + i;
        i++;
    }
    
    return 0;
}