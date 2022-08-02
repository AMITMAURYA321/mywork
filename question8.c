// Write a program to find next Prime number of a given number.
#include<stdio.h>
int main()
{
    int number,find=0, num,i;
    printf("entre a number");
    scanf("%d",&number);
    for(num=number;1;num++)
    {
    find=0;
    for(i=2;i<=num/2;i++)
    if(num%i==0)
    {
        find=1;
    }
    if(find==0)
    {
        printf("%d ",num);
        break;
        
    }
     
    }
    return 0;
}

