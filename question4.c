/* Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.*/
#include<stdio.h>
int main()
{
    int num[10],i,max=0;
    printf("enter a 10 numbers\n");
    for(i=0;i<=9;i++)
    scanf("%d",&num[i]);
    for(i=0;i<=9;i++)
    {
        if(max<num[i])
        max=num[i];
    }
    printf("%d maxium number\n",max);

}