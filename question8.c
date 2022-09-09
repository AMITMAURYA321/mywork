/*Write a function to print PASCAL Triangle. (TSRN)*/
#include<stdio.h>
int factorial(int);
int combination(int,int);
void pascal(int);
int main()
{  
    int num1;
    printf("enter a number");
    scanf("%d",&num1);
    pascal(num1);
    return 0;    
}
int factorial(int n)
{
    int i,factorial=1;
    for(i=1;i<=n;i++)
    factorial=factorial*i;
    return factorial;
}
int combination(int n,int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}
void pascal(int n)
{
    
        int i,j;
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=i;j++)
            {
                printf("%d ",combination(i,j));
            }
            printf("\n");
        }
       

}