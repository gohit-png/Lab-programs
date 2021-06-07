#include<stdio.h>
int time(int h,int m);
void main()
{
    int h,m;
    printf("enter the hours");
    scanf("%d",&h);
    printf("enter the minutes");
    scanf("%d",&m);
    time(h,m);
}
int time(int h,int m)
{
   int hours,totmin,minutes;
   totmin=h*60+m;
   hours=totmin/60;
   minutes=totmin%60;
   printf("the converted time is %d:%d",hours,minutes);
   return(0);
}
