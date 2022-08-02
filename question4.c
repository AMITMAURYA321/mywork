//Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int num1,num2,i, hcf=1;
    printf("enter a two number");
    scanf("%d%d",&num1,&num2);
    int min =num1<num1?num1:num2;
    for(i=1;i<=min;i++)
    {
         if((num1%i==0) && (num2%i==0))
         hcf=i;
    }
    printf(" HCF IS %d", hcf);
    return 0;
}