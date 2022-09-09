// Write a recursive function to print first N even natural numbers.
#include<stdio.h>
void even_natural();
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    even_natural(num);
}
void even_natural(int n)
{
    if(n==0)
    return;
    even_natural(n-1);
    printf("%d ",n*2);
}