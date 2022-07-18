// Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{ 
    int num1,num2;
    printf("enter a two value\n");
    scanf("%d%d",&num1,&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("sawp value without third variable %d  & %d",num1,num2);
    return 0;

}