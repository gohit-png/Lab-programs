#include<stdio.h>
void main()
{
    int n,arr[10];

    printf("enter the number of elements: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("\narr[%d] = ",i);
        scanf("%d",&arr[i]);

    }

    printf("\n The array elements are" );

    for(int i=0;i<n;i++){

        printf("\narr[%d]=%d",i,arr[i]);

    }


}
