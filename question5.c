// Write a program to calculate sum of cubes of first N natural numbers.
#include<stdio.h>
int main()
{
    int num,i,s=0;
    printf("entre a number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        s=s+i*i*i;
    }
    printf("%d",s);
    return 0;
}