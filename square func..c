#include<stdio.h>
#include<conio.h>
int func(int temp);

int main()
{
int num, square;

printf("Enter a number: ");
scanf("%d",&num);

square = func(num);

printf("\nSquare of a nuumber is: %d ", square);
}

int func(int temp)
{
return temp*temp;
}
