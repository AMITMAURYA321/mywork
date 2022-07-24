//  Write a program to calculate LCM of two numbers
#include<stdio.h>
int main()
{
    int num1,num2,i;
    printf("enter a two number");
    scanf("%d %d",&num1,&num2);
    for(i=1;i<num1*num2;i++)
    if((i%num1==0)&&(i%num2==0))
    {
        break;
    }
    printf("LCM  %d ==>",i);
}