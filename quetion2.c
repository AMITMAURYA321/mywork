// Write a recursive function to calculate sum of first N odd natural numbers.
#include<stdio.h>
int sum_odd_natural(int);
int main()
{
    int num ,total;
    printf("enter a number");
    scanf("%d",&num);
    total=sum_odd_natural(num);
    printf("%d",total);
    return 0;
}
int sum_odd_natural(int n)
{
    if(n==1)
    return 1;   
    return 2*n-1+sum_odd_natural(n-1);

}