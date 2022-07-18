/* Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.*/
#include<stdio.h>
int mian()
{
    int amount,usd;
    printf("enter rupee amount");
    scanf("%d",&amount);
    usd=amount*76.23;
    printf("covert in usd = %d",usd);
    return 0;

}
