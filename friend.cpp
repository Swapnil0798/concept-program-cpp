#include<iostream>
using namespace std;
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
    friend  void fun();

};
void fun()
{
    demo dobj;
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";
    cout<<dobj.z<<"\n";
}
int main()
{

fun();
    return 0;
}