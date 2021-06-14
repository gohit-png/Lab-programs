#include<stdio.h>
void main()
{
    int m,n;
    printf("enter the values of m and n: ");
    scanf("%d %d",&m,&n);

    for (int i = m; i <= n; i++)
    {
        if (i%2==0)
        {
            printf("%d is even\n",i);
            }

           else {

            printf("%d is odd\n", i);
           }


    }

}
