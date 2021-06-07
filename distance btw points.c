#include<stdio.h>
void main()
{
      float x1,x2,y1,y2,d;
     printf("enter the coordinates of two points first x and then y\n");
     scanf("%f %f %f %f",&x1,&x2,&y1,&y2);

     d=sqrt(pow(x1-x2,2) + pow(y1-y2,2));

     printf("the distance between the points is %f\n",d);
}
