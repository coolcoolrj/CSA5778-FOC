#include <stdio.h>

int reverseDigits(int num) {
    int rev = 0;
    if (num7 < 0) {
        printf("-");
        num = -num;
    }
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main() {
    int num = 12345;
    printf("Reversed digits of %d is %d\n", num, reverseDigits(num));
    return 0;
}

