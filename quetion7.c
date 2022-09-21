/*Write a program in C to count the total number of alphabets, digits. and special
characters in a string.*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,alpha=0,digits=0,spechar=0;
    char a[1000];
    printf("\nENTER YOUR NAME");
    fgets(a,1000,stdin);
    while(a[i]!='\0')
    {
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
        alpha++;
        else if(a[i]>='0'&&a[i]<='9')
        digits++;
        else
        spechar++;
        i++;
    }
    printf("\n Number of alphabets in your string %d",alpha);
    printf("\n Number of digits in your string %d",digits);
    printf("\n Number of spechar in your string %d",spechar);
    return 0;
}
