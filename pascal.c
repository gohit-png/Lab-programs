#include<stdio.h>
#include<conio.h>
 int main()
{
int rows,cf=1,sp;
printf("Enter the number of rows: ");
scanf("%d", &rows);
for (int i=0;i<rows;i++)
{
for (sp=1;sp<=rows-i;sp++)
printf("  ");
for(int j=0;j<=i;j++)
{
if(j==0||i==0)
cf=1;
else
cf=cf*(i-j+1)/j;
printf("%d",cf);
}
printf("\n");
}
return 0;
}
