#include<iostream>
using namespace std;
class demo
{
   public:
   int i;
   
   const int j;
   demo():j(20)//member initialisation
   {

      i=10;
     // j=20; //not allowed
   }
   

};


int main()
{
   demo dobj;
   cout<<dobj.i<<"\n";
   cout<<dobj.j<<"\n";


    return 0;
}