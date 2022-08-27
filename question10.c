/* C program to find all roots of a quadratic equation using switch case*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D;
    float x,y;
    printf("enter coefficient of x^2,x and constant tream\n");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    switch(0>D)
    {
     case 1:printf("both are imaginary");
     break;
    }
    switch(0==D)
    {
       case 2: printf("both are equal");
        x=-b/(2.0*a);   
        break;
    }
    switch(0<D)
    {
     case 3: printf("roots are real and destinct");
     x=(-b+sqrt(D)/(2*a));
     y=(-b-sqrt(D)/(2*a));
     printf("\n roots are: %f,%f",x,y); 
     break;
    }
    return 0 ;
}