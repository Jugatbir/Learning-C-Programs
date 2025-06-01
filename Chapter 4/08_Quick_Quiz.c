//Write a program to print n natural numbers using a do-while loop.  
#include <stdio.h>

int main(){
    
    int i = 1, n;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= n);
    

    return 0;
}