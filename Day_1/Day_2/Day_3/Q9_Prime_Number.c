#include <stdio.h>
int main() {
    int n, i, flag = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 1) {
        flag = 0; // 0 and 1 are not prime numbers
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                flag = 0; // n is divisible by a number other than 1 and itself
                break;
            }
        }
    }

    if (flag) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}