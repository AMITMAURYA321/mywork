/*Suppose we have a list of email addresses, check whether all email addresses have
‘@’ in it. Print the odd email out.*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[5][20];
    printf("\nENTER EMAIL ENTER\n");
    for(i=0;i<5;i++)
    {
        gets(a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(strchr(a[i],'@')!=0)
        {
           printf("%s\n",a[i]);
        }

    }
}