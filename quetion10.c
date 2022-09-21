//Write a program in C to Find the Frequency of Characters.
#include<stdio.h>
#include<string.h>
int main()
{
    int i=0;
    char a[100];
    int fer[150]={0};
    printf("\nenter name");
    fgets(a,100,stdin);
    while(a[i]!='\0')
    {
        fer[a[i]]++;
        i++;
    }

    for(i=0;i<150;i++)
    {
        if(fer[i] !=0)
        printf("%c===>%d\n ",i,fer[i]);
    }
    return 0;
}