/*Write a program to check whether the given number (9) is even or odd using a bitwise
operator.*/
#include<stdio.h>
int main()
{
  int number=9;
  int result=number&1;
  if (result==1)
  printf("number is odd");
  else
  printf("number is even");
  return 0 ;
}