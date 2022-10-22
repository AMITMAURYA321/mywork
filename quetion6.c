//Write a program to print the strings which are palindrome in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
    int i,len=0,flag=0;
    char str[20];
    printf("ENTER STRING");
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]!=str[len-i-1])
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
     printf("STRING IS PALINDRAM");
    else
     printf("STRING IS NOT PALINDRAM");
    return 0;
}