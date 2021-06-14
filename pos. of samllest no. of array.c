#include<stdio.h>
void main(){


int n,i,a[10],sum=0;

int small=0,pos=0;

printf("enter no of elements in array:");


scanf("%d",&n);

for(i=0;i<n;i++)

{

printf("a[%d]=",i);
scanf("%d",&a[i]);

}

small=a[0];

for(i=1;i<n;i++)

{



if( a[i] < small)

{

small=a[i];

pos=i;

}

}

printf("smallest no:%d \n",small);
printf("position is %d",pos);
}
