//program to calculate factorial of a user defined number

#include <stdio.h>

int main(){
    
    int num;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);
    printf("%d! = ", num);

    if(num>0){
    for(int i = num - 1; i > 0; i--){
        printf("%d x %d = %d \n", num, i, num*i);
        num = num*i;
        // if(i == 1) {
        //     break; // Break the loop when i reaches 1 to avoid unnecessary multiplication
        // }
    }
}
    else if (num<0)
    for(int i = num + 1; i < 0; i++){
        printf("%d x %d = %d \n", num, i, num*i);
        num = num*i;
        
    }
    return 0;
}