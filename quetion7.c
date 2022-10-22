//Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],str2[20];
    printf("ENTER STRING: ");
    gets(str);
    strcpy(str2,str);
    strrev(str2);
    if(strcmp(str,str2)==0)
    printf("STRING IS PALINDROME");
    else
        printf("STRING IS NOT PALINDROME");

    return 0;
}
