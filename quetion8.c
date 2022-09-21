//Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0;
    char a[100];
    char b[100];
    printf("\nenter your name ");
    fgets(a,100,stdin);
    for(i=0;a[i]!='\0';i++)
    {
        b[j++]=a[i];
    }
    b[j++]='\0';
    printf("copy string= %s",b);
}
