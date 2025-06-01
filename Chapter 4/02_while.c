//while loop example in C 
//while loop is used to execute a block of code repeatedly as long as a specified condition is true.

#include <stdio.h>

int main(){
    
    int x = 0;
    //while loop to print numbers Happy birthday 4 times
    while (x < 4) {
        printf("Happy birthday\n");
        x = x + 1; // increment x by 1
    }
    return 0;
}