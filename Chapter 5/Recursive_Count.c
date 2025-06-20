//print nos till N
#include <stdio.h>

int count(int);
int a;
    
    
int count(int n){
    if(n > a){
        return 0;
    }else{
        printf("%d\n", n);
    }
    
    count(n + 1);
}
int main() {
    printf("Enter a num to count upto: ");
    scanf("%d", &a);
    count(1);
    return 0;
}