/*Write a C++ program to overload unary operators that is increment and decrement.*/
#include<iostream>
using namespace std;
class student
{
    private:
    int age;
    int rank;
    public:
    int getage()
    {
        return age;
    }
    int getrank()
    {
        return rank;
    }
    student()
    {

    }
    student(int a,int b)
    {
        age=a;
        rank=b;
    }
    void display()
    {
        cout<<"stdudent age "<<age<<" "<<"stdudent rank "<<" "<<rank;
    }
    student operator++(int post)
    {
        student temp;
        temp.age= age++;
        temp.rank= rank++;
        return temp;
    }
    student operator++()
    {
        student temp;
        temp.age= ++age;
        temp.rank= ++rank;
        return temp;
    }

};
int main()
{
    student s1(12,24);
    s1.display();
    cout<<endl;
    (++s1).display(); 
    cout<<endl;
    (s1++).display();
    cout<<endl;
    
    

}