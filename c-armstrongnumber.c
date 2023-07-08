//program to check if a three digit number is armstrong or not.
#include <stdio.h>

int main() {
    int number, originalNumber, remainder, result = 0;

    printf("Enter any 3 digit integer: ");
    scanf("%d", &number);

    originalNumber = number;

    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += remainder * remainder * remainder;
        originalNumber /= 10;
    }

    if (result == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}
