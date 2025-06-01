#include <stdio.h>

// This is basically a shorthand for if-else statements.
// It is also known as the conditional operator.

int main(){
    // condition ? expression-if-true : expression-if-false
    int a, b;
    printf("Enter your age:\n ");
    scanf("%d", &a);
    printf("Enter your friend's age:\n ");
    scanf("%d", &b);

    a>b?printf("You are elder"):printf("Friend is elder");
}