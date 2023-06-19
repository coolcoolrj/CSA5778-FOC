#include <stdio.h>

int sumDigits(int num) {
    int sum = 0;
    if (num < 0) {
        num = -num;
    }
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num = 12345;
    printf("Sum of digits of %d is %d\n", num, sumDigits(num));
    return 0;
}

