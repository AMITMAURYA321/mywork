/*10. Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)*/
#include<stdio.h>
int main()
{
    int number=2345;
    int  lastdigit,num2;
    number=number/10;
    num2=number*10;
    printf("%d",num2);
    return 0;

}