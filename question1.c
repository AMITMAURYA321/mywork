/*Write a function to calculate the area of a circle. (TSRS)*/
#include<stdio.h>
float area__of__a__circle(float);
int main()
{
    float h,b;
    printf("enter a value\n");
    scanf("%f",&h);
    b=area__of__a__circle(h);
    printf("%f",b);
}
float area__of__a__circle(float r)
{
        float area;
        area=3.14*r*r;
        return area;         
}

