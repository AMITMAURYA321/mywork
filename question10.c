// Write a program to print all Armstrong numbers under 1000.
#include<stdio.h>
int main()
{
    int num,rem,add,i;
    printf("all Armstrong numbers under 1000\n");
    for(i=1;i<=1000;i++)
    { 
      add=0;
      num=i;
      while (num!=0)
      {
        rem=num%10;
        add=(rem*rem*rem)+add;
        num=num/10;
      }
      if(add==i)
      printf("%d\n",i);
    }
      return 0;
   
}
    