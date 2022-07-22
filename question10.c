// Write a program to print a table of N.
#include<stdio.h>
int main()
{
    int num,i;
    printf("enter a table number");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("\n%d x %d = %d ",num,i,i*num);
    }
    return 0;
}