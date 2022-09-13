/*Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.*/
#include<stdio.h>
int main()
{
    int num[10],i;
    printf("enter a 10 numbers\n");
    for(i=0;i<=9;i++)
    scanf("%d",&num[i]);
    for(i=9;i>=0;i--)
    {
        printf("%d ",num[i]);
    } 
    
    return 0;
}