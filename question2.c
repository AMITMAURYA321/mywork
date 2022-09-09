/* Write a function to calculate simple interest. (TSRS)*/
#include<stdio.h>
float simple_interest(float ,float ,float );
int main()
{
    float p,r,t, amount;
    printf("enter principla\n");
    scanf("%f",&p);
    printf("enter rate\n");
    scanf("%f",&r);
    printf("enter time\n");
    scanf("%f",&t);
    amount=simple_interest(p,r,t);
    printf("%f",amount);

}
float simple_interest(float principla,float rate, float time )
{
    float simpleinterest;
    simpleinterest= principla*(1+rate*time)/100;
    return simpleinterest;    
}