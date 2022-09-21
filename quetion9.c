//Write a C program to sort a string array in ascending order.
#include<stdio.h>
#include<stdio.h>
int main()
{
      char a[100];
      printf("enter your name");
      fgets(a,100,stdin);
      int i,j,sort=0;
     for(i=0;i<a[i];i++)
     {
        for(j=0;j<=a[i];j++)
        {
            if(a[i]<a[j])
            {
              sort=a[i];
              a[i]=a[j];
              a[j]=sort;
            }
        }

     }
     for(i=0;i<=a[i];i++)
     {

        printf("%c",a[i]);
     }
     return 0;
}


