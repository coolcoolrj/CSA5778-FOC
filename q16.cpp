#include <stdio.h>

int main() {
   int n, num;
   float sum = 0.0, avg;
   
   printf("Enter the value of n: ");
   scanf("%d", &n);
   
   printf("Enter %d numbers: ", n);
   for(int i=0; i<n; i++) {
      scanf("%d", &num);
      sum += num;
   }
   
   avg = sum / n;
   
   printf("Sum = %.2f\n", sum);
   printf("Average = %.2f", avg);
   
   return 0;
}

