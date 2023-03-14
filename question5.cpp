/*Consider following class Numbers
class Numbers
{
int x,y,z;
public:
// methods
};
Overload the operator unary minus (-) to negate the numbers.*/
#include<iostream>
using namespace std;
class Number
{
    private:
    int x,y,z;
    public:
    void input()
    {
      cout<<"\nenter numnbers";
      cout<<"\n-----------------------";
      cout<<"\nenter first number ";
      cin>>x;
      cout<<"\n enter second number ";
      cin>>y;
      cout<<"\n enter third number ";
      cin>>z;
      cout<<"\n-----------------------";
    }
    void display()
    {
        cout<<"numbers "<<x<<" "<<y<<" "<<z<<endl;
    }
    void operator-()
    {
        x=-x;
        y=-y;
        z=-z;
    }
};
int main()
{
    Number n1;
    n1.input();
    cout<<"\n\n Number are :\n\n";
    n1.display();
    -n1;
    cout<<"\nthe operator unary minus (-) to negate the numbers";
    cout<<endl<<endl;
    n1.display();

}
