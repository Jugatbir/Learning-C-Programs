//Use of functions in C programming language
// 1. Library functions → Commonly required functions grouped together in a library 
// file on disk. 
// 2. User defined function → These are the functions declared and defined by the 
// user
#include <stdio.h>

// Function prototype
int sum(int, int); //here writing int isnt necessary because we specify the return type of the function in the function definition



// Function definition
int sum(int x, int y){
    // printf("The sum is %d\n", x+y);
    return x+y; //here we return the sum of x and y
    // The return statement ends the function and returns the value to the caller
    //if we were to write C = sum(a,b); here, the value of C would be equal to the sum of a and b due to the return statement
}

int main(){
    int a = 1;
    int b = 2;

    // int c = a + b;
    // printf("The sum is %d\n", c);
    int c  = sum(a,b); // Function call
    printf("%d\n", c);

    int a1 = 12;
    int b1 = 23;

    // int c1 = a1 + b1;
    // printf("The sum is %d\n", c1);
    int c1 = sum(a1,b1); // Function call
    printf("%d\n", c1);

    int a2 = 2;
    int b2 = 27;

    // int c2 = a2 + b2;
    // printf("The sum is %d\n", c2);
    int c3 = sum(a2, b2); // Function call
    printf("%d\n", c3);

    return 0;
}


/* #include <stdio.h> 
 
 
// Function prototype 
void display();      here void is the return type of the function display, which means it does not return any value.
void is generally used when we do not want to return any value from the function for example, if we just want to print something on the screen or perform some operation without returning any value.
 
int main() { 
    int a; // Variable declaration 
    display(); // Function call 
    return 0; // Return statement 
} 
 
// Function definition 
void display() { 
    printf("hi i am display\n"); // Printing the message 
} */