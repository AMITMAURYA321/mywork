/* Write a function to print first N natural numbers (TSRN)*/
#include<stdio.h>
int natural_number(int num);
int main()
{
   int num1;
   printf("Enter a value\n");
   scanf("%d",&num1);
   natural_number(num1);
}
int natural_number(int num)
{
    int i;
    for(i=1;i<=num;i++)
    {
        printf("%d\n",i);
    }
}