#include<stdio.h>
void main(){

    int n,position,arr[10];

    printf("enter the no. of elements of array: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("\nenter the %d element of array\n",i+1);
        scanf("%d",&arr[i]);
    }

    printf("enter the position of element to be deleted: ");
    scanf("%d",&position);

    for ( int i = position; i < n-1; i++)
    {
        arr[i]=arr[i+1];

    }
    printf("\nresultant array is:\n");
    for (int i = 0; i < n-1; i++)
    {
        printf("%d",arr[i]);
    }

}


