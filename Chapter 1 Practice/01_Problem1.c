// To find the area of a rectangle
#include <stdio.h>

int main()
{
    // we need length and breadth of the rectangle as inputs from user
    int length, breadth, area;

    printf("Enter the length of the rectangle: \n");
    scanf("%d", &length);

    printf("Enter the breadth of the rectangle: \n");
    scanf("%d", &breadth);
    // calculate the area of the rectangle

    area = length * breadth;
    // print the area of the rectangle
    printf("The area of the rectangle you asked for is \n %d", area);
}