/* Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/
#include<stdio.h>
int main()
{
    int num,num1,num2,total;
    while (1)
    {
        
    
     printf(" \n1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Exit\n\n");
     printf(" any choice number\n");
     scanf("%d",&num);
     {    
         switch(num)
      {
        case 1:
        printf("enter two numbers\n");
        scanf("%d%d",&num1,&num2);
        total=num1+num2;
        printf("Addition of two numbers %d",total);
        break;
        case 2:
        printf("enter two numbers\n");
        scanf("%d%d",&num1,&num2);
        total=num1-num2;
        printf("Subtraction of two numbers %d",total);
        break;
        case 3:
        printf("enter two numbers\n");
        scanf("%d%d",&num1,&num2);
        total=num1*num2;
        printf("Multiplication of two numbers %d",total);
        break;
        case 4:
        printf("enter two numbers\n");
        scanf("%d%d",&num1,&num2);
        total=num1%num2;
        printf("Division of two numbers %d\n",total);
        break;
        case 5:
        printf("invelid choice");
        exit(0);
        default:
        printf("invelid choice");
        
      }
 
     }
    }
}