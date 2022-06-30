#include<iostream>
using namespace std;
class demo
{
    public:
    int i;
    const int j;
    demo(int a,int b):j(b)
    {

      i=a;

    }
  void fun()
  {
    
    cout<<"inside fun\n";
    i++;


  }
  void gun(int a,const int b)const
  {
     int x=10;
     const int y=20;
     cout<<"inside gun\n";

      //i++; not allowed

      x++;
      cout<<x<<"\n";
      //y++;
      a++;
      cout<<a<<"\n";
     // b++; not allowed
  }

};



int main()
{
   demo dobj(11,21);
   const demo dobj1(11,21);
   cout<<dobj.i<<"\n";
   cout<<dobj.j<<"\n";
   dobj.fun();
   dobj.gun(11,21);

    return 0;
}