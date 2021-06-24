#include<stdio.h>
void main(){

    int n,value,arr[10];
    printf("enter the no. or elements of the array: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("\nenter the %d element of array\n",i+1);
        scanf("%d",&arr[i]);
    }

    printf("enter the value of element to be inserted: ");
    scanf("%d",&value);

    for (int i = 0; i < n; i++)
    {
        if (arr[i]>value)
        {
            for (int j = n-1; j >= i; j--)
            {
                arr[j+1]=arr[j];
            }

                arr[i]=value;
                break;


        }
    }
        printf("\nthe resulting new array is:\n");
        for (int i = 0; i < n+1; i++)
        {
            printf("%d",arr[i]);
        }


    }




