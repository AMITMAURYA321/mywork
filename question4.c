/* 4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit */
#include<stdio.h>
int main()
{  while (1)
 {
    printf("#########################################\n\n");
    int side1,side2,side3,choice;
    printf("1-check to isosceles triangle\n");
    printf("2-check to right angled triangle\n");
    printf("3-check to equilateral triangle\n");    
    printf("4-Exit\n\n");
    printf("enter a choice\n\n");
    scanf("%d",&choice);
    printf("enter three side\n");
    scanf("%d%d%d",&side1,&side2,&side3);
    
 
        switch (choice)
   {
      case 1:
      if(side1==side2||side2==side3||side3==side1)
      printf("this is isosceles triangle\n");
      else
      printf("this is not isosceles triangle\n");
      break;
      case 2:
      if(side1*side1==side2*side2+side3*side3 || side2*side2==side3*side3+side1*side1||side3*side3==side1*side1+side2*side2)
      printf(" this right angled triangle\n");
      else
      printf("this not right angled triangle\n");
      break;
      case 3:
      if((side1==side2)&&(side2==side3))
      printf(" equilateral triangle\n");
      else
      printf("this is not  equilateral triangle\n");
      break;
      case 4:
      default:
      printf("invalid choice\n");
    }
    
 }

    
 
}