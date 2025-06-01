//To make a program to find if year entered by user is a leap year or not, we can use the following code:

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }

    return 0;
}
// This program checks if the year entered by the user is a leap year or not.
// A year is a leap year if it is divisible by 4, but not divisible by 100, unless it is also divisible by 400.
