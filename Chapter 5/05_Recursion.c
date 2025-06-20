// 1. Recursion is often a direct way to implement certain algorithms, but not 
// always the most direct for every algorithm. Recursion is particularly suited for 
// problems that can be divided into smaller, similar subproblems (like factorial 
// computation or tree traversal), but for some algorithms, iterative approaches 
// might be more straightforward or efficient. 
// 2. The condition in a recursive function that stops further recursion is called 
// the base case. This correction clarifies that the base case is crucial as it 
// prevents infinite recursion and ensures the function terminates correctly. 
// 3. Sometimes, due to an oversight by the programmer, a recursive function can 
// continue to run indefinitely without reaching a base case, potentially 
// causing a stack overflow or memory error. This statement highlights the risk of 
// infinite recursion and its consequences, emphasizing the importance of properly 
// defining base cases in recursive functions. 


#include <stdio.h>

int factorial(int);
    // Factorial(5) = 1 X 2 X 3 X 4 X 5
    // Factorial(4) = 1 X 2 X 3 X 4
    // Factorial(3) = 1 X 2 X 3
    // Factorial(n) = 1 x 2 X 3 X .... X n-1 X n
    //  = 1 x 2 X 3 X .... X n-1

int factorial(int n){ 
    if(n == 1 || n == 0){ // Base condition
        return 1;
    }
    // Factorial(n) = Factorial(n-1) X n
    return n * factorial(n-1);

    //here if lets say we call factorial(5), it will return 5 * factorial(4)
    //then factorial(4) will return 4 * factorial(3)
    //the function will keep calling itself with n-1 until it reaches the base condition
    //this will continue until we reach the base condition where n is 1 or 0
    
}

int main(){
    int a; //here we are declaring a variable a because we want to take input from the user
    printf("Enter a number to find its factorial: ");
    scanf("%d", &a);
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}