#include<stdio.h>
#include<stdlib.h>

void main(){

    int marks[4][3] ,max_marks;

    for (int i = 0; i < 4; i++)
    {
        printf("enter the marks of student %d in all three subject with space\n",i+1);

        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&marks[i][j]);
        }

    }

    for (int j = 0; j < 3; j++)
    {
        max_marks = marks[0][j];

        for (int i = 0; i < 4; i++)
        {
            if (marks[i][j] > max_marks)
            {
                max_marks = marks[i][j];

            }


        }
         printf("highest marks obtained in sub%d is %d\n",j+1,max_marks);



    }


}

