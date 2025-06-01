#include <stdio.h>

int main()
{
    // to find the area of a circle

    float radius, area, cyl, height, volume;
    // we need radius of the circle as input from user
    printf("Enter radius: \n");
    scanf("%f", &radius);

    area = 3.141592653 * radius * radius;
    // print the area of the circle
    printf("The area of circle is: %f \n", area);

    // calculate the area of a cylinder

    printf("Give height of Cylinder of same radius: \n");
    scanf("%f", &height);

    cyl = 2 * 3.141592653 * radius * height;
    volume = 3.141592653 * radius * radius * height;

    // print the area of the cylinder
    printf("The area of the cylinder is: %f \n", cyl);

    // print the volume of the cylinder
    printf("The Volume of the cylinder is: %f", volume);
    return 0;
}