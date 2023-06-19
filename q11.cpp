#include <stdio.h>

int main() {
   int n;
   printf("Enter n: ");
   scanf("%d", &n);
   
   int sum = 0;
   for(int i=1; i<=n; i++) {
      sum += i*11;
   }
   
   printf("Sum of series 11+22+33+...+nn is: %d", sum);
   
   return 0;
}

