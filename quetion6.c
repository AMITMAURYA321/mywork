/* Write a function to calculate the factorial of a number. (TSRS)*/
#include<stdio.h>
int calculate_the_factorial(int num);
int main()
{
    int value,Factorial;
    printf("enter a number");
    scanf("%d",&value);
    Factorial=calculate_the_factorial(value);
    printf("Factorial is %d",Factorial);
}
int calculate_the_factorial(int num)
{ 
    int f=1,i;
     for(i=1;i<=num;num--)
    {
       f=f*num;
    }
     return f;

}