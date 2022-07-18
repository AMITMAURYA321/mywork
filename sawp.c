// Write a program to swap values of two int variables.
#include<stdio.h>
int main()
{ 
     int a,b,c;
    printf("enter two value\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("swap value %d %d",a,b);
    return 0;
}