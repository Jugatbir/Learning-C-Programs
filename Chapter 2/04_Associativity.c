/*Basically, 

OPERATOR PRECEDENCE  IN C  
Have a look at the below statement: 
3*x – 8*y is (3x)-(8y) or 3(x-8y)? 

In C language simple mathematical rules like BODMAS, no longer apply. 

The answer to the above questions is provided by operator precedence & associativity. 
OPERATOR PRECEDENCE  
The following table lists the operator priority in C  
        Priority                  Operators 
            1st                     * / % 
            2nd                      + -  
            3rd                       = 
 Operators of higher priority are evaluated first in the absence of parenthesis. 
OPERATOR ASSOCIATIVITY  
When operators of equal priority are present in an expression, the tie is taken care of by 
associativity. 
     x*y/z → (x*y)/z 
     x/y*z → (x/y)*z 
*, / follows left to right associativity 

Pro Tip: Always use parenthesis in case of confusion 




*/#include <stdio.h>

int main(){
    int a = 3;
    int b = 6;
    int c = 9;

    printf("The value is %d\n", a*b/c + 7);
    printf("The value is %d", 3*b/2*c + 7*a);
    // 3*b/2*c + 7*a
    // 3*b/2*c + 21
    // 18/2*c + 21
    // 9*c + 21
    // 81 + 21
    // 102
    return 0;
}