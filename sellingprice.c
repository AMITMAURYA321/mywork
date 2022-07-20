/* 10. Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.*/
#include<stdio.h>
int main()
{
    float costprice,sellingprice ,profit,loss;
    printf("enter cost price");
    scanf("%f",&costprice);
    printf("enter selling price");
    scanf("%f",&sellingprice);
    if(costprice<sellingprice)
    {
      profit=(sellingprice-costprice)/costprice*100;
      printf("profit percentage is %f ",profit);
    }
    else
    {
      loss=(costprice-sellingprice)/costprice*100;
      printf("loss percentage is %f ",loss);
    }
   return 0;
}   