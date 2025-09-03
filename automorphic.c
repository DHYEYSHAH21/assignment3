#include <stdio.h>
#include<math.h> // Needed for pow
int main() {
    int num, square, temp, digits = 0, lastDigits;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate square of the number
    square = num * num;

    // Count number of digits in the number
    temp = num;
    while(temp > 0) {
        digits++;
        temp /= 10;
    }

    // Get last 'digits' digits of the square
    lastDigits = square % (int)pow(10, digits);

    // Check if last digits of square equal the number
    if(lastDigits == num)
        printf("%d is an Automorphic number.\n", num);
    else
        printf("%d is NOT an Automorphic number.\n", num);

    return 0;
}
