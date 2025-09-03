#include <stdio.h>

int main() {
    int i, j;
    int count = 0;
    int isPrime;

    // Loop through numbers from 2 to 500
    for(i = 2; i <= 500; i++) {
        isPrime = 1; // Assume i is prime

        // Check if i is divisible by any number from 2 to sqrt(i)
        for(j = 2; j*j <= i; j++) {
            if(i % j == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }

        if(isPrime) {
            count++; // Increment count for each prime
        }
    }

    printf("Number of prime numbers between 1 and 500 is: %d\n", count);
    return 0;
}
