/*Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit)*/
#include<stdio.h>
#include<string.h>
void alphanumeric(char b[]);
int main()
{
    char a[100];
    printf("ENTER STRING\n");
    gets(a);
    alphanumeric(a);
}
void alphanumeric(char b[])
{
    int i,D=0,A=0;
    for(i=0;b[i];i++)
    {
        if(b[i]>='a'&&b[i]<='z' || b[i]>='A'&& b[i]<='Z')

          A=1;

         if(b[i]>='0'&&b[i]<='9')

          D=1;
    }
         if(A==1&&D==1)
         printf("ALPHANUMERIC STRING");
         else
         printf("NOT ALPHANUMERIC STRING");
}
