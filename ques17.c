/* 17. Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.*/
#include<stdio.h>
int mian()
{   int side1,side2,side3;
    printf("enter the length of the sides of a triangle");

    printf("enter a side1");
    scanf("%d",&side1);
    printf("enter a side2");
    scanf("%d",&side2);
    printf("enter a side3");
    scanf("%d",&side3);
    if((side1+side2>side3)&&(side2+side3>side1)&&(side3+side1>side2))
    printf("the triangle is valid");
    else
    printf("the triangle is not valid");
    return 0;
}