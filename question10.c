/* Write a function to check whether a given number contains a given digit or not.
(TSRS)*/
#include<stdio.h>
int contains(int, int);
int main()
{
    int num1,digit;
    printf("Enter a number\n");
    scanf("%d",&num1);
    printf("Enter a digits");
    scanf("%d",&digit);
    printf("%d",contains(num1,digit));
    return 0;
}
int contains(int n, int d)
{
   int i,remnder;
   for(i=1;i<=n;n++)
   remnder=n%10;
   if(remnder==d)
   {
    return 0;   
   }
   return 1;
}