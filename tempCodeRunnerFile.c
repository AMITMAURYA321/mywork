#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        int k='A';
        for(j=1;j<=9;j++)
       {
          if(j<=5-i||j>4+i)
          printf("%c",k++);
          else
          printf(" ");
        }
         printf("\n");
    }
    return 0;
}