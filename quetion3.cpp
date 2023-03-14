/*Write a C++ program to add two complex numbers using operator overloaded by a
friend function.*/
#include<iostream>
using namespace std;
class complex 
{
    private:
    int num1;
    int num2;
    public:
    int getnum1()
    {
        return num1;
    }
        int getnum2()
    {
        return num2;
    }
    complex()
    {

    }
    complex(int a,int b)
    {
        num1=a;
        num2=b;
    }
    complex(const complex &p)
    {
        cout<<"Copy constructor called"<<endl;
        num1 = p.num1;
        num2 = p.num2;
    }
    void display()
    {
        cout<<" "<<num1<<"+"<<num2<<"i" <<endl;
    }
     friend complex operator+(complex c1,complex c2);
};
 complex operator+(complex c1,complex c2)
{
    complex temp;
    temp.num1=c1.num1+c2.num2;
    temp.num2=c1.num1+c2.num2;
    return (temp);
}

int main()
{
    complex c1(10,20);
    complex c2(30,40);
    complex c3=c1+c2;
    c1.display();
    c2.display();
    c3.display();

}