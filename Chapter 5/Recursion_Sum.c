//Sum of numbers till N
#include <stdio.h>

int sum(int);
int a;

int sum(int n){
    if(n == 0){
        return 0;
    }else{
        return n + sum(n-1);
    }
}
int main(){
    printf("Enter a number to find sum upto: ");
    scanf("%d", &a);
    printf("Sum of numbers from 1 to %d is: %d\n", a, sum(a));
    return 0;
}