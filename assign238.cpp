#include<iostream>
using namespace std;
class demo
{
    public:
    void fun(int i)
    {
        cout<<"first defination";

    }
    void fun(int i,int j)
    {
        cout<<"second defination";

    }

};

int main()
{
    demo obj;

     obj.fun(10);
     obj.fun(10,20);

    return 0;
}