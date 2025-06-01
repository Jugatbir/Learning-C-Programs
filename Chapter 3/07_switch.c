#include <stdio.h>

int main(){
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    // switch statement is used to execute one block of code among many based on the value of a variable
    // It is a cleaner way to write multiple if-else statements when checking the same variable against different values.
    //If we hadnt used break, it would have executed all the cases after the matched case until it hits a break or the end of the switch block.
    
    switch(a){
        case 1:
            printf("You entered 1\n");
            break;
        case 2:
            printf("You entered 2\n");
            break;
        case 3:
            printf("You entered 3\n");
            break;
        case 4:
            printf("You entered 4\n");
            break;
        default:
            printf("Nothing matched");
    }
    return 0;
}