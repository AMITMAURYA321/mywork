/*Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==*/
#include<iostream>
using namespace std;
class Complex
{
    private:
    int num1,num2;
    public:
    void input()
    {
        cout<<"enter two complex number"<<endl;
        cin>>num1>>num2;
    }
    void display()
    {
        cout<<num1<<","<<num2<<"i"<<"\n";
    }
    Complex operator-(Complex A)
    {
      Complex divid;
      divid.num1=num1-A.num1;
      divid.num2=num2-A.num2;
      return (divid);
    }
    Complex operator*(Complex M)
    {
        Complex mul;
        mul.num1=num1*M.num1;
        mul.num2=num2*M.num2;
        return (mul);
    }
    Complex operator==(Complex AS)
    {
        Complex ass;
        ass.num1=num1==AS.num1;
        ass.num2=num2==AS.num2;
        if(num1==num2)
        cout<<"eqal";
        else
        cout<<"not equal";
        return ();
    }
    friend Complex operator+(Complex c1,Complex c2);
};
Complex operator+(Complex c1,Complex c2)
{
    Complex temp;
    temp.num1=c1.num1+c2.num2;
    temp.num2=c1.num1+c2.num2;
    return (temp);
}
int main()
{
   Complex c1,c2,sum,divid,multi,assingment;
   c1.input();
   c2.input();
   sum=c1+c2;
   cout<<"add to complex number =";
   sum.display();
   cout<<"\n";
   divid=c1-c2;
   cout<<"divid complex two value =";
   divid.display();
   cout<<"\n";
   cout<<"multipli two complex value= ";
   multi=c1*c2;
   multi.display();
   cout<<"\n";
   assingment=c1==c2;
   cout<<"equal  two complex value= "<<endl;
   assingment.display();
   return 0;
}
