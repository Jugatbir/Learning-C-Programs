/*program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user */

#include <stdio.h>

int main(){
    float msub1, msub2, msub3;

    printf("Enter marks of subject 1 out of 100: ");
    scanf("%f", &msub1);

    printf("Enter marks of subject 2 out of 100: ");
    scanf("%f", &msub2);
    
    printf("Enter marks of subject 3 out of 100: ");
    scanf("%f", &msub3);

    float marks = msub1 + msub2 + msub3;
    float percentage = (marks / 300) * 100;

    if(msub1 && msub2 && msub3 <=33){
        printf("You have failed the exam due to less individual subject marks\n");
    } else if (percentage < 40) {
        printf("You have failed the exam due to overall percentage\n");
    } else {
        printf("You have passed the exam\n");
    }
    return 0;
}