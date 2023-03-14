/*9. Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).*/
#include<iostream>
#include<string>
using namespace std;
class mystring
{
    char str[300];
    public:
    void operator!();
    void accept_string()
    {
        cout<<"\n Enter String : ";
        cin>>str;
    }
    void display_string()
    {
        cout<<str;
    }

};
void mystring::operator!()
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        else if (str[i]>=97&&str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    cout<<"\n\n Reverse Case String :"<<str;
}
int main()
{
    mystring s1;
    s1.accept_string();
    cout<<"\n\n string is :";
    s1.display_string();
    cout<<endl;
    !s1;
    return 0;
}
