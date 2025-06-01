//while loop example in C to print numbers from 1 to 10

#include <stdio.h>

int main(){
    
    int x = 1; // Initialize x to 1
    // while loop to print numbers from 1 to 10
    while(x <10){
        printf("The value of x is: %d\n", x);
        x++; //This is same as x = x + 1; increment x by 1 (increment operator)

    }

    //we realise at x = 10, the while loop condition x < 10 is false, so the loop terminates. 
    return 0;
}