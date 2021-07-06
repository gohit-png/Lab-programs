
#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    char str3[100];
    int i = 0, j = 0, length;
    printf("\nFirst string: ");
    scanf("%s",&str1);
    printf("\nSecond string: ");
    scanf("%s",&str2);
    while (str1[i] != '\0')
        {
        str3[j] = str1[i];
        i++;
        j++;
    }
    i = 0;
    while (str2[i] != '\0')
    {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';
    printf("\nConcatenated string: %s", str3);
    while(str3[i] != '\0')
        i++;
    length = i;
    printf("\nThe length of the string is : %d", length);
    return 0;
}
