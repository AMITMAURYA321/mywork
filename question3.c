/*Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.*/
#include<stdio.h>
int main()
{
    int num[10],i,even=0,odd=0;
    printf("enter 10 numbers\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]%2==0)
        even=even+num[i];
        else
        odd=odd+num[i];
    }
    printf("sum of even number %d\n",even);
    printf("sum of odd number%d ",odd);;
    
}