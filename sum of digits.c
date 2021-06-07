#include <stdio.h>

void main()
{
  int n, Reminder, Sum=0;

  printf("\n please enter any number\n");
  scanf("%d", &n);

  while(n>0)
  {
     Reminder = n%10;
     Sum = Sum+ Reminder;
     n= n/10;
  }

  printf("\n sum of the digits of given number = %d", Sum);


}
