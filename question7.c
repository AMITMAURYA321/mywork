// Write a program to print all Prime numbers between two given numbers.
#include<stdio.h>
int main()
{
    int num1,num2,find,i,num;
    printf("enter a two numbers");
    scanf("%d%d",&num1,&num2);
    for(num=num1;num<=num2;num++)
    {
    find=0;
    for(i=2;i<=num/2;i++)
    if(num%i==0)
    {
        find=1;
    }
    if(find==0)
    printf("%d ",num); 
    }
    return 0;
}
