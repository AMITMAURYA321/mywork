//Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
int main()
{
    int i=0,count=0;
    char a[300];
    char x;
    printf("enter  your name\n");
    fgets(a,300,stdin);
    printf("enter a character\n");
    scanf("%c",&x);
    while (a[i]!='\0')
    { i++;
        if(a[i]==x)
        count++;
    }
    printf("count the occurrence of a given character in a given string== %d",count+1);
    return 0;
    
}