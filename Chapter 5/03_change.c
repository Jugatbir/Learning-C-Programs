#include <stdio.h>

int change(int a);

int change(int a) {
    a = 77; // Misnomer
    return 0;
}

int main(){
    int b=22;
    change(b); // The value of b remains 22
    printf("b is %d", b); 


    //here, in the change function, enters the value of b, and not the address of b, so the value of b does not change
    //instead its like a copy of b is passed to the change function, and the value of b remains unchanged

    return 0;
}