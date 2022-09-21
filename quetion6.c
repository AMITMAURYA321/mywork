//Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],temp=0;
    int i=0,j=strlen(a);
    printf("enter your name\n");
    fgets(a,100,stdin);
    while(i<=j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    printf("%s",a);
}
