/*4. Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time.*/
#include<iostream>
using namespace std;
class Time
{
    private:
    int hours,minutes,seconds;
    public:
    Time()
    {
        hours=minutes=seconds=0;
    }
    friend int operator>>(istream &input,Time &t)
    {
        cout<<"\n Enter Hourse   :    ";
        input>>t.hours;
        cout<<"\n Enter Minutes   :    ";
        input>>t.minutes;
        cout<<"\n Enter Secound   :    ";
        input>>t.seconds;
        t.minutes=t.minutes+t.seconds/60;
        t.seconds%=60;
        t.hours=t.hours+t.minutes/60;
        t.minutes%=60;
        if(t.hours>=25)
        return 1;
        else
        return 0;
    }
    friend void operator<<(ostream &output,Time &t)
    {
          output<<"\n Hourse         : "<<t.hours;
          output<<"\n Minutes        : "<<t.minutes;
          output<<"\n Secound         : "<<t.seconds;
    }
    int operator==(Time t1)
    {
        int tot=hours * 3600 + minutes* 60 + seconds;
        int tot1=t1.hours*3600+t1.minutes*60+t1.seconds;
        if(tot==tot1)
        return 1;
        else
        return 0;
    }
   ~ Time(){}

};
int main()
{
    Time t,t1;
    cout<<"\n Enter frist time ";
    cout<<"\n----------------- ";
    if(cin>>t)
    {
        cout<<"\n invalid time";
        return 0;
    }
    cout<<"\n First time";
    cout<<t;
    cout<<"\n\n Enter second time "<<endl;
    cout<<"\n----------------- ";
    if(cin>>t1)
    {
        cout<<"\n invalid time";
        return 0;
    }
    cout<<"\n second time";
    cout<<t1;
    if(t==t1)
    
        cout<<"\n\n time are same ";
    else
        cout<<"\ntime are different ";
        return 0;
    
}