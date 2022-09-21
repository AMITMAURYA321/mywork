//Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
int main()
{
int i,count;
char str[300]="amitmaurya";
for(i=0;str[i];i++);
printf("%d ",i);
return 0;
}