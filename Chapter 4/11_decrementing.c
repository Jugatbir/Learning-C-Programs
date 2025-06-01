#include <stdio.h>

int main(){
    
    for (int i = 100; i; i--)   //This loop will run until i becomes 0 which turns false.
    {
       printf("The value of i is %d\n", i);
    }
    
    return 0;
}