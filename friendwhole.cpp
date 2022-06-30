#include<iostream>
using namespace std;
class hello
{
    public:
   void fun();
   void gun();
};
class demo
{
    public:
    int x;
    protected:
    int y;
    private:
    int z;
    public:
    demo()
    {
        x=10;
        y=13;
        z=14;

    }
    friend  class hello;

};
void hello::fun()
{
    demo dobj;
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";
    cout<<dobj.z<<"\n";
}

void hello::gun()
{
    demo dobj;
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";
    cout<<dobj.z<<"\n";
}

int main()
{

hello hobj;
hobj.fun();
hobj.gun();


    return 0;
}