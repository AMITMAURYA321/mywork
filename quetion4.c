
#include<stdio.h>
int main()
{
    int num1,i=2,x;
    printf("enter a number");
    scanf("%d",num1);
    for(i=2;i<num1;i++)
    if(num1%i==0)
    break;
    if(i==num1)
    printf("%d",num1+1);
}
