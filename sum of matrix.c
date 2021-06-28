#include<stdio.h>
#include<stdlib.h>

void main(){

    int rows1,col1,rows2,col2,row_sum,col_sum;

    int mat1[5][5], mat2[5][5], sum[5][5];
     printf("enter the no. of rows and column in the first matrix:\n");
     scanf("%d %d",&rows1,&col1);

     printf("enter the no. of rows and columns of second matrix\n");
     scanf("%d %d",&rows2,&col2);

     if (rows1 != rows2 || col1 != col2)
     {
         printf("the rows and columns of both the matrices should be same\n");
         exit(0);
     }

     row_sum=rows1;
     col_sum=col1;

     printf("enter the elements of first matrix\n");

     for (int i = 0; i < rows1; i++)
     {
         for (int j = 0; j < col1; j++)
         {
             scanf("%d",&mat1[i][j]);
         }

         }

         printf("enter the elements of second matrix\n");

        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                scanf("%d",&mat2[i][j]);
            }

        }


        for (int i = 0; i < row_sum; i++)
        {
            for (int j = 0; j < col_sum; j++)
            {
                sum[i][j] = mat1[i][j] + mat2[i][j];

            }

        }

        printf("Sum matrix of entered matrices is: \n");

        for (int i = 0; i < row_sum; i++)
        {
        printf("\n");
        for (int j = 0; j < col_sum; j++)

        printf("%d\t", sum[i][j]);

        }
        return 0;
        }

