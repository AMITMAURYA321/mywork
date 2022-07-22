// Write a program to print the first N even natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int num,i;
    printf("ENTER A NUMBER");
    scanf("%d",&num);
    for(i=1;i<=num;num--)
    {
        printf("\n%d",num*2);
    }
   return 0;
}