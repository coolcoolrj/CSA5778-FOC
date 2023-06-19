#include <stdio.h>

int main() {
    int n, a=0, b=1, next;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: %d, %d, ", a, b);
    
    for(int i=3; i<=n; i++){
        next = a + b;
        printf("%d\n, ", next);
        a = b;
        b = next;
    }
    
    return 0;
}

