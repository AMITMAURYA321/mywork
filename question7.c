/* Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)*/
#include<stdio.h>
int Factorial(int);
int combination(int,int);
int main()
{
   
    int value,selected;
    printf("enter a n vaalue\n");
    scanf("%d",&value);
    printf("selected at a time\n");
    scanf("%d",&selected);
    printf("%d",combination(value,selected));  
    return 0;  
}

int Factorial(int n)
{
    int i,Factorial=1;
    for(i=1;i<=n;n--)
    Factorial=Factorial*n;
    return Factorial;
}
int combination(int n,int r)
{
    return Factorial(n)/(Factorial(r)*Factorial(n-r));  
}