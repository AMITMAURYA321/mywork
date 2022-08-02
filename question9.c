/*Write a program to check whether a given number is an Armstrong number
or not*/
#include<stdio.h>
int main()
{
    int num,rem,add=0,c;
    printf("entre a number");
    scanf("%d",&num);
    c=num;
    while (num>0)
    {
      rem=num%10;
      add=(rem*rem*rem)+add;
      num=num/10;
    }
    if(c==add)
    printf("given number is an Armstrong number");
    else
    printf("given number is not an Armstrong number");
    
}