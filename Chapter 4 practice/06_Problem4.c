//sum first 10 natural numbers using for and do while loop

#include <stdio.h>
int main(){
    
    int i = 1, sum = 0;

    // for(i = 1; i<=10; i++){
    //     sum = sum+i;
    //     printf("The sum of first %d numbers is %d\n", i, sum);

    // }

    do{
        sum = sum + i;
        printf("Sum of first %d is %d\n", i, sum);
        i++;
    }while(i <=10);
    return 0;
}
