//we are making a simple C program that includes an infinite loop.
#include <stdio.h>

int main(){
    
    int x = 0;
    // Infinite loop
    while(2){ //always true condition
        printf("The value of x is: %d\n", x);
        x++; // Increment x by 1

    }
    return 0;
}