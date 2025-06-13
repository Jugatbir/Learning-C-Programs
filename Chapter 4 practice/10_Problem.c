//program to print prime numbers from 1 to 1000

#include <stdio.h>

int main(){
    
    for (int i = 2; i <= 1000; i++) {
        int Prime = 1; // Assume num is prime

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                Prime = 0; // Not prime
                break;
            }
        }

        if (Prime) {
            printf("%d \n", i); // Print the prime number
        }
    }
    return 0;
}