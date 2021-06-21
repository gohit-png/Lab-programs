#include <stdio.h>
int main()
 {
   int n ;

   printf("enter the number of odds of which sum is to be detrermined: ");

   scanf("%d",&n);

   int sum = 0;

   for (int i = 1; i <= n; i++){

      sum += (2*i - 1) * (2*i - 1);

      }

   printf("The sum of square of first %d odd numbers is %d",n, sum);

   return 0;
}
