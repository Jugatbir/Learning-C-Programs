//Print multiplication table of 10 in reverse order

#include <stdio.h>

int main(){
    
    int a = 10;

    for(int n = 10; n>=1; n--){
        printf("%d x %d = %d\n", a, n, a * n);
    }
    return 0;
}