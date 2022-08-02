/*Write a program to check whether two given numbers are co-prime
numbers or not*/
#include<stdio.h>
int main()
{
    int num1,num2,i, hcf=1;
    printf("enter a two number");
    scanf("%d%d",&num1,&num2);
    int min =num1<num2?num1:num2;
    for(i=1;i<=min;i++)
    {
         if((num1%i==0) && (num2%i==0))
         hcf=i;
    }
    if(hcf==1)
    printf("%d and %d co-prime number",num1,num2);
    else
    {
        printf("%d and %d not co-prime number",num1,num2);
    }
    return 0;
}