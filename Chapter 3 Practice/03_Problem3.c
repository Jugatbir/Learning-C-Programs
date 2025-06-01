/* Calculate income tax paid by an employee to the government as per the slabs 
mentioned below: 
                Income Slab                       Tax  
                2.5 – 5.0L                         5% 
                5.0L - 10.0L                       20% 
                Above 10.0L                        30% 
Note that there is no tax below 2.5L. Take income amount as an input from the user  */

#include <stdio.h>

int main(){
    
    float income, taxpercent, tax;

    printf("Enter your income in Lakhs: ");
    scanf("%f", &income);

    
    if(income >=2.5 && income <= 5.0){
        taxpercent = 5;
    } else if(income > 5.0 && income <= 10.0){
        taxpercent = 20;
    } else if(income > 10.0){
        taxpercent = 30;
    } else {
        taxpercent = 0; // No tax for income below 2.5L
    }

    tax = income * 100000 * (taxpercent/100); // Convert income to actual amount in rupees

    printf("Your income tax is: %f\n", tax);
    return 0;
}