#include<stdio.h>
void main(){

    int a,b,c;
    printf("enter the values of a b c: \n");
    scanf("%d %d %d",&a,&b,&c);

    if(a<b && a<c){
        printf("the smallest no. is %d\n",a);

    }

    else if(b<c && b<a){
        printf("the samllest no. is %d\n",b);
    }
    else {
        printf("the smallest no. is %d\n",c);
    }
}
