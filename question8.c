/* Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots8*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D;
    float x,y;
    printf("enter coefficient of x^2 x and costanat tream");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>0)
    printf("both are roots imaginary");
    if(D==0)
    {
        printf("both are equal");
        x=-b/(2.0*a);
        printf("root is %f",x);
    }
    if(D>0)
    {
        printf("roots are real and destinct");
        x=(-b+sqrt(D))/(2*a);
        y=(-b-sqrt(D))/(2*a);
        printf("\n roots are : %f,%f",x,y);
    }
}