#include<stdio.h>
 void add(int *a,int *b,int *ans){

    *ans = *a + *b;
 }

 void sub(int *a,int *b,int *ans){

     *ans = *a - *b;

 }

void mul(int *a,int *b,int *ans){

     *ans = (*a) * (*b);

 }

void div(int *a,int *b,int *ans){

     *ans = (*a)/(*b);

 }

 void remainder(int *a,int *b,int *ans){

     *ans = (*a)%(*b);

 }

 int main(){

 int a,b,ans1,ans2,ans3,ans4,ans5;
 ;

 printf("enter the values of a and b\n");

 scanf("%d %d",&a,&b);

add(&a,&b,&ans1);
sub(&a,&b,&ans2);
mul(&a,&b,&ans3);
div(&a,&b,&ans4);
remainder(&a,&b,&ans5);

printf("\nadd = %d\n",ans1);
printf("sub = %d\n",ans2);
printf("mul = %d\n",ans3);
printf("div = %d\n",ans4);
printf("remainder = %d\n",ans5);



 }
