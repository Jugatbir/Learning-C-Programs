//sum of numbers occuring in table of 8

#include <stdio.h>

int main(){
    
    int sum = 0;
    for(int i = 1; i <=10; i++)
    printf("The sum of %d numbers in table of 8 is %d\n", i, sum += (8 * i)); // here += operator works same as sum = sum + (8 * i)
    return 0;
}