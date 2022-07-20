/*Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.*/
#include<stdio.h>
int main()
{
    int side1,side2,side3;
    printf("enter length of the sides of a triangle\n\n");

    printf("enter a side 1\n");
    scanf("%d",&side1);
    printf("enter a side 2\n");
    scanf("%d",&side2);
    printf("enter a side 3\n");
    scanf("%d",&side3);
    if((side1+side2>side3)&&(side2+side3>side1)&&(side3+side1>side2))
    printf("the triangle is valid ");
    else
    printf("the triangle is not valid ");
    return 0;
}