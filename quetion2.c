//Write a function to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char rev[100];
    printf("\nenter your name AMIT");
    fgets(rev,100,stdin);
    printf("%s",strrev(rev));
    return 0;
}

// without using function;
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i,l,cha;
    printf("\nENTER A STRING");
    fgets(a,20,stdin);
    for(l=0;a[l];l++);
    for(i=0;i<=l/2;i++)
    {
        cha=a[i];
        a[i]=a[l-1-i];
        a[l-1-i]=cha;
    }
    printf("REVERSE STRING IS %s ",a);
}*/


