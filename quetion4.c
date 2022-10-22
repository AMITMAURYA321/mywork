//Write a program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag=0;
    char a[5][20],t[20];
    printf("\nENTER STRING\n");
    for(i=0;i<5;i++)
    {
        gets(a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(strcmp(a[i],"india")==0)
        {
           printf("string found");
           flag=1;
           break;
        }
        
    }
   if(flag==0)
   {
    printf("string not found");
   }
   return 0;
}