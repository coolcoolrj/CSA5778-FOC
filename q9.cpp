#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum += i * i;
    }

    printf("Sum of the series 12 + 22 + 32 + 42 + ... + %d^2 = %d", n, sum);

    return 0;
}

