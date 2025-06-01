#include <stdio.h>

int main(){
    
    float c, f;
    // to convert Celsius to Fahrenheit
    printf("Enter temperature in Celsius: \n");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;
    // print the temperature in Fahrenheit
    printf("The temp in Fahrenheit is : \n %f", f);
    return 0;
}