//program to calculate simple interest for a set of values representing principal, number of years and rate of interest.  
 #include <stdio.h>

 int main(){
    float p, r, t, si;

    // to calculate simple interest
    printf("Enter principle amount: ");
    scanf("%f", &p);

    printf("Enter rate of interest: ");
    scanf("%f", &r);

    printf("Enter time in years: ");
    scanf("%f", &t);

    si = (p * r * t) / 100;
    // print the simple interest

    printf("The Simple Interest is: %f", si);
    return 0;

 }