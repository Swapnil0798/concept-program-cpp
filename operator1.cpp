#include<iostream>
using namespace std;
class demo
{
    public:
    int x;
    int y;
    demo(int i=10,int j=21)
    {
           x=i;
           y=j;
           
    }
  

};
bool operator ==(demo op1,demo op2)
{
    if(op1.x==op2.x&&op1.y==op2.y)
    {
    return true;
    }
    else{
        return false;
    }
}





int main()
{
    demo obj1(11,21);
    demo obj2(100,212);
    
    if(obj1==obj2)
    {
        cout<<"obj are same\n";
    }
    else
    {
        cout<<"obj are not same\n";
        }   
    return 0;
}