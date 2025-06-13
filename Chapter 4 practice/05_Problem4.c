//sum first 10 natural numbers using while loop

#include <stdio.h>

int main(){
    int i = 1, sum = 0;
    while (i<=10)
    {
        sum = sum + i;
        printf("Sum of first %d natural numbers is %d\n", i, sum);
        i++;
    }
    
    return 0;
}