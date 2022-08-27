/* Program to convert a positive number into a negative number and negative
   number into a positive number using a switch statement. */

 #include<stdio.h>
 int main()
 {
    int x;
    printf("enter a number");
    scanf("%d",&x);
    switch (0<x)
    {
     case 1:printf("%d",-x);
        break;
     case 0:printf("%d",-x);
        break;
    }
    return 0;
 }