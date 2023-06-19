#include <stdio.h>

void printDigits(int num) {
    if (num == 0) {
        printf("0\n");
        return;
    }
    if (num < 0) {
        printf("-");
        num = -num;
    }
    int digits[10], i = 0;
    while (num > 0) {
        digits[i++] = num % 10;
        num /= 10;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d ", digits[j]);
    }
    printf("\n");
}

int main() {
    int num = 12345;
    printDigits(num);
    return 0;
}

