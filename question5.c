/*Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.*/
#include<stdio.h>
int main()
{
    int num[10],i,min;
    printf("enter a 10 number");
    for(i=0;i<=9;i++)
    scanf("%d",&num[i]);
    for(i=0;i<=9;i++)
    {
    if(min>num[i])
    min=num[i];
    }
    printf("minmum number %d",min);
}
