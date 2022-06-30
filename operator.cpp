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

demo operator +(demo ope1,demo ope2)
{
    cout<<"inside +operator\n";
    return(ope1.x+ope2.x,ope1.y+ope2.y);
}
int main()
{
    demo obj(12,23);
    
    demo obj1(21,32);
    demo obj2(0,0);
    
     obj2=obj+obj1;
     
     cout<<obj2.x<<"\n";
     cout<<obj2.y<<"\n";
    return 0;
}