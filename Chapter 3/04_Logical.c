#include <stdio.h>

int main(){
    int a=1; int b=1; // 1 is true, 0 is false
    printf("The value of a and b is %d\n", a&&b);   // logical AND
    printf("The value of a or b is %d\n", a||b);    // logical OR
    printf("The value of not(a) is %d\n", !a);      // logical NOT

    if(a && b){
        printf("both are true\n");
    }
    // is same as writing ....
    if(a){
        if(b){
            printf("both are true");
        }
    }

    if(a || b){
        printf("at least one is true\n");
    }
    return 0;
}