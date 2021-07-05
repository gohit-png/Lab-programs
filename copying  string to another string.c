#include<stdio.h>
void main(){

    char str1[10], str2[10];
    int i;

    printf("enter the first string:\n");

    gets(str1);

    for (i = 0; str1[i] != '\0';)
    {
        str2[i] = str1[i];

        i++;
    }



    printf("\nthe second string is :\n");
    puts(str2);

    printf("the length of the string is %d",i);


}
