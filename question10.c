/*Write a program in C to copy the elements of one array into another array.Take array
values from the user.*/
#include<stdio.h>
int main()
{
    int num1[10],num2[10],i;
    printf("enter 10 numbers");
    for(i=0;i<=9;i++)
    scanf("%d",&num1[i]);
    for(i=0;i<=9;i++)
    {
        num2[i]=num1[i];
        printf("%d ",num2[i]);
    }
    return 0;
}