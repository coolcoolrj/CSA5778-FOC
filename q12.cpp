#include <stdio.h>
#include <math.h>

int main() {
   int n;
   printf("Enter n: ");
   scanf("%d", &n);
   
   int sum = 0;
   for(int i=1; i<=n; i++) {
      if(i%2 != 0) {
         sum += pow(i, 2);
      }
   }
   
   printf("Sum of squares of odd numbers is: %d", sum);
   
   return 0;
}

