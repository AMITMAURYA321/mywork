// Write a program to find the position of first 1 in LSB.
#include<stdio.h>
int main()
{
    int number,result,count =0;
    printf("enter a digit");
    scanf("%d",&number);
    while(number!=0)
    {
      result=number&1;
      count++;
      if(result==1)
      {
        printf("%d",count);
        break;
      }
      number=number>>1;
    }
    return 0;
}