#include <stdio.h>

int main()
{

    int age;
    printf("Enter your age:\n ");
    scanf("%d", &age);

    if (age >= 18){
        printf("You are an Adult\n");
    }
    else{
        printf("You are a Minor\n");
    }
    return 0;
}
