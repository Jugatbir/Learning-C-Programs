#include <stdio.h>

int main(){
    
    int a = 10; 
if (a = 11) 
   printf("I am 11"); 
else  
    printf("I am not 11");

    // Here the assignment operator '=' is used instead of the equality operator '=='.
    // This means that 'a' is assigned the value 11, which evaluates to true.
    // Therefore, the output will be "I am 11".

    //if we had used '==' instead of '=', the output would have been "I am not 11" since 'a' would still be 10.
    return 0;
}