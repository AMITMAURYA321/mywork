/* WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area
& R with radius.*/

  #include <stdio.h>
  int main()
{   
    printf("Calculat Area of a circle\n\n");
    float r,A;
    printf("enter a radius");
    scanf("%f",&r);
    A=3.14*r*r;
    printf("Area of circle is %f having the radius %f",A,r);
    return 0;
}