#include <stdio.h>
#include <math.h>

int main() {
   int n;
   printf("Enter n: ");
   scanf("%d", &n);
   
   int sum = 0;
   for(int i=1; i<=n; i++) {
      sum += pow(i, 3);
   }
   
   printf("Sum of cubes of numbers from 1 to n is: %d", sum);
   
   return 0;
}

