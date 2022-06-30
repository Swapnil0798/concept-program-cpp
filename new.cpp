#include<iostream>
using namespace std;
class demo
{
   public:
       int x;
       int y;
        
         demo()
         {
          cout<<"inside constructor\n";

         }
         ~demo()
         {
             cout<<"inside destructor\n";
         }
         void fun()
         {
             cout<<"inside fun\n";
         }

};

int main()
{
    demo obj;
    
    demo*ptr=NULL;
    ptr=new demo;
    obj.fun();
    ptr->fun();
    delete []ptr;




    return 0;
}