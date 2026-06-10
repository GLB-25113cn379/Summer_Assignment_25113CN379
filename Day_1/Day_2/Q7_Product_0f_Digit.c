#include <stdio.h>
int main() {
    int num, product=1, digit;
    printf("enter a number :");
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10;
        product *= digit;
        num /= 10;
    }
    printf("The product of digits is: %d\n", product);
    return 0;
}