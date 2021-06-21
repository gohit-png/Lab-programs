#include<stdio.h>
void main(){

    int arr[10],n,position,value;

    printf("enter the no. of elements of the array: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("\nenter the %d element of array\n",i+1);
        scanf("%d",&arr[i]);
    }

    printf("enter the value and position of element to be inserted\n");
    scanf("%d %d",&value,&position);

    for (int i = n-1; i >= position; i--)
    {
        arr[i+1]=arr[i];

    }
    arr[position]=value;

    printf("resulting array:\n");
    for (int i = 0; i < n+1; i++)
    {
        printf("%d",arr[i]);
    }


}
