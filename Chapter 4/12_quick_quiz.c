//program to print n natural numbers in reverse order
#include <stdio.h>

int main(){
    
    int n;
    printf("Enter a value:\n");
    scanf("%d", &n);

    for(n > 0; n; n--){
        printf("The value of n is %d\n", n);

    }
    return 0;
}