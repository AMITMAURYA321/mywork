//Write a function to find the repeated character in a given string.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[30],freq[150]={0};
    printf("\nENTER STRING\n");
    gets(a);
    int i;
    while(a[i]!='\0')
    {
        freq[a[i++]]++;
    }
    for(i=0;i<150;i++)
    {
        if(freq[i]!=0)
            printf("%c ==>%d\n",i,freq[i]);
    }

}
