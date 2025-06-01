//Write a program to determine whether a character entered by the user is 
//lowercase or not

//here we will use ASCII values to determine if the character is lowercase or not
// ASCII values for lowercase letters are from 97 ('a') to 122 ('z')
//To check ASCII values, we can visit https://www.asciitable.com/

#include <stdio.h>

int main(){
    char letter;
    printf("Enter a character: ");
    scanf("%c", &letter);
    printf("The ASCII value of '%c' is %d\n", letter, letter);
    //Here we use %d instead of %c to read the ASCII value of the character 
    if(letter>=97 && letter <= 122){
        printf("The character '%c' is lowercase.\n", letter);
    } else {
        printf("The character '%c' is not lowercase.\n", letter);
    }

    return 0;
}