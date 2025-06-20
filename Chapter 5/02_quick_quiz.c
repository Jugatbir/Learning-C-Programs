//Program with three functions to print Good Morning,
//Good Afternoon, and Good Evening when main function is called as 1, 2 and then 3 respectively.

#include <stdio.h>

void goodMorning();
void goodAfternoon();
void goodEvening();
//we need function prototypes to declare the functions before they are used in main function
//we can not declare functions directly in main function because they need to be defined before they are called

void goodMorning(){
    printf("Good Morning!\n");
}
void goodAfternoon(){
    printf("Good Afternoon!\n");
}
void goodEvening(){
    printf("Good Evening!\n");
}


int main(){
    goodMorning();
    goodAfternoon();
    goodEvening();
    return 0;
}