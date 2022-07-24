// Write a program to calculate sum of first N even natural numbers.
#include<stdio.h>
int main()
{
    int num,i,s=0;
    printf("entera  number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        s=s+i*2;
    }
    printf("%d",s);
    return 0;
}