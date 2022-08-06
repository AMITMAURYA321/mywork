/*
 Write a program to draw the following patterns:
 123454321
  1234321
   12321
    121
     1
*/   
#include<stdio.h>
int main()
{
    int i,k,j;
    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=1;j<=9;j++)
       {
          if(j>=i&&j<=10-i)
           {
               printf("%d",k);
               j<5?k++:k--;
           }
          else
          printf(" ");
        }
         printf("\n");
    }
    return 0;
}