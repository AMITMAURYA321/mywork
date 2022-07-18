/*Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.*/
#include<stdio.h>
int main()
{
    float amount,result,usd=78.23;
    printf("enter amount in INR ");
    scanf("%f",&amount);
    result=amount/usd;
    printf(" convert in USD %f=",result);
    return 0;
}