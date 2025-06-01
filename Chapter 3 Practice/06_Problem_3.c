//Program to determine the greatest out of 4 numbers entered by the user
#include <stdio.h>

int main(){
    
    int num1, num2, num3, num4;
    printf("Enter four numbers:\n");
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);
    printf("Number 3: ");
    scanf("%d", &num3);
    printf("Number 4: ");
    scanf("%d", &num4);

    int big;
    if(num1 >= num2 && num1 >= num3 && num1 >= num4){
        big = num1;
    } else if(num2 >= num1 && num2 >= num3 && num2 >= num4){
        big = num2;
    } else if(num3 >= num1 && num3 >= num2 && num3 >= num4){
        big = num3;
    } else {
        big = num4;
    }

    printf("The greatest number out of the given numbers is %d\n", big);
    return 0;
}
